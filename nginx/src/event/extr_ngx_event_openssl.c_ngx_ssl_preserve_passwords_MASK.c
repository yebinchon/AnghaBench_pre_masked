
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_12__ {int len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_13__ {TYPE_4__* data; int handler; } ;
typedef TYPE_2__ ngx_pool_cleanup_t ;
struct TYPE_14__ {int pool; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_15__ {size_t nelts; TYPE_1__* elts; } ;
typedef TYPE_4__ ngx_array_t ;


 TYPE_4__* FUNC_0 (int ,size_t,int) ;
 TYPE_1__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int VAR_0 ;

ngx_array_t *
FUNC_5(ngx_conf_t *VAR_1, ngx_array_t *VAR_2)
{
    ngx_str_t *VAR_3, *VAR_4;
    ngx_uint_t VAR_5;
    ngx_array_t *VAR_6;
    ngx_pool_cleanup_t *VAR_7;
    static ngx_array_t VAR_8;

    if (VAR_2 == ((void*)0)) {







        return &VAR_8;
    }







    VAR_6 = FUNC_0(VAR_1->pool, VAR_2->nelts, sizeof(ngx_str_t));
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_7 = FUNC_4(VAR_1->pool, 0);
    if (VAR_7 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_7->handler = VAR_0;
    VAR_7->data = VAR_6;

    VAR_3 = VAR_2->elts;

    for (VAR_5 = 0; VAR_5 < VAR_2->nelts; VAR_5++) {

        VAR_4 = FUNC_1(VAR_6);
        if (VAR_4 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_4->len = VAR_3[VAR_5].len;
        VAR_4->data = FUNC_3(VAR_1->pool, VAR_4->len);

        if (VAR_4->data == ((void*)0)) {
            VAR_6->nelts--;
            return ((void*)0);
        }

        FUNC_2(VAR_4->data, VAR_3[VAR_5].data, VAR_3[VAR_5].len);
    }

    return VAR_6;
}
