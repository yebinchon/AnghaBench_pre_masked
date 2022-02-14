
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t len; int valid; int not_found; scalar_t__ no_cacheable; scalar_t__* data; } ;
typedef TYPE_1__ ngx_stream_variable_value_t ;
struct TYPE_9__ {TYPE_4__* connection; } ;
typedef TYPE_2__ ngx_stream_session_t ;
struct TYPE_10__ {scalar_t__* data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int (* ngx_ssl_variable_handler_pt ) (TYPE_4__*,int *,TYPE_3__*) ;
typedef int ngx_int_t ;
struct TYPE_11__ {scalar_t__ ssl; } ;


 int VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_stream_session_t *VAR_1,
    ngx_stream_variable_value_t *VAR_2, uintptr_t VAR_3)
{
    ngx_ssl_variable_handler_pt VAR_4 = (ngx_ssl_variable_handler_pt) VAR_3;

    size_t VAR_5;
    ngx_str_t VAR_6;

    if (VAR_1->connection->ssl) {

        (void) VAR_4(VAR_1->connection, ((void*)0), &VAR_6);

        VAR_2->data = VAR_6.data;

        for (VAR_5 = 0; VAR_2->data[VAR_5]; VAR_5++) { }

        VAR_2->len = VAR_5;
        VAR_2->valid = 1;
        VAR_2->no_cacheable = 0;
        VAR_2->not_found = 0;

        return VAR_0;
    }

    VAR_2->not_found = 1;

    return VAR_0;
}
