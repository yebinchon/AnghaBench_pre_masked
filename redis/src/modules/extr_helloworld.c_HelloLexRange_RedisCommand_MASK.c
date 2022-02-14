
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
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *,int *) ;
 int * FUNC_11 (int *,double*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(RedisModuleCtx *VAR_6, RedisModuleString **VAR_7, int VAR_8) {
    FUNC_0(VAR_6);

    if (VAR_8 != 6) return FUNC_9(VAR_6);

    RedisModuleKey *VAR_9 = FUNC_4(VAR_6,VAR_7[1],
        VAR_4|VAR_5);
    if (FUNC_3(VAR_9) != VAR_1) {
        return FUNC_7(VAR_6,VAR_0);
    }

    if (FUNC_10(VAR_9,VAR_7[2],VAR_7[3]) != VAR_2) {
        return FUNC_7(VAR_6,"invalid range");
    }

    int VAR_10 = 0;
    FUNC_6(VAR_6,VAR_3);
    while(!FUNC_12(VAR_9)) {
        double VAR_11;
        RedisModuleString *VAR_12 = FUNC_11(VAR_9,&VAR_11);
        FUNC_8(VAR_6,VAR_12);
        FUNC_2(VAR_6,VAR_12);
        FUNC_13(VAR_9);
        VAR_10++;
    }
    FUNC_14(VAR_9);
    FUNC_5(VAR_6,VAR_10);
    FUNC_1(VAR_9);
    return VAR_2;
}
