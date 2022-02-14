
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;
typedef int RedisModuleCallReply ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

int FUNC_5(RedisModuleCtx *VAR_2, RedisModuleString **VAR_3, int VAR_4)
{
    RedisModuleCallReply *VAR_5;
    if (VAR_4>1)
        VAR_5 = FUNC_0(VAR_2, "info", "s", VAR_3[1]);
    else
        VAR_5 = FUNC_0(VAR_2, "info", "");
    if (VAR_5) {
        FUNC_2(VAR_2, VAR_5);
        FUNC_1(VAR_5);
    } else {
        FUNC_3(VAR_2, FUNC_4(VAR_1));
    }
    return VAR_0;
}
