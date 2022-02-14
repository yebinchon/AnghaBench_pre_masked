
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* connection; } ;
typedef TYPE_2__ ngx_stream_session_t ;
typedef int ngx_stream_phase_handler_t ;
struct TYPE_13__ {int (* handler ) (TYPE_2__*) ;scalar_t__ tcp_nodelay; } ;
typedef TYPE_3__ ngx_stream_core_srv_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {scalar_t__ type; TYPE_1__* log; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_11__ {int * action; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*) ;

ngx_int_t
FUNC_4(ngx_stream_session_t *VAR_4,
    ngx_stream_phase_handler_t *VAR_5)
{
    ngx_connection_t *VAR_6;
    ngx_stream_core_srv_conf_t *VAR_7;

    VAR_6 = VAR_4->connection;

    VAR_6->log->action = ((void*)0);

    VAR_7 = FUNC_1(VAR_4, VAR_3);

    if (VAR_6->type == VAR_2
        && VAR_7->tcp_nodelay
        && FUNC_2(VAR_6) != VAR_0)
    {
        FUNC_0(VAR_4, VAR_1);
        return VAR_0;
    }

    VAR_7->handler(VAR_4);

    return VAR_0;
}
