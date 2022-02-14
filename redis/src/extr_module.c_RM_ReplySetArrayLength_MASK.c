
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int client ;
struct TYPE_6__ {size_t postponed_arrays_count; int * postponed_arrays; TYPE_1__* module; } ;
struct TYPE_5__ {int name; } ;
typedef TYPE_2__ RedisModuleCtx ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,int ,long) ;
 int FUNC_3 (int *) ;

void FUNC_4(RedisModuleCtx *VAR_1, long VAR_2) {
    client *VAR_3 = FUNC_0(VAR_1);
    if (VAR_3 == ((void*)0)) return;
    if (VAR_1->postponed_arrays_count == 0) {
        FUNC_1(VAR_0,
            "API misuse detected in module %s: "
            "RedisModule_ReplySetArrayLength() called without previous "
            "RedisModule_ReplyWithArray(ctx,REDISMODULE_POSTPONED_ARRAY_LEN) "
            "call.", VAR_1->module->name);
            return;
    }
    VAR_1->postponed_arrays_count--;
    FUNC_2(VAR_3,
            VAR_1->postponed_arrays[VAR_1->postponed_arrays_count],
            VAR_2);
    if (VAR_1->postponed_arrays_count == 0) {
        FUNC_3(VAR_1->postponed_arrays);
        VAR_1->postponed_arrays = ((void*)0);
    }
}
