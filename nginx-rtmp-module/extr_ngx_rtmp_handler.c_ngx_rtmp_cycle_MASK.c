
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int handler; int log; TYPE_4__* data; } ;
struct TYPE_10__ {TYPE_2__ ping_evt; TYPE_4__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_11__ {TYPE_6__* read; int log; TYPE_1__* write; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_12__ {int (* handler ) (TYPE_6__*) ;} ;
struct TYPE_8__ {int handler; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;

void
FUNC_2(ngx_rtmp_session_t *VAR_2)
{
    ngx_connection_t *VAR_3;

    VAR_3 = VAR_2->connection;
    VAR_3->read->handler = FUNC_0;
    VAR_3->write->handler = VAR_1;

    VAR_2->ping_evt.data = VAR_3;
    VAR_2->ping_evt.log = VAR_3->log;
    VAR_2->ping_evt.handler = VAR_0;
    FUNC_1(VAR_2);

    FUNC_0(VAR_3->read);
}
