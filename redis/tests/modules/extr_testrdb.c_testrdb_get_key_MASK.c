
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleKey ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(RedisModuleCtx *VAR_2, RedisModuleString **VAR_3, int VAR_4)
{
    if (VAR_4 != 2){
        FUNC_4(VAR_2);
        return VAR_0;
    }

    RedisModuleKey *VAR_5 = FUNC_2(VAR_2, VAR_3[1], VAR_1);
    RedisModuleString *VAR_6 = FUNC_1(VAR_5);
    FUNC_0(VAR_5);
    FUNC_3(VAR_2, VAR_6);
    return VAR_0;
}
