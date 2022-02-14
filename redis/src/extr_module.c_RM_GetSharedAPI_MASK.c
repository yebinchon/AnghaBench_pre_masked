
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int dictEntry ;
struct TYPE_11__ {int using; int usedby; } ;
struct TYPE_10__ {int sharedapi; } ;
struct TYPE_9__ {TYPE_4__* module; } ;
struct TYPE_8__ {void* func; TYPE_4__* module; } ;
typedef TYPE_1__ RedisModuleSharedAPI ;
typedef TYPE_2__ RedisModuleCtx ;


 int * FUNC_0 (int ,char const*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int * FUNC_3 (int ,TYPE_4__*) ;
 TYPE_3__ VAR_0 ;

void *FUNC_4(RedisModuleCtx *VAR_1, const char *VAR_2) {
    dictEntry *VAR_3 = FUNC_0(VAR_0.sharedapi, VAR_2);
    if (VAR_3 == ((void*)0)) return ((void*)0);
    RedisModuleSharedAPI *VAR_4 = FUNC_1(VAR_3);
    if (FUNC_3(VAR_4->module->usedby,VAR_1->module) == ((void*)0)) {
        FUNC_2(VAR_4->module->usedby,VAR_1->module);
        FUNC_2(VAR_1->module->using,VAR_4->module);
    }
    return VAR_4->func;
}
