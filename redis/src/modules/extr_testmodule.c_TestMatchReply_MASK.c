
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCallReply ;


 int * FUNC_0 (int *) ;
 char* FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

int FUNC_3(RedisModuleCallReply *VAR_0, char *VAR_1) {
    RedisModuleString *VAR_2;
    VAR_2 = FUNC_0(VAR_0);
    if (!VAR_2) return 0;
    const char *VAR_3 = FUNC_1(VAR_2,((void*)0));
    return FUNC_2(VAR_3,VAR_1) == 0;
}
