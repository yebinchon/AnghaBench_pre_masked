
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct redisCommand {int dummy; } ;
typedef int sds ;
typedef int redisGetKeysProc ;
struct TYPE_9__ {int arity; int flags; int firstkey; int lastkey; int keystep; int id; scalar_t__ calls; scalar_t__ microseconds; int * getkeys_proc; int proc; int name; } ;
struct TYPE_8__ {int orig_commands; int commands; scalar_t__ cluster_enabled; } ;
struct TYPE_7__ {TYPE_4__* rediscmd; int func; int module; } ;
struct TYPE_6__ {int module; } ;
typedef TYPE_1__ RedisModuleCtx ;
typedef TYPE_2__ RedisModuleCommandProxy ;
typedef int RedisModuleCmdFunc ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,TYPE_4__*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char const*) ;
 TYPE_3__ VAR_5 ;
 void* FUNC_7 (int) ;

int FUNC_8(RedisModuleCtx *VAR_6, const char *VAR_7, RedisModuleCmdFunc VAR_8, const char *VAR_9, int VAR_10, int VAR_11, int VAR_12) {
    int VAR_13 = VAR_9 ? FUNC_1((char*)VAR_9) : 0;
    if (VAR_13 == -1) return VAR_2;
    if ((VAR_13 & VAR_1) && VAR_5.cluster_enabled)
        return VAR_2;

    struct redisCommand *VAR_14;
    RedisModuleCommandProxy *VAR_15;
    sds VAR_16 = FUNC_6(VAR_7);


    if (FUNC_3(VAR_16) != ((void*)0)) {
        FUNC_5(VAR_16);
        return VAR_2;
    }
    VAR_15 = FUNC_7(sizeof(*VAR_15));
    VAR_15->module = VAR_6->module;
    VAR_15->func = VAR_8;
    VAR_15->rediscmd = FUNC_7(sizeof(*VAR_14));
    VAR_15->rediscmd->name = VAR_16;
    VAR_15->rediscmd->proc = VAR_4;
    VAR_15->rediscmd->arity = -1;
    VAR_15->rediscmd->flags = VAR_13 | VAR_0;
    VAR_15->rediscmd->getkeys_proc = (redisGetKeysProc*)(unsigned long)VAR_15;
    VAR_15->rediscmd->firstkey = VAR_10;
    VAR_15->rediscmd->lastkey = VAR_11;
    VAR_15->rediscmd->keystep = VAR_12;
    VAR_15->rediscmd->microseconds = 0;
    VAR_15->rediscmd->calls = 0;
    FUNC_2(VAR_5.commands,FUNC_4(VAR_16),VAR_15->rediscmd);
    FUNC_2(VAR_5.orig_commands,FUNC_4(VAR_16),VAR_15->rediscmd);
    VAR_15->rediscmd->id = FUNC_0(VAR_16);
    return VAR_3;
}
