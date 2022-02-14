
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int ,int ,char*,int,int,int) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (int *,char*,char*) ;
 int * FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,long long*) ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

int FUNC_6(RedisModuleCtx *VAR_13, RedisModuleString **VAR_14, int VAR_15) {
    if (FUNC_2(VAR_13,"commandfilter",1,VAR_4)
            == VAR_6) return VAR_6;

    if (VAR_15 != 2) {
        FUNC_3(VAR_13, "warning", "Log key name not specified");
        return VAR_6;
    }

    long long VAR_16 = 0;
    VAR_10 = FUNC_1(VAR_13, VAR_14[0]);
    FUNC_5(VAR_14[1], &VAR_16);

    if (FUNC_0(VAR_13,VAR_9,
                VAR_1,"write deny-oom",1,1,1) == VAR_6)
            return VAR_6;

    if (FUNC_0(VAR_13,VAR_11,
                VAR_2,"deny-oom",1,1,1) == VAR_6)
            return VAR_6;

    if (FUNC_0(VAR_13,VAR_12,
                VAR_3,"write deny-oom",1,1,1) == VAR_6)
            return VAR_6;

    if ((VAR_8 = FUNC_4(VAR_13, VAR_0,
                    VAR_16 ? VAR_5 : 0))
            == ((void*)0)) return VAR_6;

    return VAR_7;
}
