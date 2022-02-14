
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;
typedef int RedisModuleCallReply ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*) ;

int FUNC_4(RedisModuleCtx *VAR_1, RedisModuleString **VAR_2, int VAR_3)
{
    (void) VAR_3;
    (void) VAR_2;

    RedisModuleCallReply *VAR_4 = FUNC_0(VAR_1, "ping", "c", "@log");
    if (VAR_4) {
        FUNC_2(VAR_1, VAR_4);
        FUNC_1(VAR_4);
    } else {
        FUNC_3(VAR_1, "Unknown command or invalid arguments");
    }

    return VAR_0;
}
