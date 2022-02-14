
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
struct TYPE_9__ {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_10__ {TYPE_2__ value; } ;
typedef TYPE_3__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int not_found; int valid; int len; int * data; scalar_t__ no_cacheable; } ;
typedef TYPE_4__ ngx_http_variable_value_t ;
struct TYPE_8__ {TYPE_3__* te; } ;
struct TYPE_12__ {TYPE_1__ headers_in; } ;
typedef TYPE_5__ ngx_http_request_t ;


 int VAR_0 ;
 int * FUNC_0 (scalar_t__,scalar_t__,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_1,
    ngx_http_variable_value_t *VAR_2, uintptr_t VAR_3)
{
    ngx_table_elt_t *VAR_4;

    VAR_4 = VAR_1->headers_in.te;

    if (VAR_4 == ((void*)0)) {
        VAR_2->not_found = 1;
        return VAR_0;
    }

    if (FUNC_0(VAR_4->value.data, VAR_4->value.data + VAR_4->value.len,
                         (u_char *) "trailers", 8 - 1)
        == ((void*)0))
    {
        VAR_2->not_found = 1;
        return VAR_0;
    }

    VAR_2->valid = 1;
    VAR_2->no_cacheable = 0;
    VAR_2->not_found = 0;

    VAR_2->data = (u_char *) "trailers";
    VAR_2->len = sizeof("trailers") - 1;

    return VAR_0;
}
