
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int valid; int not_found; scalar_t__ no_cacheable; int len; int data; } ;
typedef TYPE_1__ ngx_stream_variable_value_t ;
struct TYPE_9__ {TYPE_4__* connection; } ;
typedef TYPE_2__ ngx_stream_session_t ;
struct TYPE_10__ {int data; int len; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ (* ngx_ssl_variable_handler_pt ) (TYPE_4__*,int ,TYPE_3__*) ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {int pool; scalar_t__ ssl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_stream_session_t *VAR_2,
    ngx_stream_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    ngx_ssl_variable_handler_pt VAR_5 = (ngx_ssl_variable_handler_pt) VAR_4;

    ngx_str_t VAR_6;

    if (VAR_2->connection->ssl) {

        if (VAR_5(VAR_2->connection, VAR_2->connection->pool, &VAR_6) != VAR_1) {
            return VAR_0;
        }

        VAR_3->len = VAR_6.len;
        VAR_3->data = VAR_6.data;

        if (VAR_3->len) {
            VAR_3->valid = 1;
            VAR_3->no_cacheable = 0;
            VAR_3->not_found = 0;

            return VAR_1;
        }
    }

    VAR_3->not_found = 1;

    return VAR_1;
}
