
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleKey ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(RedisModuleCtx *VAR_4, RedisModuleString **VAR_5, int VAR_6)
{
    if (VAR_6 != 3) return FUNC_5(VAR_4);

    RedisModuleKey *VAR_7 = FUNC_2(VAR_4,VAR_5[1],
        VAR_2|VAR_3);

    FUNC_1(VAR_7,VAR_0,VAR_5[2]);
    size_t VAR_8 = FUNC_4(VAR_7);
    FUNC_0(VAR_7);
    FUNC_3(VAR_4,VAR_8);
    return VAR_1;
}
