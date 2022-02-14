
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int digest; int free; int mem_usage; int aof_rewrite; int rdb_save; int rdb_load; int version; } ;
typedef TYPE_1__ RedisModuleTypeMethods ;
typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int *,char*,int ,char*,int,int,int) ;
 int * FUNC_2 (int *,char*,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,char*,int,int ) ;

int FUNC_4(RedisModuleCtx *VAR_15, RedisModuleString **VAR_16, int VAR_17) {
    FUNC_0(VAR_16);
    FUNC_0(VAR_17);

    if (FUNC_3(VAR_15,"hellotype",1,VAR_11)
        == VAR_12) return VAR_12;

    RedisModuleTypeMethods VAR_18 = {
        .version = VAR_14,
        .rdb_load = VAR_9,
        .rdb_save = VAR_10,
        .aof_rewrite = VAR_1,
        .mem_usage = VAR_7,
        .free = VAR_4,
        .digest = VAR_3
    };

    VAR_0 = FUNC_2(VAR_15,"hellotype",0,&VAR_18);
    if (VAR_0 == ((void*)0)) return VAR_12;

    if (FUNC_1(VAR_15,"hellotype.insert",
        VAR_5,"write deny-oom",1,1,1) == VAR_12)
        return VAR_12;

    if (FUNC_1(VAR_15,"hellotype.range",
        VAR_8,"readonly",1,1,1) == VAR_12)
        return VAR_12;

    if (FUNC_1(VAR_15,"hellotype.len",
        VAR_6,"readonly",1,1,1) == VAR_12)
        return VAR_12;

    if (FUNC_1(VAR_15,"hellotype.brange",
        VAR_2,"readonly",1,1,1) == VAR_12)
        return VAR_12;

    return VAR_13;
}
