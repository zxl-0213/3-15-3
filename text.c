/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

//树的高度
int TreeHight(struct TreeNode* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lefthight=TreeHight(root->left);
    int righthight=TreeHight(root->right);
    return lefthight>righthight?lefthight+1:righthight+1;
}
bool isBalanced(struct TreeNode* root){
    if(root==NULL)
    {
        return true;
    }
    int lefthight=TreeHight(root->left);
    int righthight=TreeHight(root->right);
    return abs(lefthight-righthight)<2&&isBalanced(root->left)&&isBalanced(root->right);

}