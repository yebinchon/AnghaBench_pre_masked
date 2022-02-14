
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_14__ {int valid; scalar_t__ not_found; scalar_t__ no_cacheable; int data; scalar_t__ len; } ;
typedef TYPE_4__ ngx_http_variable_value_t ;
struct TYPE_13__ {int data; scalar_t__ len; } ;
struct TYPE_12__ {TYPE_3__ server; } ;
struct TYPE_15__ {TYPE_2__ headers_in; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_11__ {int data; scalar_t__ len; } ;
struct TYPE_16__ {TYPE_1__ server_name; } ;
typedef TYPE_6__ ngx_http_core_srv_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (TYPE_5__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2, ngx_http_variable_value_t *VAR_3,
    uintptr_t VAR_4)
{
    ngx_http_core_srv_conf_t *VAR_5;

    if (VAR_2->headers_in.server.len) {
        VAR_3->len = VAR_2->headers_in.server.len;
        VAR_3->data = VAR_2->headers_in.server.data;

    } else {
        VAR_5 = FUNC_0(VAR_2, VAR_1);

        VAR_3->len = VAR_5->server_name.len;
        VAR_3->data = VAR_5->server_name.data;
    }

    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;

    return VAR_0;
}
