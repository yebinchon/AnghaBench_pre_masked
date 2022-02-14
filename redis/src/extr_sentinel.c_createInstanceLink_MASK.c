
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refcount; int disconnected; void* last_pong_time; void* last_avail_time; scalar_t__ last_ping_time; void* act_ping_time; scalar_t__ pc_last_activity; scalar_t__ last_reconn_time; scalar_t__ pc_conn_time; scalar_t__ cc_conn_time; int * pc; int * cc; scalar_t__ pending_commands; } ;
typedef TYPE_1__ instanceLink ;


 void* FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;

instanceLink *FUNC_2(void) {
    instanceLink *VAR_0 = FUNC_1(sizeof(*VAR_0));

    VAR_0->refcount = 1;
    VAR_0->disconnected = 1;
    VAR_0->pending_commands = 0;
    VAR_0->cc = ((void*)0);
    VAR_0->pc = ((void*)0);
    VAR_0->cc_conn_time = 0;
    VAR_0->pc_conn_time = 0;
    VAR_0->last_reconn_time = 0;
    VAR_0->pc_last_activity = 0;




    VAR_0->act_ping_time = FUNC_0();
    VAR_0->last_ping_time = 0;
    VAR_0->last_avail_time = FUNC_0();
    VAR_0->last_pong_time = FUNC_0();
    return VAR_0;
}
