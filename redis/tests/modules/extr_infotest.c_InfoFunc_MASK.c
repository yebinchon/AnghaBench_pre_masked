
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleInfoCtx ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *,char*,double) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;

void FUNC_6(RedisModuleInfoCtx *VAR_0, int VAR_1) {
    FUNC_3(VAR_0, "");
    FUNC_2(VAR_0, "global", -2);

    FUNC_3(VAR_0, "Spanish");
    FUNC_0(VAR_0, "uno", "one");
    FUNC_2(VAR_0, "dos", 2);

    FUNC_3(VAR_0, "Italian");
    FUNC_2(VAR_0, "due", 2);
    FUNC_1(VAR_0, "tre", 3.3);

    FUNC_3(VAR_0, "keyspace");
    FUNC_4(VAR_0, "db0");
    FUNC_2(VAR_0, "keys", 3);
    FUNC_2(VAR_0, "expires", 1);
    FUNC_5(VAR_0);

    if (VAR_1) {
        FUNC_3(VAR_0, "Klingon");
        FUNC_0(VAR_0, "one", "wa’");
        FUNC_0(VAR_0, "two", "cha’");
        FUNC_0(VAR_0, "three", "wej");
    }

}
