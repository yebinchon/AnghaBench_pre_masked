
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,double) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,double*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,double,double,int ,int ) ;
 int FUNC_10 (int *,double,double,int ,int ) ;
 int * FUNC_11 (int *,double*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int FUNC_16(RedisModuleCtx *VAR_5, RedisModuleString **VAR_6, int VAR_7) {
    double VAR_8, VAR_9;
    if (VAR_7 != 4) return FUNC_8(VAR_5);

    if (FUNC_7(VAR_6[2],&VAR_8) != VAR_2 ||
        FUNC_7(VAR_6[3],&VAR_9) != VAR_2)
    {
        return FUNC_6(VAR_5,"ERR invalid range");
    }

    RedisModuleKey *VAR_10 = FUNC_3(VAR_5,VAR_6[1],
        VAR_3|VAR_4);
    if (FUNC_2(VAR_10) != VAR_1) {
        return FUNC_6(VAR_5,VAR_0);
    }

    double VAR_11 = 0;
    double VAR_12 = 0;

    FUNC_9(VAR_10,VAR_8,VAR_9,0,0);
    while(!FUNC_12(VAR_10)) {
        double VAR_13;
        RedisModuleString *VAR_14 = FUNC_11(VAR_10,&VAR_13);
        FUNC_1(VAR_5,VAR_14);
        VAR_11 += VAR_13;
        FUNC_13(VAR_10);
    }
    FUNC_15(VAR_10);

    FUNC_10(VAR_10,VAR_8,VAR_9,0,0);
    while(!FUNC_12(VAR_10)) {
        double VAR_15;
        RedisModuleString *VAR_16 = FUNC_11(VAR_10,&VAR_15);
        FUNC_1(VAR_5,VAR_16);
        VAR_12 += VAR_15;
        FUNC_14(VAR_10);
    }

    FUNC_15(VAR_10);

    FUNC_0(VAR_10);

    FUNC_4(VAR_5,2);
    FUNC_5(VAR_5,VAR_11);
    FUNC_5(VAR_5,VAR_12);
    return VAR_2;
}
