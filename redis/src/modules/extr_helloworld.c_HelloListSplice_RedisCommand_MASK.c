
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleKey ;
typedef int RedisModuleCtx ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int * FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,size_t) ;
 scalar_t__ FUNC_8 (int *,long long*) ;
 size_t FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(RedisModuleCtx *VAR_8, RedisModuleString **VAR_9, int VAR_10) {
    if (VAR_10 != 4) return FUNC_10(VAR_8);

    RedisModuleKey *VAR_11 = FUNC_5(VAR_8,VAR_9[1],
        VAR_6|VAR_7);
    RedisModuleKey *VAR_12 = FUNC_5(VAR_8,VAR_9[2],
        VAR_6|VAR_7);


    if ((FUNC_2(VAR_11) != VAR_2 &&
         FUNC_2(VAR_11) != VAR_1) ||
        (FUNC_2(VAR_12) != VAR_2 &&
         FUNC_2(VAR_12) != VAR_1))
    {
        FUNC_0(VAR_11);
        FUNC_0(VAR_12);
        return FUNC_6(VAR_8,VAR_0);
    }

    long long VAR_13;
    if ((FUNC_8(VAR_9[3],&VAR_13) != VAR_5) ||
        (VAR_13 < 0)) {
        FUNC_0(VAR_11);
        FUNC_0(VAR_12);
        return FUNC_6(VAR_8,"ERR invalid count");
    }

    while(VAR_13-- > 0) {
        RedisModuleString *VAR_14;

        VAR_14 = FUNC_3(VAR_11,VAR_4);
        if (VAR_14 == ((void*)0)) break;
        FUNC_4(VAR_12,VAR_3,VAR_14);
        FUNC_1(VAR_8,VAR_14);
    }

    size_t VAR_15 = FUNC_9(VAR_11);
    FUNC_0(VAR_11);
    FUNC_0(VAR_12);
    FUNC_7(VAR_8,VAR_15);
    return VAR_5;
}
