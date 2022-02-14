
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* module; } ;
struct TYPE_4__ {int info_cb; } ;
typedef int RedisModuleInfoFunc ;
typedef TYPE_2__ RedisModuleCtx ;


 int VAR_0 ;

int FUNC_0(RedisModuleCtx *VAR_1, RedisModuleInfoFunc VAR_2) {
    VAR_1->module->info_cb = VAR_2;
    return VAR_0;
}
