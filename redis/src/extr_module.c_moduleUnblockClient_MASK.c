
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * module_blocked_handle; } ;
struct TYPE_5__ {TYPE_1__ bpop; } ;
typedef TYPE_2__ client ;
typedef int RedisModuleBlockedClient ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(client *VAR_0) {
    RedisModuleBlockedClient *VAR_1 = VAR_0->bpop.module_blocked_handle;
    FUNC_0(VAR_1,((void*)0));
}
