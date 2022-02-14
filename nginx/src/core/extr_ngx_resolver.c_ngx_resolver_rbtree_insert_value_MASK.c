
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nlen; int name; } ;
typedef TYPE_1__ ngx_resolver_node_t ;
struct TYPE_10__ {scalar_t__ key; struct TYPE_10__* right; struct TYPE_10__* left; struct TYPE_10__* parent; } ;
typedef TYPE_2__ ngx_rbtree_node_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(ngx_rbtree_node_t *VAR_0,
    ngx_rbtree_node_t *VAR_1, ngx_rbtree_node_t *VAR_2)
{
    ngx_rbtree_node_t **VAR_3;
    ngx_resolver_node_t *VAR_4, *VAR_5;

    for ( ;; ) {

        if (VAR_1->key < VAR_0->key) {

            VAR_3 = &VAR_0->left;

        } else if (VAR_1->key > VAR_0->key) {

            VAR_3 = &VAR_0->right;

        } else {

            VAR_4 = FUNC_2(VAR_1);
            VAR_5 = FUNC_2(VAR_0);

            VAR_3 = (FUNC_0(VAR_4->name, VAR_5->name, VAR_4->nlen, VAR_5->nlen)
                 < 0) ? &VAR_0->left : &VAR_0->right;
        }

        if (*VAR_3 == VAR_2) {
            break;
        }

        VAR_0 = *VAR_3;
    }

    *VAR_3 = VAR_1;
    VAR_1->parent = VAR_0;
    VAR_1->left = VAR_2;
    VAR_1->right = VAR_2;
    FUNC_1(VAR_1);
}
