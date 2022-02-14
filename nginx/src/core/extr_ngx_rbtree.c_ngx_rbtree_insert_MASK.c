
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int (* insert ) (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;TYPE_2__* sentinel; TYPE_2__* root; } ;
typedef TYPE_1__ ngx_rbtree_t ;
struct TYPE_18__ {struct TYPE_18__* parent; struct TYPE_18__* left; struct TYPE_18__* right; } ;
typedef TYPE_2__ ngx_rbtree_node_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**,TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__**,TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;

void
FUNC_6(ngx_rbtree_t *VAR_0, ngx_rbtree_node_t *VAR_1)
{
    ngx_rbtree_node_t **VAR_2, *VAR_3, *VAR_4;



    VAR_2 = &VAR_0->root;
    VAR_4 = VAR_0->sentinel;

    if (*VAR_2 == VAR_4) {
        VAR_1->parent = ((void*)0);
        VAR_1->left = VAR_4;
        VAR_1->right = VAR_4;
        FUNC_0(VAR_1);
        *VAR_2 = VAR_1;

        return;
    }

    VAR_0->insert(*VAR_2, VAR_1, VAR_4);



    while (VAR_1 != *VAR_2 && FUNC_1(VAR_1->parent)) {

        if (VAR_1->parent == VAR_1->parent->parent->left) {
            VAR_3 = VAR_1->parent->parent->right;

            if (FUNC_1(VAR_3)) {
                FUNC_0(VAR_1->parent);
                FUNC_0(VAR_3);
                FUNC_2(VAR_1->parent->parent);
                VAR_1 = VAR_1->parent->parent;

            } else {
                if (VAR_1 == VAR_1->parent->right) {
                    VAR_1 = VAR_1->parent;
                    FUNC_3(VAR_2, VAR_4, VAR_1);
                }

                FUNC_0(VAR_1->parent);
                FUNC_2(VAR_1->parent->parent);
                FUNC_4(VAR_2, VAR_4, VAR_1->parent->parent);
            }

        } else {
            VAR_3 = VAR_1->parent->parent->left;

            if (FUNC_1(VAR_3)) {
                FUNC_0(VAR_1->parent);
                FUNC_0(VAR_3);
                FUNC_2(VAR_1->parent->parent);
                VAR_1 = VAR_1->parent->parent;

            } else {
                if (VAR_1 == VAR_1->parent->left) {
                    VAR_1 = VAR_1->parent;
                    FUNC_4(VAR_2, VAR_4, VAR_1);
                }

                FUNC_0(VAR_1->parent);
                FUNC_2(VAR_1->parent->parent);
                FUNC_3(VAR_2, VAR_4, VAR_1->parent->parent);
            }
        }
    }

    FUNC_0(*VAR_2);
}
