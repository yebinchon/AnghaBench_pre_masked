
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int in_dict_field; TYPE_1__* module; int info; int in_section; } ;
struct TYPE_5__ {int name; } ;
typedef TYPE_2__ RedisModuleInfoCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,int ,char*) ;

int FUNC_2(RedisModuleInfoCtx *VAR_2, char *VAR_3) {
    if (!VAR_2->in_section)
        return VAR_0;

    if (VAR_2->in_dict_field)
        FUNC_0(VAR_2);
    VAR_2->info = FUNC_1(VAR_2->info,
        "%s_%s:",
        VAR_2->module->name,
        VAR_3);
    VAR_2->in_dict_field = 1;
    return VAR_1;
}
