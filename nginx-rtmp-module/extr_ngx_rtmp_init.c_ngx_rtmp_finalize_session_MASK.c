
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int log; int handler; TYPE_1__* data; } ;
struct TYPE_6__ {TYPE_2__ close; TYPE_3__* connection; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_8__ {int destroyed; int log; } ;
typedef TYPE_3__ ngx_connection_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_2(ngx_rtmp_session_t *VAR_3)
{
    ngx_event_t *VAR_4;
    ngx_connection_t *VAR_5;

    VAR_5 = VAR_3->connection;
    if (VAR_5->destroyed) {
        return;
    }

    FUNC_0(VAR_0, VAR_5->log, 0, "finalize session");

    VAR_5->destroyed = 1;
    VAR_4 = &VAR_3->close;
    VAR_4->data = VAR_3;
    VAR_4->handler = VAR_2;
    VAR_4->log = VAR_5->log;

    FUNC_1(VAR_4, &VAR_1);
}
