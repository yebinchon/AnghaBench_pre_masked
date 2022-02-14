
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleIO ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * VAR_4 ;
 int FUNC_5 (int) ;
 int * VAR_5 ;
 int VAR_6 ;

int FUNC_6(RedisModuleIO *VAR_7, int VAR_8, int VAR_9) {
    FUNC_5(VAR_8 == 1);
    if (VAR_6==1) FUNC_5(VAR_9 == VAR_0);
    if (VAR_6==0) FUNC_5(0);
    RedisModuleCtx *VAR_10 = FUNC_1(VAR_7);
    if (VAR_9 == VAR_1) {
        if (VAR_5)
            FUNC_0(VAR_10, VAR_5);
        VAR_5 = ((void*)0);
        int VAR_11 = FUNC_3(VAR_7);
        if (FUNC_2(VAR_7))
            return VAR_2;
        if (VAR_11)
            VAR_5 = FUNC_4(VAR_7);
    } else {
        if (VAR_4)
            FUNC_0(VAR_10, VAR_4);
        VAR_4 = ((void*)0);
        int VAR_12 = FUNC_3(VAR_7);
        if (FUNC_2(VAR_7))
            return VAR_2;
        if (VAR_12)
            VAR_4 = FUNC_4(VAR_7);
    }
    if (FUNC_2(VAR_7))
        return VAR_2;
    return VAR_3;
}
