
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {uintptr_t len; int escape; int data; scalar_t__ not_found; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
typedef int ngx_http_request_t ;


 uintptr_t FUNC_0 (int *,int ,uintptr_t) ;
 TYPE_1__* FUNC_1 (int *,uintptr_t) ;

__attribute__((used)) static size_t
FUNC_2(ngx_http_request_t *VAR_0, uintptr_t VAR_1)
{
    uintptr_t VAR_2;
    ngx_http_variable_value_t *VAR_3;

    VAR_3 = FUNC_1(VAR_0, VAR_1);

    if (VAR_3 == ((void*)0) || VAR_3->not_found) {
        return 0;
    }

    VAR_2 = FUNC_0(((void*)0), VAR_3->data, VAR_3->len);

    VAR_3->escape = VAR_2 ? 1 : 0;

    return VAR_3->len + VAR_2;
}
