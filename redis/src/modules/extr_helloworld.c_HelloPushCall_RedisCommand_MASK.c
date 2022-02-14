
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;
typedef int RedisModuleCallReply ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*,char*,int *,int *) ;
 long long FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,long long) ;
 int FUNC_4 (int *) ;

int FUNC_5(RedisModuleCtx *VAR_1, RedisModuleString **VAR_2, int VAR_3)
{
    if (VAR_3 != 3) return FUNC_4(VAR_1);

    RedisModuleCallReply *VAR_4;

    VAR_4 = FUNC_0(VAR_1,"RPUSH","ss",VAR_2[1],VAR_2[2]);
    long long VAR_5 = FUNC_1(VAR_4);
    FUNC_2(VAR_4);
    FUNC_3(VAR_1,VAR_5);
    return VAR_0;
}
