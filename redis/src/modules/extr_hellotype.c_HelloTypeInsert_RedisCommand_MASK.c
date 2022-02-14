
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HelloTypeObject {int len; } ;
typedef int RedisModuleString ;
typedef int RedisModuleKey ;
typedef int RedisModuleCtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct HelloTypeObject*,long long) ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct HelloTypeObject* FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,struct HelloTypeObject*) ;
 int * FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *,long long*) ;
 int FUNC_12 (int *) ;
 struct HelloTypeObject* FUNC_13 () ;

int FUNC_14(RedisModuleCtx *VAR_6, RedisModuleString **VAR_7, int VAR_8) {
    FUNC_1(VAR_6);

    if (VAR_8 != 3) return FUNC_12(VAR_6);
    RedisModuleKey *VAR_9 = FUNC_6(VAR_6,VAR_7[1],
        VAR_4|VAR_5);
    int VAR_10 = FUNC_2(VAR_9);
    if (VAR_10 != VAR_2 &&
        FUNC_3(VAR_9) != VAR_0)
    {
        return FUNC_8(VAR_6,VAR_1);
    }

    long long VAR_11;
    if ((FUNC_11(VAR_7[2],&VAR_11) != VAR_3)) {
        return FUNC_8(VAR_6,"ERR invalid value: must be a signed 64 bit integer");
    }


    struct HelloTypeObject *VAR_12;
    if (VAR_10 == VAR_2) {
        VAR_12 = FUNC_13();
        FUNC_5(VAR_9,VAR_0,VAR_12);
    } else {
        VAR_12 = FUNC_4(VAR_9);
    }


    FUNC_0(VAR_12,VAR_11);
    FUNC_10(VAR_6,VAR_7[1]);

    FUNC_9(VAR_6,VAR_12->len);
    FUNC_7(VAR_6);
    return VAR_3;
}
