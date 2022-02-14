
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*,char*) ;
 int FUNC_3 (int *,char*,char*,char*) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(RedisModuleCtx *VAR_1, RedisModuleString **VAR_2, int VAR_3)
{
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
    FUNC_1(VAR_1);
    FUNC_3(VAR_1,"ECHO","c","foo");



    FUNC_2(VAR_1,"INCR","c!","foo");
    FUNC_2(VAR_1,"INCR","c!","bar");

    FUNC_4(VAR_1,0);

    return VAR_0;
}
