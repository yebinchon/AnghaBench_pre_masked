
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int valid; int data; scalar_t__ not_found; scalar_t__ no_cacheable; int len; } ;
typedef TYPE_2__ ngx_stream_variable_value_t ;
struct TYPE_12__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_stream_session_t ;
struct TYPE_14__ {int data; int len; } ;
struct TYPE_13__ {TYPE_5__ addr_text; } ;
typedef TYPE_4__ ngx_stream_realip_ctx_t ;
typedef TYPE_5__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {TYPE_5__ addr_text; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_stream_session_t *VAR_2,
    ngx_stream_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    ngx_str_t *VAR_5;
    ngx_stream_realip_ctx_t *VAR_6;

    VAR_6 = FUNC_0(VAR_2, VAR_1);

    VAR_5 = VAR_6 ? &VAR_6->addr_text : &VAR_2->connection->addr_text;

    VAR_3->len = VAR_5->len;
    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;
    VAR_3->data = VAR_5->data;

    return VAR_0;
}
