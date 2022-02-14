
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * last_val_string; scalar_t__ last_val_int; scalar_t__ count; } ;
typedef int RedisModuleString ;
typedef int RedisModuleDictIter ;
typedef int RedisModuleCtx ;
typedef TYPE_1__ EventElement ;


 int FUNC_0 (int ,int *,int *) ;
 int * FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *) ;
 int VAR_0 ;

void FUNC_6(RedisModuleCtx *VAR_1)
{
    RedisModuleString *VAR_2;
    EventElement *VAR_3;
    RedisModuleDictIter *VAR_4 = FUNC_1(VAR_0, "^", ((void*)0));
    while((VAR_2 = FUNC_3(VAR_1, VAR_4, (void**)&VAR_3)) != ((void*)0)) {
        VAR_3->count = 0;
        VAR_3->last_val_int = 0;
        if (VAR_3->last_val_string) FUNC_5(VAR_1, VAR_3->last_val_string);
        VAR_3->last_val_string = ((void*)0);
        FUNC_0(VAR_0, VAR_2, ((void*)0));
        FUNC_4(VAR_3);
    }
    FUNC_2(VAR_4);
}
