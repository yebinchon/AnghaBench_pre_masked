
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {int not_found; int valid; int data; scalar_t__ no_cacheable; int len; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_8__ {int data; int len; } ;
struct TYPE_9__ {TYPE_1__ user; } ;
struct TYPE_11__ {TYPE_2__ headers_in; } ;
typedef TYPE_4__ ngx_http_request_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_3,
    ngx_http_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    ngx_int_t VAR_6;

    VAR_6 = FUNC_0(VAR_3);

    if (VAR_6 == VAR_0) {
        VAR_4->not_found = 1;
        return VAR_2;
    }

    if (VAR_6 == VAR_1) {
        return VAR_1;
    }

    VAR_4->len = VAR_3->headers_in.user.len;
    VAR_4->valid = 1;
    VAR_4->no_cacheable = 0;
    VAR_4->not_found = 0;
    VAR_4->data = VAR_3->headers_in.user.data;

    return VAR_2;
}
