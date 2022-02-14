
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,long long*,long long*) ;
 int * FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,long long) ;
 int FUNC_4 (int *) ;

int FUNC_5(RedisModuleCtx *VAR_3, RedisModuleString **VAR_4, int VAR_5)
{
    if (VAR_5<2) {
        FUNC_4(VAR_3);
        return VAR_0;
    }
    RedisModuleString *VAR_6 = VAR_4[1];
    RedisModuleKey *VAR_7 = FUNC_2(VAR_3, VAR_6, VAR_2|VAR_1);
    long long VAR_8, VAR_9;
    FUNC_1(VAR_7, &VAR_9, &VAR_8);
    FUNC_3(VAR_3, VAR_8);
    FUNC_0(VAR_7);
    return VAR_0;
}
