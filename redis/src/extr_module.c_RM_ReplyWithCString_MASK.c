
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int client ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *) ;

int FUNC_2(RedisModuleCtx *VAR_1, const char *VAR_2) {
    client *VAR_3 = FUNC_1(VAR_1);
    if (VAR_3 == ((void*)0)) return VAR_0;
    FUNC_0(VAR_3,(char*)VAR_2);
    return VAR_0;
}
