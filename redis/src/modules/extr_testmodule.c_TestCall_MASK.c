
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;
typedef int RedisModuleCallReply ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*,char*,char*,...) ;
 int * FUNC_3 (int *,int) ;
 long long FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;

int FUNC_8(RedisModuleCtx *VAR_1, RedisModuleString **VAR_2, int VAR_3) {
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    FUNC_1(VAR_1);
    RedisModuleCallReply *VAR_4;

    FUNC_2(VAR_1,"DEL","c","mylist");
    RedisModuleString *VAR_5 = FUNC_5(VAR_1,"foo",3);
    FUNC_2(VAR_1,"RPUSH","csl","mylist",VAR_5,(long long)1234);
    VAR_4 = FUNC_2(VAR_1,"LRANGE","ccc","mylist","0","-1");
    long long VAR_6 = FUNC_4(VAR_4);
    if (VAR_6 != 2) goto fail;

    RedisModuleCallReply *VAR_7, *VAR_8;

    VAR_7 = FUNC_3(VAR_4,0);
    VAR_8 = FUNC_3(VAR_4,1);
    if (!FUNC_7(VAR_7,"foo")) goto fail;
    if (!FUNC_7(VAR_8,"1234")) goto fail;

    FUNC_6(VAR_1,"OK");
    return VAR_0;

fail:
    FUNC_6(VAR_1,"ERR");
    return VAR_0;
}
