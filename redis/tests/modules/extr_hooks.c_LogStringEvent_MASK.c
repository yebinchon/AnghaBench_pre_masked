
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int count; scalar_t__ last_val_string; } ;
typedef int RedisModuleCtx ;
typedef TYPE_1__ EventElement ;


 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char const*,int ) ;
 TYPE_1__* FUNC_2 (int ,void*,int ,int *) ;
 int FUNC_3 (int ,void*,int ,TYPE_1__*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (char const*) ;

void FUNC_7(RedisModuleCtx *VAR_1, const char* VAR_2, const char* VAR_3) {
    EventElement *VAR_4 = FUNC_2(VAR_0, (void*)VAR_2, FUNC_6(VAR_2), ((void*)0));
    if (!VAR_4) {
        VAR_4 = FUNC_0(sizeof(EventElement));
        FUNC_5(VAR_4, 0, sizeof(EventElement));
        FUNC_3(VAR_0, (void*)VAR_2, FUNC_6(VAR_2), VAR_4);
    }
    if (VAR_4->last_val_string) FUNC_4(VAR_1, VAR_4->last_val_string);
    VAR_4->last_val_string = FUNC_1(VAR_1, VAR_3, FUNC_6(VAR_3));
    VAR_4->count++;
}
