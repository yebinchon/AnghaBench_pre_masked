
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleTimerID ;
typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int *,int,int ,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int,char*,int) ;
 int VAR_0 ;

int FUNC_6(RedisModuleCtx *VAR_1, RedisModuleString **VAR_2, int VAR_3) {
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    for (int VAR_4 = 0; VAR_4 < 10; VAR_4++) {
        int VAR_5 = FUNC_4() % 5000;
        char *VAR_6 = FUNC_1(256);
        FUNC_5(VAR_6,256,"After %d", VAR_5);
        RedisModuleTimerID VAR_7 = FUNC_2(VAR_1,VAR_5,VAR_0,VAR_6);
        FUNC_0(VAR_7);
    }
    return FUNC_3(VAR_1, "OK");
}
