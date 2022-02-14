
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RavlNode {unsigned int ip_begin; unsigned int ip_end; struct RavlNode* right; struct RavlNode* left; scalar_t__ height; } ;


 struct RavlNode* FUNC_0 (int) ;
 struct RavlNode* FUNC_1 (struct RavlNode*) ;
 struct RavlNode* FUNC_2 (struct RavlNode*) ;
 int FUNC_3 (struct RavlNode*) ;
 scalar_t__ FUNC_4 (int,int) ;
 struct RavlNode* FUNC_5 (struct RavlNode*) ;
 struct RavlNode* FUNC_6 (struct RavlNode*) ;

struct RavlNode *
FUNC_7(unsigned VAR_0, unsigned VAR_1, struct RavlNode *VAR_2)
{
    if (VAR_2 == ((void*)0)) {
        VAR_2 = FUNC_0(sizeof(struct RavlNode));
        VAR_2->ip_begin = VAR_0;
        VAR_2->ip_end = VAR_1;
        VAR_2->height = 0;
        VAR_2->left = VAR_2->right = ((void*)0);
    } else if (VAR_0 < VAR_2->ip_begin) {
        VAR_2->left = FUNC_7(VAR_0, VAR_1, VAR_2->left);

        if (FUNC_3(VAR_2->left) - FUNC_3(VAR_2->right) == 2) {
            if (VAR_0 < VAR_2->left->ip_begin)
                VAR_2 = FUNC_5(VAR_2);
            else
                VAR_2 = FUNC_1(VAR_2);
        }
    } else if (VAR_0 > VAR_2->ip_begin) {
        VAR_2->right = FUNC_7(VAR_0, VAR_1, VAR_2->right);

        if (FUNC_3(VAR_2->right) - FUNC_3(VAR_2->left) == 2) {
            if (VAR_0 > VAR_2->right->ip_begin)
                VAR_2 = FUNC_6(VAR_2);
            else
                VAR_2 = FUNC_2(VAR_2);
        }
    } else {

        ;
    }

    VAR_2->height = FUNC_4( FUNC_3( VAR_2->left ), FUNC_3( VAR_2->right ) ) + 1;

    return VAR_2;
}
