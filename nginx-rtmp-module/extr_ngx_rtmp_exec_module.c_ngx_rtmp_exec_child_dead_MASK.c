
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int handler; int log; TYPE_1__* data; } ;
struct TYPE_8__ {scalar_t__ respawn_timeout; TYPE_7__ respawn_evt; int log; scalar_t__ pid; } ;
typedef TYPE_1__ ngx_rtmp_exec_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_10__ {TYPE_1__* data; } ;
typedef TYPE_3__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_7__*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,char*,int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(ngx_event_t *VAR_4)
{
    ngx_connection_t *VAR_5 = VAR_4->data;
    ngx_rtmp_exec_t *VAR_6;

    VAR_6 = VAR_5->data;

    FUNC_2(VAR_2, VAR_6->log, 0,
                  "exec: child %ui exited; %s", (ngx_int_t) VAR_6->pid,
                  VAR_6->respawn_timeout == VAR_0 ? "respawning" :
                                                               "ignoring");

    FUNC_3(VAR_6, 0);

    if (VAR_6->respawn_timeout == VAR_0) {
        return;
    }

    if (VAR_6->respawn_timeout == 0) {
        FUNC_4(VAR_6);
        return;
    }

    FUNC_1(VAR_1, VAR_6->log, 0,
                   "exec: shedule respawn %Mmsec", VAR_6->respawn_timeout);

    VAR_6->respawn_evt.data = VAR_6;
    VAR_6->respawn_evt.log = VAR_6->log;
    VAR_6->respawn_evt.handler = VAR_3;

    FUNC_0(&VAR_6->respawn_evt, VAR_6->respawn_timeout);
}
