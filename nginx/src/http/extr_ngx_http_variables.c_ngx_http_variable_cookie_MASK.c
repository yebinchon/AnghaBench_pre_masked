
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int data; scalar_t__ len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int not_found; int valid; int data; scalar_t__ no_cacheable; scalar_t__ len; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_9__ {int cookies; } ;
struct TYPE_12__ {TYPE_1__ headers_in; } ;
typedef TYPE_4__ ngx_http_request_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2, ngx_http_variable_value_t *VAR_3,
    uintptr_t VAR_4)
{
    ngx_str_t *VAR_5 = (ngx_str_t *) VAR_4;

    ngx_str_t VAR_6, VAR_7;

    VAR_7.len = VAR_5->len - (sizeof("cookie_") - 1);
    VAR_7.data = VAR_5->data + sizeof("cookie_") - 1;

    if (FUNC_0(&VAR_2->headers_in.cookies, &VAR_7, &VAR_6)
        == VAR_0)
    {
        VAR_3->not_found = 1;
        return VAR_1;
    }

    VAR_3->len = VAR_6.len;
    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;
    VAR_3->data = VAR_6.data;

    return VAR_1;
}
