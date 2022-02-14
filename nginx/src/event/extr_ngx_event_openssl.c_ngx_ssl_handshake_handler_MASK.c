
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ timedout; int write; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_10__ {TYPE_1__* ssl; int log; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_8__ {int (* handler ) (TYPE_3__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(ngx_event_t *VAR_2)
{
    ngx_connection_t *VAR_3;

    VAR_3 = VAR_2->data;

    FUNC_0(VAR_1, VAR_3->log, 0,
                   "SSL handshake handler: %d", VAR_2->write);

    if (VAR_2->timedout) {
        VAR_3->ssl->handler(VAR_3);
        return;
    }

    if (FUNC_1(VAR_3) == VAR_0) {
        return;
    }

    VAR_3->ssl->handler(VAR_3);
}
