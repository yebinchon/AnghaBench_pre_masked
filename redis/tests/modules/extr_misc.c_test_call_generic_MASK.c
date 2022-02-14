
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;
typedef int RedisModuleCallReply ;


 int VAR_0 ;
 int * FUNC_0 (int *,char const*,char*,int **,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 char* FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;

int FUNC_7(RedisModuleCtx *VAR_2, RedisModuleString **VAR_3, int VAR_4)
{
    if (VAR_4<2) {
        FUNC_5(VAR_2);
        return VAR_0;
    }

    const char* VAR_5 = FUNC_4(VAR_3[1], ((void*)0));
    RedisModuleCallReply *VAR_6 = FUNC_0(VAR_2, VAR_5, "v", VAR_3+2, VAR_4-2);
    if (VAR_6) {
        FUNC_2(VAR_2, VAR_6);
        FUNC_1(VAR_6);
    } else {
        FUNC_3(VAR_2, FUNC_6(VAR_1));
    }
    return VAR_0;
}
