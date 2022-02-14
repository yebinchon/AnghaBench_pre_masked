
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_7__ {scalar_t__ not_found; scalar_t__ valid; int no_cacheable; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
struct TYPE_8__ {TYPE_1__* variables; } ;
typedef TYPE_2__ ngx_http_request_t ;


 TYPE_1__* FUNC_0 (TYPE_2__*,size_t) ;

ngx_http_variable_value_t *
FUNC_1(ngx_http_request_t *VAR_0, ngx_uint_t VAR_1)
{
    ngx_http_variable_value_t *VAR_2;

    VAR_2 = &VAR_0->variables[VAR_1];

    if (VAR_2->valid || VAR_2->not_found) {
        if (!VAR_2->no_cacheable) {
            return VAR_2;
        }

        VAR_2->valid = 0;
        VAR_2->not_found = 0;
    }

    return FUNC_0(VAR_0, VAR_1);
}
