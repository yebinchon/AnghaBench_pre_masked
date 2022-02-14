
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;

int FUNC_4(RedisModuleCtx *VAR_2, RedisModuleString **VAR_3, int VAR_4)
{
    FUNC_3(VAR_3);
    FUNC_3(VAR_4);
    if (FUNC_0(VAR_1) != VAR_0)
        FUNC_1(VAR_2, "KillForkChild failed");
    else
        FUNC_2(VAR_2, 1);
    VAR_1 = -1;
    return VAR_0;
}
