
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fsl_t ;
typedef int RedisModuleString ;
typedef int RedisModuleKey ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__,int *) ;
 int * FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 () ;
 scalar_t__ VAR_2 ;

int FUNC_8(RedisModuleCtx *VAR_3, RedisModuleString *VAR_4, int VAR_5, int VAR_6, fsl_t **VAR_7, int VAR_8) {
    RedisModuleKey *VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_5);

    int VAR_10 = FUNC_1(VAR_9);
    if (VAR_10 != VAR_1 && FUNC_2(VAR_9) != VAR_2) {
        FUNC_0(VAR_9);
        if (VAR_8)
            FUNC_6(VAR_3, VAR_0);
        return 0;
    }


    if (VAR_10 == VAR_1) {
        if (!VAR_6) {

            FUNC_0(VAR_9);
            *VAR_7 = ((void*)0);
            return 1;
        }
        *VAR_7 = FUNC_7();
        FUNC_4(VAR_9, VAR_2, *VAR_7);
    } else {
        *VAR_7 = FUNC_3(VAR_9);
    }

    FUNC_0(VAR_9);
    return 1;
}
