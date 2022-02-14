
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_8__ {int not_found; int valid; int * data; int * len; scalar_t__ no_cacheable; } ;
typedef TYPE_1__ ngx_http_variable_value_t ;
struct TYPE_9__ {int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_10__ {scalar_t__ internal_body_length; } ;
typedef TYPE_3__ ngx_http_proxy_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 (int *,char*,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_4,
    ngx_http_variable_value_t *VAR_5, uintptr_t VAR_6)
{
    ngx_http_proxy_ctx_t *VAR_7;

    VAR_7 = FUNC_0(VAR_4, VAR_3);

    if (VAR_7 == ((void*)0) || VAR_7->internal_body_length < 0) {
        VAR_5->not_found = 1;
        return VAR_2;
    }

    VAR_5->valid = 1;
    VAR_5->no_cacheable = 0;
    VAR_5->not_found = 0;

    VAR_5->data = FUNC_1(VAR_4->pool, VAR_1);

    if (VAR_5->data == ((void*)0)) {
        return VAR_0;
    }

    VAR_5->len = FUNC_2(VAR_5->data, "%O", VAR_7->internal_body_length) - VAR_5->data;

    return VAR_2;
}
