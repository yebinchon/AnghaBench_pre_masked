
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
struct TYPE_10__ {struct TYPE_10__* right; struct TYPE_10__* left; } ;
typedef TYPE_3__ ngx_rbtree_node_t ;
struct TYPE_11__ {int * data; } ;
typedef TYPE_4__ ngx_http_variable_value_t ;
struct TYPE_8__ {int len; int data; } ;
struct TYPE_9__ {TYPE_1__ str; } ;
struct TYPE_12__ {int offset; TYPE_2__ sn; TYPE_4__* value; } ;
typedef TYPE_5__ ngx_http_geo_variable_value_node_t ;


 int * FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static u_char *
FUNC_2(u_char *VAR_0, u_char *VAR_1, ngx_rbtree_node_t *VAR_2,
    ngx_rbtree_node_t *VAR_3)
{
    ngx_http_variable_value_t *VAR_4;
    ngx_http_geo_variable_value_node_t *VAR_5;

    if (VAR_2 == VAR_3) {
        return VAR_1;
    }

    VAR_5 = (ngx_http_geo_variable_value_node_t *) VAR_2;
    VAR_5->offset = VAR_1 - VAR_0;

    VAR_4 = (ngx_http_variable_value_t *) VAR_1;
    *VAR_4 = *VAR_5->value;
    VAR_1 += sizeof(ngx_http_variable_value_t);
    VAR_4->data = (u_char *) (VAR_1 - VAR_0);

    VAR_1 = FUNC_1(VAR_1, VAR_5->sn.str.data, VAR_5->sn.str.len);

    VAR_1 = FUNC_0(VAR_1, sizeof(void *));

    VAR_1 = FUNC_2(VAR_0, VAR_1, VAR_2->left, VAR_3);

    return FUNC_2(VAR_0, VAR_1, VAR_2->right, VAR_3);
}
