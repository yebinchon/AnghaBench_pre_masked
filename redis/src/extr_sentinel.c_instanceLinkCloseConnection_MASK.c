
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * data; } ;
typedef TYPE_1__ redisAsyncContext ;
struct TYPE_7__ {int disconnected; TYPE_1__* pc; scalar_t__ pending_commands; TYPE_1__* cc; } ;
typedef TYPE_2__ instanceLink ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(instanceLink *VAR_0, redisAsyncContext *VAR_1) {
    if (VAR_1 == ((void*)0)) return;

    if (VAR_0->cc == VAR_1) {
        VAR_0->cc = ((void*)0);
        VAR_0->pending_commands = 0;
    }
    if (VAR_0->pc == VAR_1) VAR_0->pc = ((void*)0);
    VAR_1->data = ((void*)0);
    VAR_0->disconnected = 1;
    FUNC_0(VAR_1);
}
