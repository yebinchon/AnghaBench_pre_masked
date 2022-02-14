
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int log; scalar_t__ timedout; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_9__ {int timedout; TYPE_1__* ssl; } ;
typedef TYPE_3__ ngx_connection_t ;
typedef int (* ngx_connection_handler_pt ) (TYPE_3__*) ;
struct TYPE_7__ {int (* handler ) (TYPE_3__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(ngx_event_t *VAR_2)
{
    ngx_connection_t *VAR_3;
    ngx_connection_handler_pt VAR_4;

    VAR_3 = VAR_2->data;
    VAR_4 = VAR_3->ssl->handler;

    if (VAR_2->timedout) {
        VAR_3->timedout = 1;
    }

    FUNC_0(VAR_1, VAR_2->log, 0, "SSL shutdown handler");

    if (FUNC_1(VAR_3) == VAR_0) {
        return;
    }

    VAR_4(VAR_3);
}
