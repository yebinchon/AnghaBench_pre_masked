
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {scalar_t__ key; struct TYPE_10__* right; struct TYPE_10__* left; } ;
typedef TYPE_3__ ngx_rbtree_node_t ;
typedef scalar_t__ ngx_rbtree_key_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {TYPE_2__* sh; } ;
typedef TYPE_4__ ngx_http_file_cache_t ;
struct TYPE_12__ {int key; } ;
typedef TYPE_5__ ngx_http_file_cache_node_t ;
struct TYPE_8__ {TYPE_3__* sentinel; TYPE_3__* root; } ;
struct TYPE_9__ {TYPE_1__ rbtree; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static ngx_http_file_cache_node_t *
FUNC_2(ngx_http_file_cache_t *VAR_1, u_char *VAR_2)
{
    ngx_int_t VAR_3;
    ngx_rbtree_key_t VAR_4;
    ngx_rbtree_node_t *VAR_5, *VAR_6;
    ngx_http_file_cache_node_t *VAR_7;

    FUNC_1((u_char *) &VAR_4, VAR_2, sizeof(ngx_rbtree_key_t));

    VAR_5 = VAR_1->sh->rbtree.root;
    VAR_6 = VAR_1->sh->rbtree.sentinel;

    while (VAR_5 != VAR_6) {

        if (VAR_4 < VAR_5->key) {
            VAR_5 = VAR_5->left;
            continue;
        }

        if (VAR_4 > VAR_5->key) {
            VAR_5 = VAR_5->right;
            continue;
        }



        VAR_7 = (ngx_http_file_cache_node_t *) VAR_5;

        VAR_3 = FUNC_0(&VAR_2[sizeof(ngx_rbtree_key_t)], VAR_7->key,
                        VAR_0 - sizeof(ngx_rbtree_key_t));

        if (VAR_3 == 0) {
            return VAR_7;
        }

        VAR_5 = (VAR_3 < 0) ? VAR_5->left : VAR_5->right;
    }



    return ((void*)0);
}
