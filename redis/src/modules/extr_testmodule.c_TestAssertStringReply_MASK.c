
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;
typedef int RedisModuleCallReply ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*,size_t) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*,char const*,...) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 char* FUNC_5 (int *,int *) ;

int FUNC_6(RedisModuleCtx *VAR_1, RedisModuleCallReply *VAR_2, char *VAR_3, size_t VAR_4) {
    RedisModuleString *VAR_5, *VAR_6;

    if (FUNC_0(VAR_2) != VAR_0) {
        FUNC_3(VAR_1,"warning","Unexpected reply type %d",
            FUNC_0(VAR_2));
        return 0;
    }
    VAR_5 = FUNC_2(VAR_2);
    VAR_6 = FUNC_1(VAR_1,VAR_3,VAR_4);
    if (FUNC_4(VAR_5,VAR_6) != 0) {
        const char *VAR_7 = FUNC_5(VAR_5,((void*)0));
        const char *VAR_8 = FUNC_5(VAR_6,((void*)0));
        FUNC_3(VAR_1,"warning",
            "Unexpected string reply '%s' (instead of '%s')",
            VAR_7, VAR_8);
        return 0;
    }
    return 1;
}
