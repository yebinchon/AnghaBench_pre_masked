
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ last_val_string; } ;
typedef int RedisModuleCtx ;
typedef TYPE_1__ EventElement ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__) ;

void FUNC_2(RedisModuleCtx *VAR_0, EventElement *VAR_1) {
    if (VAR_1->last_val_string)
        FUNC_1(VAR_0, VAR_1->last_val_string);
    FUNC_0(VAR_1);
}
