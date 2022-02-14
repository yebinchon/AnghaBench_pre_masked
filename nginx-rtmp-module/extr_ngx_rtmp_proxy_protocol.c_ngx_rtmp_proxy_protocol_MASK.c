
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int timeout; TYPE_3__* connection; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
struct TYPE_12__ {int (* handler ) (TYPE_2__*) ;scalar_t__ ready; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_13__ {int log; TYPE_2__* read; } ;
typedef TYPE_3__ ngx_connection_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(ngx_rtmp_session_t *VAR_4)
{
    ngx_event_t *VAR_5;
    ngx_connection_t *VAR_6;

    VAR_6 = VAR_4->connection;
    VAR_5 = VAR_6->read;
    VAR_5->handler = FUNC_5;

    FUNC_2(VAR_0, VAR_4->connection->log, 0,
                   "proxy_protocol: start");

    if (VAR_5->ready) {


        if (VAR_3) {
            FUNC_3(VAR_5, &VAR_2);
            return;
        }

        VAR_5->handler(VAR_5);
        return;
    }

    FUNC_0(VAR_5, VAR_4->timeout);

    if (FUNC_1(VAR_5, 0) != VAR_1) {
        FUNC_4(VAR_4);
        return;
    }
}
