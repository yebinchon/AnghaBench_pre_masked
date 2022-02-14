
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HelloTypeObject {int len; } ;
typedef int RedisModuleString ;
typedef int RedisModuleKey ;
typedef int RedisModuleCtx ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct HelloTypeObject* FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(RedisModuleCtx *VAR_6, RedisModuleString **VAR_7, int VAR_8) {
    FUNC_0(VAR_6);

    if (VAR_8 != 2) return FUNC_7(VAR_6);
    RedisModuleKey *VAR_9 = FUNC_4(VAR_6,VAR_7[1],
        VAR_4|VAR_5);
    int VAR_10 = FUNC_1(VAR_9);
    if (VAR_10 != VAR_2 &&
        FUNC_2(VAR_9) != VAR_0)
    {
        return FUNC_5(VAR_6,VAR_1);
    }

    struct HelloTypeObject *VAR_11 = FUNC_3(VAR_9);
    FUNC_6(VAR_6,VAR_11 ? VAR_11->len : 0);
    return VAR_3;
}
