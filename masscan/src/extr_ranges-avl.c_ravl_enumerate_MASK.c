
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RavlNode {struct RavlNode* right; struct RavlNode* left; int ip_end; int ip_begin; } ;
typedef int (* RAVL_CALLBACK ) (void*,int ,int ) ;



void
FUNC_0(struct RavlNode *VAR_0, RAVL_CALLBACK VAR_1, void *VAR_2)
{
    if (VAR_0 == ((void*)0))
        return;

    VAR_1(VAR_2, VAR_0->ip_begin, VAR_0->ip_end);

    FUNC_0(VAR_0->left, VAR_1, VAR_2);
    FUNC_0(VAR_0->right, VAR_1, VAR_2);
}
