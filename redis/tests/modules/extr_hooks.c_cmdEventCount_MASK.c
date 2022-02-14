
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; } ;
typedef int RedisModuleString ;
typedef int RedisModuleCtx ;
typedef TYPE_1__ EventElement ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

int FUNC_3(RedisModuleCtx *VAR_2, RedisModuleString **VAR_3, int VAR_4)
{
    if (VAR_4 != 2){
        FUNC_2(VAR_2);
        return VAR_0;
    }

    EventElement *VAR_5 = FUNC_0(VAR_1, VAR_3[1], ((void*)0));
    FUNC_1(VAR_2, VAR_5? VAR_5->count: 0);
    return VAR_0;
}
