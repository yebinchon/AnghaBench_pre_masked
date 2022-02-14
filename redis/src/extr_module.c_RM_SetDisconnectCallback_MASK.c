
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int disconnect_callback; } ;
typedef int RedisModuleDisconnectFunc ;
typedef TYPE_1__ RedisModuleBlockedClient ;



void FUNC_0(RedisModuleBlockedClient *VAR_0, RedisModuleDisconnectFunc VAR_1) {
    VAR_0->disconnect_callback = VAR_1;
}
