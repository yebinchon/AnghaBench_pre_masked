
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * blocked_client; } ;
typedef TYPE_1__ RedisModuleCtx ;
typedef int RedisModuleBlockedClient ;



RedisModuleBlockedClient *FUNC_0(RedisModuleCtx *VAR_0) {
    return VAR_0->blocked_client;
}
