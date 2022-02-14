
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int sharedapi; } ;
struct TYPE_9__ {int module; } ;
struct TYPE_8__ {void* func; int module; } ;
typedef TYPE_1__ RedisModuleSharedAPI ;
typedef TYPE_2__ RedisModuleCtx ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,TYPE_1__*) ;
 TYPE_5__ VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;

int FUNC_3(RedisModuleCtx *VAR_4, const char *VAR_5, void *VAR_6) {
    RedisModuleSharedAPI *VAR_7 = FUNC_2(sizeof(*VAR_7));
    VAR_7->module = VAR_4->module;
    VAR_7->func = VAR_6;
    if (FUNC_0(VAR_3.sharedapi, (char*)VAR_5, VAR_7) != VAR_0) {
        FUNC_1(VAR_7);
        return VAR_1;
    }
    return VAR_2;
}
