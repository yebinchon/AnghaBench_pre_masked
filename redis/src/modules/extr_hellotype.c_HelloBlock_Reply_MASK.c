
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleKey ;
typedef int RedisModuleCtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int **,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *,int ) ;

int FUNC_7(RedisModuleCtx *VAR_4, RedisModuleString **VAR_5, int VAR_6) {
    FUNC_1(VAR_5);
    FUNC_1(VAR_6);

    RedisModuleString *VAR_7 = FUNC_3(VAR_4);
    RedisModuleKey *VAR_8 = FUNC_6(VAR_4,VAR_7,VAR_3);
    int VAR_9 = FUNC_4(VAR_8);
    if (VAR_9 != VAR_2 ||
        FUNC_5(VAR_8) != VAR_0)
    {
        FUNC_2(VAR_8);
        return VAR_1;
    }



    FUNC_2(VAR_8);
    return FUNC_0(VAR_4,VAR_5,VAR_6-1);
}
