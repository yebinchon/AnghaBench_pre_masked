
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_7__ {int valid; int data; scalar_t__ not_found; scalar_t__ no_cacheable; int len; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
typedef int ngx_http_request_t ;
struct TYPE_6__ {int data; int len; } ;
struct TYPE_8__ {TYPE_1__ server_name; } ;
typedef TYPE_3__ ngx_http_core_srv_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2,
    ngx_http_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    ngx_http_core_srv_conf_t *VAR_5;

    VAR_5 = FUNC_0(VAR_2, VAR_1);

    VAR_3->len = VAR_5->server_name.len;
    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;
    VAR_3->data = VAR_5->server_name.data;

    return VAR_0;
}
