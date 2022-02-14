
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ redisAsyncContext ;
struct TYPE_5__ {int disconnected; int * cc; TYPE_1__ const* pc; } ;
typedef TYPE_2__ instanceLink ;



void FUNC_0(const redisAsyncContext *VAR_0) {
    instanceLink *VAR_1 = VAR_0->data;
    int VAR_2;

    if (!VAR_1) return;

    VAR_2 = (VAR_1->pc == VAR_0);
    if (VAR_2)
        VAR_1->pc = ((void*)0);
    else
        VAR_1->cc = ((void*)0);
    VAR_1->disconnected = 1;
}
