
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_6__ {int len; int valid; int * data; scalar_t__ not_found; scalar_t__ no_cacheable; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
struct TYPE_7__ {scalar_t__ request_complete; } ;
typedef TYPE_2__ ngx_http_request_t ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_2,
    ngx_http_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    if (VAR_2->request_complete) {
        VAR_3->len = 2;
        VAR_3->valid = 1;
        VAR_3->no_cacheable = 0;
        VAR_3->not_found = 0;
        VAR_3->data = (u_char *) "OK";

        return VAR_0;
    }

    *VAR_3 = VAR_1;

    return VAR_0;
}
