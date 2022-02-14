
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int hs_stage; int hs_buf; TYPE_3__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_9__ {TYPE_4__* read; int log; TYPE_1__* write; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_10__ {int (* handler ) (TYPE_4__*) ;} ;
struct TYPE_7__ {int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_2 ;

void
FUNC_3(ngx_rtmp_session_t *VAR_3)
{
    ngx_connection_t *VAR_4;

    VAR_4 = VAR_3->connection;
    VAR_4->read->handler = FUNC_2;
    VAR_4->write->handler = VAR_2;

    FUNC_0(VAR_0, VAR_3->connection->log, 0,
            "handshake: start server handshake");

    VAR_3->hs_buf = FUNC_1(VAR_3);
    VAR_3->hs_stage = VAR_1;

    FUNC_2(VAR_4->read);
}
