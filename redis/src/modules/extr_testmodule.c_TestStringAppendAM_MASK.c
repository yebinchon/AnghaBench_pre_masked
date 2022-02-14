
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,char*,int) ;

int FUNC_7(RedisModuleCtx *VAR_1, RedisModuleString **VAR_2, int VAR_3) {
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    FUNC_1(VAR_1);
    RedisModuleString *VAR_4 = FUNC_2(VAR_1,"foo",3);
    FUNC_5(VAR_1,VAR_4);
    FUNC_6(VAR_1,VAR_4,"bar",3);
    FUNC_4(VAR_1,VAR_4);
    FUNC_3(VAR_1,VAR_4);
    return VAR_0;
}
