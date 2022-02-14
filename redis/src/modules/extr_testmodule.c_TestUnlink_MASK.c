
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleKey ;
typedef int RedisModuleCtx ;
typedef int RedisModuleCallReply ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;

int FUNC_10(RedisModuleCtx *VAR_3, RedisModuleString **VAR_4, int VAR_5) {
    FUNC_1(VAR_3);
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);

    RedisModuleKey *VAR_6 = FUNC_5(VAR_3, FUNC_4(VAR_3, "unlinked"), VAR_2 | VAR_1);
    if (!VAR_6) return FUNC_9(VAR_3, "Could not create key");

    if (VAR_0 == FUNC_7(VAR_6, FUNC_4(VAR_3, "Foobar"))) {
        return FUNC_9(VAR_3, "Could not set string value");
    }

    RedisModuleCallReply *VAR_7 = FUNC_2(VAR_3, "EXISTS", "c", "unlinked");
    if (!VAR_7 || FUNC_3(VAR_7) != 1) {
        return FUNC_9(VAR_3, "Key does not exist before unlink");
    }

    if (VAR_0 == FUNC_8(VAR_6)) {
        return FUNC_9(VAR_3, "Could not unlink key");
    }

    VAR_7 = FUNC_2(VAR_3, "EXISTS", "c", "unlinked");
    if (!VAR_7 || FUNC_3(VAR_7) != 0) {
        return FUNC_9(VAR_3, "Could not verify key to be unlinked");
    }
    return FUNC_6(VAR_3, "OK");

}
