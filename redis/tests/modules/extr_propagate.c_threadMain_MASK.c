
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleCtx ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void *FUNC_7(void *VAR_0) {
    FUNC_0(VAR_0);
    RedisModuleCtx *VAR_1 = FUNC_2(((void*)0));
    FUNC_4(VAR_1,9);
    for (int VAR_2 = 0; VAR_2 < 10; VAR_2++) {
        FUNC_5(VAR_1);
        FUNC_3(VAR_1,"INCR","c","thread");
        FUNC_6(VAR_1);
    }
    FUNC_1(VAR_1);
    return ((void*)0);
}
