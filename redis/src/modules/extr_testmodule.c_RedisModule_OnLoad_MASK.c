
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *,char*,int ,char*,int,int,int) ;
 scalar_t__ FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (int *,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

int FUNC_4(RedisModuleCtx *VAR_16, RedisModuleString **VAR_17, int VAR_18) {
    FUNC_0(VAR_17);
    FUNC_0(VAR_18);

    if (FUNC_2(VAR_16,"test",1,VAR_1)
        == VAR_2) return VAR_2;

    if (FUNC_1(VAR_16,"test.call",
        VAR_8,"write deny-oom",1,1,1) == VAR_2)
        return VAR_2;

    if (FUNC_1(VAR_16,"test.string.append",
        VAR_12,"write deny-oom",1,1,1) == VAR_2)
        return VAR_2;

    if (FUNC_1(VAR_16,"test.string.append.am",
        VAR_13,"write deny-oom",1,1,1) == VAR_2)
        return VAR_2;

    if (FUNC_1(VAR_16,"test.string.printf",
        VAR_14,"write deny-oom",1,1,1) == VAR_2)
        return VAR_2;

    if (FUNC_1(VAR_16,"test.ctxflags",
        VAR_9,"readonly",1,1,1) == VAR_2)
        return VAR_2;

    if (FUNC_1(VAR_16,"test.unlink",
        VAR_15,"write deny-oom",1,1,1) == VAR_2)
        return VAR_2;

    if (FUNC_1(VAR_16,"test.it",
        VAR_10,"readonly",1,1,1) == VAR_2)
        return VAR_2;

    FUNC_3(VAR_16,
                                            VAR_3 |
                                            VAR_5 |
                                            VAR_6 |
                                            VAR_4,
                                        VAR_0);
    if (FUNC_1(VAR_16,"test.notify",
        VAR_11,"write deny-oom",1,1,1) == VAR_2)
        return VAR_2;

    return VAR_7;
}
