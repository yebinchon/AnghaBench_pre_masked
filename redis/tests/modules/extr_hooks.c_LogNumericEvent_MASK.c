
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {long last_val_int; int count; } ;
typedef int RedisModuleCtx ;
typedef TYPE_1__ EventElement ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int ,void*,int ,int *) ;
 int FUNC_3 (int ,void*,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (char const*) ;

void FUNC_6(RedisModuleCtx *VAR_1, const char* VAR_2, long VAR_3) {
    FUNC_0(VAR_1);
    EventElement *VAR_4 = FUNC_2(VAR_0, (void*)VAR_2, FUNC_5(VAR_2), ((void*)0));
    if (!VAR_4) {
        VAR_4 = FUNC_1(sizeof(EventElement));
        FUNC_4(VAR_4, 0, sizeof(EventElement));
        FUNC_3(VAR_0, (void*)VAR_2, FUNC_5(VAR_2), VAR_4);
    }
    VAR_4->last_val_int = VAR_3;
    VAR_4->count++;
}
