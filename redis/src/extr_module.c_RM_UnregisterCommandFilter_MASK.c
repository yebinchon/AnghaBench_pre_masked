
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int listNode ;
struct TYPE_10__ {TYPE_1__* module; } ;
struct TYPE_9__ {TYPE_1__* module; } ;
struct TYPE_8__ {int filters; } ;
typedef TYPE_2__ RedisModuleCtx ;
typedef TYPE_3__ RedisModuleCommandFilter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;

int FUNC_3(RedisModuleCtx *VAR_3, RedisModuleCommandFilter *VAR_4) {
    listNode *VAR_5;


    if (VAR_4->module != VAR_3->module) return VAR_0;

    VAR_5 = FUNC_1(VAR_2,VAR_4);
    if (!VAR_5) return VAR_0;
    FUNC_0(VAR_2,VAR_5);

    VAR_5 = FUNC_1(VAR_3->module->filters,VAR_4);
    if (!VAR_5) return VAR_0;
    FUNC_0(VAR_3->module->filters,VAR_5);

    FUNC_2(VAR_4);

    return VAR_1;
}
