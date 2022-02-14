
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_11__ {int data; int len; } ;
struct TYPE_12__ {TYPE_2__ name; } ;
typedef TYPE_3__ ngx_thread_pool_t ;
struct TYPE_10__ {size_t nelts; TYPE_3__** elts; } ;
struct TYPE_13__ {TYPE_1__ pools; } ;
typedef TYPE_4__ ngx_thread_pool_conf_t ;
struct TYPE_14__ {int len; int data; } ;
typedef TYPE_5__ ngx_str_t ;
struct TYPE_15__ {int conf_ctx; } ;
typedef TYPE_6__ ngx_cycle_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;

ngx_thread_pool_t *
FUNC_2(ngx_cycle_t *VAR_1, ngx_str_t *VAR_2)
{
    ngx_uint_t VAR_3;
    ngx_thread_pool_t **VAR_4;
    ngx_thread_pool_conf_t *VAR_5;

    VAR_5 = (ngx_thread_pool_conf_t *) FUNC_0(VAR_1->conf_ctx,
                                                  VAR_0);

    VAR_4 = VAR_5->pools.elts;

    for (VAR_3 = 0; VAR_3 < VAR_5->pools.nelts; VAR_3++) {

        if (VAR_4[VAR_3]->name.len == VAR_2->len
            && FUNC_1(VAR_4[VAR_3]->name.data, VAR_2->data, VAR_2->len) == 0)
        {
            return VAR_4[VAR_3];
        }
    }

    return ((void*)0);
}
