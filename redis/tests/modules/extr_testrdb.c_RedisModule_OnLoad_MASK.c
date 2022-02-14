
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int version; int aux_save_triggers; int aux_save; int aux_load; int free; int * digest; int * aof_rewrite; int rdb_save; int rdb_load; } ;
typedef TYPE_1__ RedisModuleTypeMethods ;
typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,char*,int ,char*,int,int,int) ;
 int * FUNC_2 (int *,char*,int,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,char*,int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,scalar_t__*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

int FUNC_6(RedisModuleCtx *VAR_20, RedisModuleString **VAR_21, int VAR_22) {
    FUNC_0(VAR_21);
    FUNC_0(VAR_22);

    if (FUNC_3(VAR_20,"testrdb",1,VAR_0) == VAR_3)
        return VAR_3;

    FUNC_4(VAR_20, VAR_5);

    if (VAR_22 > 0)
        FUNC_5(VAR_21[0], &VAR_7);

    if (VAR_7==0) {
        RedisModuleTypeMethods VAR_23 = {
            .version = 1,
            .rdb_load = VAR_18,
            .rdb_save = VAR_19,
            .aof_rewrite = ((void*)0),
            .digest = ((void*)0),
            .free = VAR_17,
        };

        VAR_16 = FUNC_2(VAR_20, "test__rdb", 1, &VAR_23);
        if (VAR_16 == ((void*)0))
            return VAR_3;
    } else {
        RedisModuleTypeMethods VAR_24 = {
            .version = VAR_6,
            .rdb_load = VAR_18,
            .rdb_save = VAR_19,
            .aof_rewrite = ((void*)0),
            .digest = ((void*)0),
            .free = VAR_17,
            .aux_load = VAR_8,
            .aux_save = VAR_9,
            .aux_save_triggers = (VAR_7 == 1 ?
                                  VAR_1 :
                                  VAR_2 | VAR_1)
        };

        VAR_16 = FUNC_2(VAR_20, "test__rdb", 1, &VAR_24);
        if (VAR_16 == ((void*)0))
            return VAR_3;
    }

    if (FUNC_1(VAR_20,"testrdb.set.before", VAR_14,"deny-oom",0,0,0) == VAR_3)
        return VAR_3;

    if (FUNC_1(VAR_20,"testrdb.get.before", VAR_11,"",0,0,0) == VAR_3)
        return VAR_3;

    if (FUNC_1(VAR_20,"testrdb.set.after", VAR_13,"deny-oom",0,0,0) == VAR_3)
        return VAR_3;

    if (FUNC_1(VAR_20,"testrdb.get.after", VAR_10,"",0,0,0) == VAR_3)
        return VAR_3;

    if (FUNC_1(VAR_20,"testrdb.set.key", VAR_15,"deny-oom",1,1,1) == VAR_3)
        return VAR_3;

    if (FUNC_1(VAR_20,"testrdb.get.key", VAR_12,"",1,1,1) == VAR_3)
        return VAR_3;

    return VAR_4;
}
