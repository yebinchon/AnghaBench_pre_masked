
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ key; struct TYPE_6__* right; struct TYPE_6__* left; struct TYPE_6__* parent; } ;
typedef TYPE_1__ ngx_rbtree_node_t ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(ngx_rbtree_node_t *VAR_0, ngx_rbtree_node_t *VAR_1,
    ngx_rbtree_node_t *VAR_2)
{
    ngx_rbtree_node_t **VAR_3;

    for ( ;; ) {

        VAR_3 = (VAR_1->key < VAR_0->key) ? &VAR_0->left : &VAR_0->right;

        if (*VAR_3 == VAR_2) {
            break;
        }

        VAR_0 = *VAR_3;
    }

    *VAR_3 = VAR_1;
    VAR_1->parent = VAR_0;
    VAR_1->left = VAR_2;
    VAR_1->right = VAR_2;
    FUNC_0(VAR_1);
}
