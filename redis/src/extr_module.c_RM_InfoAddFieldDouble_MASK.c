
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* module; void* info; scalar_t__ in_dict_field; int in_section; } ;
struct TYPE_4__ {int name; } ;
typedef TYPE_2__ RedisModuleInfoCtx ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,char*,char*,...) ;

int FUNC_1(RedisModuleInfoCtx *VAR_2, char *VAR_3, double VAR_4) {
    if (!VAR_2->in_section)
        return VAR_0;
    if (VAR_2->in_dict_field) {
        VAR_2->info = FUNC_0(VAR_2->info,
            "%s=%.17g,",
            VAR_3,
            VAR_4);
        return VAR_1;
    }
    VAR_2->info = FUNC_0(VAR_2->info,
        "%s_%s:%.17g\r\n",
        VAR_2->module->name,
        VAR_3,
        VAR_4);
    return VAR_1;
}
