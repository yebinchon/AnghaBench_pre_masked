
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
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int **,int) ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ,long long,int **,int,void*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,long long*) ;
 int FUNC_9 (int *) ;

int FUNC_10(RedisModuleCtx *VAR_9, RedisModuleString **VAR_10, int VAR_11) {
    if (VAR_11 != 5) return FUNC_9(VAR_9);
    FUNC_2(VAR_9);
    RedisModuleKey *VAR_12 = FUNC_6(VAR_9,VAR_10[1],
        VAR_7|VAR_8);
    int VAR_13 = FUNC_4(VAR_12);
    if (VAR_13 != VAR_5 &&
        FUNC_5(VAR_12) != VAR_3)
    {
        return FUNC_7(VAR_9,VAR_4);
    }



    long long VAR_14;
    if (FUNC_8(VAR_10[4],&VAR_14) != VAR_6) {
        return FUNC_7(VAR_9,
            "ERR invalid timeout parameter");
    }


    if (VAR_13 != VAR_5) {
        return FUNC_0(VAR_9,VAR_10,VAR_11-1);
    }


    void *VAR_15 = FUNC_1(100);
    FUNC_3(VAR_9,VAR_1,VAR_2,VAR_0,VAR_14,VAR_10+1,1,VAR_15);
    return VAR_6;
}
