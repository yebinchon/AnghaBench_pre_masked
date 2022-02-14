
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleKey ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *,int **,int *) ;
 int FUNC_2 (int *,int ,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(RedisModuleCtx *VAR_7, RedisModuleString **VAR_8, int VAR_9) {
    FUNC_0(VAR_7);

    if (VAR_9 != 4) return FUNC_7(VAR_7);
    RedisModuleKey *VAR_10 = FUNC_4(VAR_7,VAR_8[1],
        VAR_5|VAR_6);
    int VAR_11 = FUNC_3(VAR_10);
    if (VAR_11 != VAR_3 &&
        VAR_11 != VAR_2)
    {
        return FUNC_5(VAR_7,VAR_0);
    }


    RedisModuleString *VAR_12;
    FUNC_1(VAR_10,VAR_1,VAR_8[2],&VAR_12,((void*)0));
    if (VAR_12) {
        FUNC_2(VAR_10,VAR_1,VAR_8[3],VAR_12,((void*)0));
    }
    FUNC_6(VAR_7,VAR_12 != ((void*)0));
    return VAR_4;
}
