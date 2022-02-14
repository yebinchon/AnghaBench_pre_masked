
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; scalar_t__ escape; scalar_t__ not_found; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
typedef int ngx_http_request_t ;


 TYPE_1__* FUNC_0 (int *,uintptr_t) ;

__attribute__((used)) static size_t
FUNC_1(ngx_http_request_t *VAR_0, uintptr_t VAR_1)
{
    ngx_http_variable_value_t *VAR_2;

    VAR_2 = FUNC_0(VAR_0, VAR_1);

    if (VAR_2 == ((void*)0) || VAR_2->not_found) {
        return 0;
    }

    VAR_2->escape = 0;

    return VAR_2->len;
}
