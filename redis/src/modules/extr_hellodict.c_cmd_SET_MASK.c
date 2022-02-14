
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(RedisModuleCtx *VAR_1, RedisModuleString **VAR_2, int VAR_3) {
    if (VAR_3 != 3) return FUNC_3(VAR_1);
    FUNC_0(VAR_0,VAR_2[1],VAR_2[2]);


    FUNC_2(((void*)0),VAR_2[2]);
    return FUNC_1(VAR_1, "OK");
}
