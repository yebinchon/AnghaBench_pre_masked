
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RavlNode {struct RavlNode* right; struct RavlNode* left; } ;


 int FUNC_0 (struct RavlNode*) ;

void
FUNC_1(struct RavlNode *VAR_0)
{
    if (VAR_0 != ((void*)0)) {
        FUNC_1(VAR_0->left);
        FUNC_1(VAR_0->right);
        FUNC_0(VAR_0);
    }
}
