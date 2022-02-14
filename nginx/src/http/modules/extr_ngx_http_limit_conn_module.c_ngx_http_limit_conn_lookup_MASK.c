
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {int len; int data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_9__ {TYPE_3__* sentinel; TYPE_3__* root; } ;
typedef TYPE_2__ ngx_rbtree_t ;
struct TYPE_10__ {scalar_t__ key; struct TYPE_10__* right; struct TYPE_10__* left; int color; } ;
typedef TYPE_3__ ngx_rbtree_node_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {scalar_t__ len; int data; } ;
typedef TYPE_4__ ngx_http_limit_conn_node_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,size_t) ;

__attribute__((used)) static ngx_rbtree_node_t *
FUNC_1(ngx_rbtree_t *VAR_0, ngx_str_t *VAR_1, uint32_t VAR_2)
{
    ngx_int_t VAR_3;
    ngx_rbtree_node_t *VAR_4, *VAR_5;
    ngx_http_limit_conn_node_t *VAR_6;

    VAR_4 = VAR_0->root;
    VAR_5 = VAR_0->sentinel;

    while (VAR_4 != VAR_5) {

        if (VAR_2 < VAR_4->key) {
            VAR_4 = VAR_4->left;
            continue;
        }

        if (VAR_2 > VAR_4->key) {
            VAR_4 = VAR_4->right;
            continue;
        }



        VAR_6 = (ngx_http_limit_conn_node_t *) &VAR_4->color;

        VAR_3 = FUNC_0(VAR_1->data, VAR_6->data, VAR_1->len, (size_t) VAR_6->len);

        if (VAR_3 == 0) {
            return VAR_4;
        }

        VAR_4 = (VAR_3 < 0) ? VAR_4->left : VAR_4->right;
    }

    return ((void*)0);
}
