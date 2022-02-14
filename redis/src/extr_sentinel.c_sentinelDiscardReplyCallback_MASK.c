
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ redisAsyncContext ;
struct TYPE_5__ {int pending_commands; } ;
typedef TYPE_2__ instanceLink ;


 int FUNC_0 (void*) ;

void FUNC_1(redisAsyncContext *VAR_0, void *VAR_1, void *VAR_2) {
    instanceLink *VAR_3 = VAR_0->data;
    FUNC_0(VAR_1);
    FUNC_0(VAR_2);

    if (VAR_3) VAR_3->pending_commands--;
}
