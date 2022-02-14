
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_val_int; scalar_t__ last_val_string; } ;
typedef int RedisModuleString ;
typedef int RedisModuleCtx ;
typedef TYPE_1__ EventElement ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

int FUNC_5(RedisModuleCtx *VAR_2, RedisModuleString **VAR_3, int VAR_4)
{
    if (VAR_4 != 2){
        FUNC_4(VAR_2);
        return VAR_0;
    }

    EventElement *VAR_5 = FUNC_0(VAR_1, VAR_3[1], ((void*)0));
    if (VAR_5 && VAR_5->last_val_string)
        FUNC_3(VAR_2, VAR_5->last_val_string);
    else if (VAR_5)
        FUNC_1(VAR_2, VAR_5->last_val_int);
    else
        FUNC_2(VAR_2);
    return VAR_0;
}
