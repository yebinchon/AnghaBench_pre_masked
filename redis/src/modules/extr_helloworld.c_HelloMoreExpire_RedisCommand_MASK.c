
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mstime_t ;
typedef int RedisModuleString ;
typedef int RedisModuleKey ;
typedef int RedisModuleCtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,scalar_t__*) ;
 int FUNC_7 (int *) ;

int FUNC_8(RedisModuleCtx *VAR_4, RedisModuleString **VAR_5, int VAR_6) {
    FUNC_0(VAR_4);
    if (VAR_6 != 3) return FUNC_7(VAR_4);

    mstime_t VAR_7, VAR_8;

    if (FUNC_6(VAR_5[2],&VAR_7) != VAR_1)
        return FUNC_3(VAR_4,"ERR invalid expire time");

    RedisModuleKey *VAR_9 = FUNC_2(VAR_4,VAR_5[1],
        VAR_2|VAR_3);
    VAR_8 = FUNC_1(VAR_9);
    if (VAR_8 != VAR_0) {
        VAR_8 += VAR_7;
        FUNC_5(VAR_9,VAR_8);
    }
    return FUNC_4(VAR_4,"OK");
}
