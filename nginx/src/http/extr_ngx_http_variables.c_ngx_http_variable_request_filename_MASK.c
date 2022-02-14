
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; scalar_t__ len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {int valid; int data; scalar_t__ not_found; scalar_t__ no_cacheable; scalar_t__ len; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
typedef int ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,TYPE_1__*,size_t*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2,
    ngx_http_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    size_t VAR_5;
    ngx_str_t VAR_6;

    if (FUNC_0(VAR_2, &VAR_6, &VAR_5, 0) == ((void*)0)) {
        return VAR_0;
    }



    VAR_3->len = VAR_6.len - 1;
    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;
    VAR_3->data = VAR_6.data;

    return VAR_1;
}
