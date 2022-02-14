
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleCtx ;
typedef int RedisModuleCallReply ;


 scalar_t__ VAR_0 ;
 long long FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*,long long,...) ;

int FUNC_3(RedisModuleCtx *VAR_1, RedisModuleCallReply *VAR_2, long long VAR_3) {
    if (FUNC_1(VAR_2) != VAR_0) {
        FUNC_2(VAR_1,"warning","Unexpected reply type %d",
            FUNC_1(VAR_2));
        return 0;
    }
    long long VAR_4 = FUNC_0(VAR_2);
    if (VAR_4 != VAR_3) {
        FUNC_2(VAR_1,"warning",
            "Unexpected integer reply '%lld' (instead of '%lld')",
            VAR_4, VAR_3);
        return 0;
    }
    return 1;
}
