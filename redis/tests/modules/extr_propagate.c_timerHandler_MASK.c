
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void RedisModuleCtx ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int,void (*) (void*,void*),int *) ;
 int FUNC_2 (void*,char*,char*,char*) ;

void FUNC_3(RedisModuleCtx *VAR_0, void *VAR_1) {
    FUNC_0(VAR_0);
    FUNC_0(VAR_1);

    static int VAR_2 = 0;

    FUNC_2(VAR_0,"INCR","c","timer");
    VAR_2++;

    if (VAR_2 < 10)
        FUNC_1(VAR_0,100,FUNC_3,((void*)0));
    else
        VAR_2 = 0;
}
