
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleKey ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,long long) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int * FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,long long) ;
 scalar_t__ FUNC_9 (int *,long long*) ;
 size_t FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(RedisModuleCtx *VAR_7, RedisModuleString **VAR_8, int VAR_9) {
    if (VAR_9 != 2) return FUNC_11(VAR_7);

    FUNC_0(VAR_7);
    RedisModuleKey *VAR_10 = FUNC_5(VAR_7,VAR_8[1],
        VAR_5|VAR_6);

    if (FUNC_2(VAR_10) != VAR_1)
        return FUNC_7(VAR_7,VAR_0);

    size_t VAR_11 = FUNC_10(VAR_10);
    long long VAR_12 = 0;


    while(VAR_11--) {
        RedisModuleString *VAR_13 = FUNC_3(VAR_10,VAR_3);
        long long VAR_14;
        if (FUNC_9(VAR_13,&VAR_14) != VAR_4) VAR_14 = 0;
        VAR_14++;
        VAR_12 += VAR_14;
        RedisModuleString *VAR_15 = FUNC_1(VAR_7,VAR_14);
        FUNC_4(VAR_10,VAR_2,VAR_15);
    }
    FUNC_8(VAR_7,VAR_12);
    FUNC_6(VAR_7);
    return VAR_4;
}
