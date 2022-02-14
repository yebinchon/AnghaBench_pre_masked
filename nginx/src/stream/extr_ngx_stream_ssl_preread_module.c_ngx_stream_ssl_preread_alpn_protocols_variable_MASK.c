
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int not_found; int valid; int data; int len; scalar_t__ no_cacheable; } ;
typedef TYPE_2__ ngx_variable_value_t ;
struct TYPE_6__ {int data; int len; } ;
struct TYPE_8__ {TYPE_1__ alpn; } ;
typedef TYPE_3__ ngx_stream_ssl_preread_ctx_t ;
typedef int ngx_stream_session_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_stream_session_t *VAR_2,
    ngx_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    ngx_stream_ssl_preread_ctx_t *VAR_5;

    VAR_5 = FUNC_0(VAR_2, VAR_1);

    if (VAR_5 == ((void*)0)) {
        VAR_3->not_found = 1;
        return VAR_0;
    }

    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;
    VAR_3->len = VAR_5->alpn.len;
    VAR_3->data = VAR_5->alpn.data;

    return VAR_0;
}
