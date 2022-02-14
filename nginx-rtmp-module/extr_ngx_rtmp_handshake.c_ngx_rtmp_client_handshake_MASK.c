
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int timeout; int hs_stage; int hs_buf; TYPE_3__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_13__ {TYPE_4__* write; int log; TYPE_1__* read; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_14__ {int (* handler ) (TYPE_4__*) ;} ;
struct TYPE_11__ {int handler; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int *) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_4__*) ;

void
FUNC_7(ngx_rtmp_session_t *VAR_6, unsigned VAR_7)
{
    ngx_connection_t *VAR_8;

    VAR_8 = VAR_6->connection;
    VAR_8->read->handler = VAR_5;
    VAR_8->write->handler = FUNC_6;

    FUNC_2(VAR_0, VAR_6->connection->log, 0,
            "handshake: start client handshake");

    VAR_6->hs_buf = FUNC_3(VAR_6);
    VAR_6->hs_stage = VAR_2;

    if (FUNC_5(VAR_6,
                VAR_4,
                &VAR_3) != VAR_1)
    {
        FUNC_4(VAR_6);
        return;
    }

    if (VAR_7) {
        FUNC_0(VAR_8->write, VAR_6->timeout);
        if (FUNC_1(VAR_8->write, 0) != VAR_1) {
            FUNC_4(VAR_6);
        }
        return;
    }

    FUNC_6(VAR_8->write);
}
