
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int flags; int client; TYPE_1__* module; scalar_t__ postponed_arrays_count; scalar_t__ postponed_arrays; } ;
struct TYPE_7__ {int name; } ;
typedef TYPE_2__ RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(RedisModuleCtx *VAR_2) {
    FUNC_2(VAR_2);
    FUNC_0(VAR_2);
    FUNC_3(VAR_2);
    if (VAR_2->postponed_arrays) {
        FUNC_5(VAR_2->postponed_arrays);
        VAR_2->postponed_arrays_count = 0;
        FUNC_4(VAR_0,
            "API misuse detected in module %s: "
            "RedisModule_ReplyWithArray(REDISMODULE_POSTPONED_ARRAY_LEN) "
            "not matched by the same number of RedisModule_SetReplyArrayLen() "
            "calls.",
            VAR_2->module->name);
    }
    if (VAR_2->flags & VAR_1) FUNC_1(VAR_2->client);
}
