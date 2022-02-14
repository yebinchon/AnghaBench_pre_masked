
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_7__ {int valid; int * data; scalar_t__ not_found; scalar_t__ no_cacheable; int len; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_6__ {scalar_t__ status; } ;
struct TYPE_8__ {scalar_t__ keepalive; TYPE_1__ headers_out; } ;
typedef TYPE_3__ ngx_http_request_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_2,
    ngx_http_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    size_t VAR_5;
    char *VAR_6;

    if (VAR_2->headers_out.status == VAR_0) {
        VAR_5 = sizeof("upgrade") - 1;
        VAR_6 = "upgrade";

    } else if (VAR_2->keepalive) {
        VAR_5 = sizeof("keep-alive") - 1;
        VAR_6 = "keep-alive";

    } else {
        VAR_5 = sizeof("close") - 1;
        VAR_6 = "close";
    }

    VAR_3->len = VAR_5;
    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;
    VAR_3->data = (u_char *) VAR_6;

    return VAR_1;
}
