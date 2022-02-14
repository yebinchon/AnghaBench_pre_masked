
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int flags; int callback; TYPE_1__* module; } ;
struct TYPE_9__ {TYPE_1__* module; } ;
struct TYPE_8__ {int filters; } ;
typedef TYPE_2__ RedisModuleCtx ;
typedef int RedisModuleCommandFilterFunc ;
typedef TYPE_3__ RedisModuleCommandFilter ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int) ;

RedisModuleCommandFilter *FUNC_2(RedisModuleCtx *VAR_1, RedisModuleCommandFilterFunc VAR_2, int VAR_3) {
    RedisModuleCommandFilter *VAR_4 = FUNC_1(sizeof(*VAR_4));
    VAR_4->module = VAR_1->module;
    VAR_4->callback = VAR_2;
    VAR_4->flags = VAR_3;

    FUNC_0(VAR_0, VAR_4);
    FUNC_0(VAR_1->module->filters, VAR_4);
    return VAR_4;
}
