
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RavlNode {void* height; struct RavlNode* right; struct RavlNode* left; } ;


 void* FUNC_0 (struct RavlNode*) ;
 void* FUNC_1 (void*,void*) ;

__attribute__((used)) static struct RavlNode *
FUNC_2(struct RavlNode* VAR_0)
{
    struct RavlNode* VAR_1;

    VAR_1 = VAR_0->right;
    VAR_0->right = VAR_1->left;
    VAR_1->left = VAR_0;

    VAR_0->height = FUNC_1( FUNC_0( VAR_0->left ), FUNC_0( VAR_0->right ) ) + 1;
    VAR_1->height = FUNC_1( FUNC_0( VAR_1->right ), VAR_0->height ) + 1;

    return VAR_1;
}
