
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_7__ {int not_found; int valid; int * data; int * len; scalar_t__ no_cacheable; } ;
typedef TYPE_2__ ngx_stream_variable_value_t ;
struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_stream_session_t ;
typedef int ngx_proxy_protocol_t ;
typedef int ngx_int_t ;
typedef int in_port_t ;
struct TYPE_6__ {int pool; int * proxy_protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int) ;
 int * FUNC_1 (int *,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_stream_session_t *VAR_2,
    ngx_stream_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    ngx_uint_t VAR_5;
    ngx_proxy_protocol_t *VAR_6;

    VAR_6 = VAR_2->connection->proxy_protocol;
    if (VAR_6 == ((void*)0)) {
        VAR_3->not_found = 1;
        return VAR_1;
    }

    VAR_3->len = 0;
    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;

    VAR_3->data = FUNC_0(VAR_2->connection->pool, sizeof("65535") - 1);
    if (VAR_3->data == ((void*)0)) {
        return VAR_0;
    }

    VAR_5 = *(in_port_t *) ((char *) VAR_6 + VAR_4);

    if (VAR_5 > 0 && VAR_5 < 65536) {
        VAR_3->len = FUNC_1(VAR_3->data, "%ui", VAR_5) - VAR_3->data;
    }

    return VAR_1;
}
