
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * disconnect_callback; int * reply_callback; } ;
typedef TYPE_1__ RedisModuleBlockedClient ;


 int FUNC_0 (TYPE_1__*,int *) ;

int FUNC_1(RedisModuleBlockedClient *VAR_0) {
    VAR_0->reply_callback = ((void*)0);
    VAR_0->disconnect_callback = ((void*)0);
    return FUNC_0(VAR_0,((void*)0));
}
