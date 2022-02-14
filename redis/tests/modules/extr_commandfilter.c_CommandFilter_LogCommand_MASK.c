
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleKey ;
typedef int RedisModuleCtx ;
typedef int RedisModuleCallReply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,char const*,char*,int **,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,int *) ;
 int * FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int *,char const*,size_t) ;
 char* FUNC_10 (int *,size_t*) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_11(RedisModuleCtx *VAR_6, RedisModuleString **VAR_7, int VAR_8)
{
    RedisModuleString *VAR_9 = FUNC_2(VAR_6, "", 0);

    int VAR_10;
    for (VAR_10 = 1; VAR_10 < VAR_8; VAR_10++) {
        size_t VAR_11;
        const char *VAR_12 = FUNC_10(VAR_7[VAR_10], &VAR_11);

        if (VAR_10 > 1) FUNC_9(VAR_6, VAR_9, " ", 1);
        FUNC_9(VAR_6, VAR_9, VAR_12, VAR_11);
    }

    RedisModuleKey *VAR_13 = FUNC_6(VAR_6, VAR_5, VAR_3|VAR_2);
    FUNC_5(VAR_13, VAR_0, VAR_9);
    FUNC_1(VAR_13);
    FUNC_4(VAR_6, VAR_9);

    VAR_4 = 1;

    size_t VAR_14;
    const char *VAR_15 = FUNC_10(VAR_7[1], &VAR_14);
    RedisModuleCallReply *VAR_16 = FUNC_0(VAR_6, VAR_15, "v", &VAR_7[2], VAR_8 - 2);
    if (VAR_16) {
        FUNC_7(VAR_6, VAR_16);
        FUNC_3(VAR_16);
    } else {
        FUNC_8(VAR_6, "Unknown command or invalid arguments");
    }

    VAR_4 = 0;

    return VAR_1;
}
