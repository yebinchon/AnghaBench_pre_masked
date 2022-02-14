
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int client ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char const*) ;

int FUNC_3(RedisModuleCtx *VAR_1, const char *VAR_2, char *VAR_3) {
    client *VAR_4 = FUNC_1(VAR_1);
    if (VAR_4 == ((void*)0)) return VAR_0;
    FUNC_0(VAR_4,VAR_3,FUNC_2(VAR_3));
    FUNC_0(VAR_4,VAR_2,FUNC_2(VAR_2));
    FUNC_0(VAR_4,"\r\n",2);
    return VAR_0;
}
