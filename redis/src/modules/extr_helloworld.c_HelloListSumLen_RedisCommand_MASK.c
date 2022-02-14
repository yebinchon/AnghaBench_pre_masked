
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;
typedef int RedisModuleCallReply ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*,char*,int *,long long,long long) ;
 int * FUNC_1 (int *,size_t) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *) ;

int FUNC_6(RedisModuleCtx *VAR_1, RedisModuleString **VAR_2, int VAR_3)
{
    if (VAR_3 != 2) return FUNC_5(VAR_1);

    RedisModuleCallReply *VAR_4;

    VAR_4 = FUNC_0(VAR_1,"LRANGE","sll",VAR_2[1],(long long)0,(long long)-1);
    size_t VAR_5 = 0;
    size_t VAR_6 = FUNC_2(VAR_4);
    size_t VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        RedisModuleCallReply *VAR_8 = FUNC_1(VAR_4,VAR_7);
        VAR_5 += FUNC_2(VAR_8);
    }
    FUNC_3(VAR_4);
    FUNC_4(VAR_1,VAR_5);
    return VAR_0;
}
