
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*) ;
 char* FUNC_6 (int *,size_t*,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char) ;
 char FUNC_9 (char) ;
 char FUNC_10 (char) ;

int FUNC_11(RedisModuleCtx *VAR_6, RedisModuleString **VAR_7, int VAR_8) {
    if (VAR_8 != 2) return FUNC_7(VAR_6);

    RedisModuleKey *VAR_9 = FUNC_2(VAR_6,VAR_7[1],
        VAR_4|VAR_5);

    int VAR_10 = FUNC_1(VAR_9);
    if (VAR_10 != VAR_2 &&
        VAR_10 != VAR_1)
    {
        FUNC_0(VAR_9);
        return FUNC_4(VAR_6,VAR_0);
    }

    if (VAR_10 == VAR_2) {
        size_t VAR_11, VAR_12;
        char *VAR_13 = FUNC_6(VAR_9,&VAR_11,VAR_5);
        for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
            if (FUNC_8(VAR_13[VAR_12])) {
                VAR_13[VAR_12] = FUNC_9(VAR_13[VAR_12]);
            } else {
                VAR_13[VAR_12] = FUNC_10(VAR_13[VAR_12]);
            }
        }
    }

    FUNC_0(VAR_9);
    FUNC_5(VAR_6,"OK");
    FUNC_3(VAR_6);
    return VAR_3;
}
