
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
typedef int ngx_http_fastcgi_loc_conf_t ;
struct TYPE_6__ {int data; int len; } ;
struct TYPE_8__ {TYPE_1__ path_info; } ;
typedef TYPE_3__ ngx_http_fastcgi_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3,
    ngx_http_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    ngx_http_fastcgi_ctx_t *VAR_6;
    ngx_http_fastcgi_loc_conf_t *VAR_7;

    VAR_7 = FUNC_1(VAR_3, VAR_2);

    VAR_6 = FUNC_0(VAR_3, VAR_7);

    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4->len = VAR_6->path_info.len;
    VAR_4->valid = 1;
    VAR_4->no_cacheable = 0;
    VAR_4->not_found = 0;
    VAR_4->data = VAR_6->path_info.data;

    return VAR_1;
}
