
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int FUNC_0 (long long) ;
 scalar_t__ FUNC_1 (int ,void*) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,long long*) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int) ;

int FUNC_8(RedisModuleCtx *VAR_4, RedisModuleString **VAR_5, int VAR_6)
{
    long long VAR_7;
    if (VAR_6 != 2) {
        FUNC_6(VAR_4);
        return VAR_0;
    }
    FUNC_5(VAR_5[1], &VAR_7);
    VAR_3 = -1;
    VAR_1 = FUNC_1(VAR_2, (void*)0xdeadbeef);
    if (VAR_1 < 0) {
        FUNC_3(VAR_4, "Fork failed");
        return VAR_0;
    } else if (VAR_1 > 0) {

        FUNC_4(VAR_4, VAR_1);
        return VAR_0;
    }


    FUNC_2(VAR_4, "notice", "fork child started");
    FUNC_7(200000);
    FUNC_2(VAR_4, "notice", "fork child exiting");
    FUNC_0(VAR_7);

    return 0;
}
