
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_9__ {int len; int data; } ;
struct TYPE_10__ {TYPE_1__ value; } ;
typedef TYPE_2__ ngx_table_elt_t ;
struct TYPE_11__ {int len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_12__ {size_t nelts; TYPE_2__** elts; } ;
typedef TYPE_4__ ngx_array_t ;
typedef int ngx_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int ,TYPE_4__*,int) ;

ngx_int_t
FUNC_1(ngx_http_request_t *VAR_3, ngx_addr_t *VAR_4,
    ngx_array_t *VAR_5, ngx_str_t *VAR_6, ngx_array_t *VAR_7,
    int VAR_8)
{
    ngx_int_t VAR_9;
    ngx_uint_t VAR_10, VAR_11;
    ngx_table_elt_t **VAR_12;

    if (VAR_5 == ((void*)0)) {
        return FUNC_0(VAR_3, VAR_4, VAR_6->data,
                                                    VAR_6->len, VAR_7,
                                                    VAR_8);
    }

    VAR_10 = VAR_5->nelts;
    VAR_12 = VAR_5->elts;

    VAR_9 = VAR_0;

    VAR_11 = 0;

    while (VAR_10-- > 0) {
        VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_12[VAR_10]->value.data,
                                                  VAR_12[VAR_10]->value.len, VAR_7,
                                                  VAR_8);

        if (!VAR_8) {
            break;
        }

        if (VAR_9 == VAR_0 && VAR_11) {
            VAR_9 = VAR_1;
            break;
        }

        if (VAR_9 != VAR_2) {
            break;
        }

        VAR_11 = 1;
    }

    return VAR_9;
}
