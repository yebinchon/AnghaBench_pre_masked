
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * digest; int free; int * mem_usage; int aof_rewrite; int rdb_save; int rdb_load; int version; } ;
typedef TYPE_1__ RedisModuleTypeMethods ;
typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,char*,int ,char*,int ,int ,int ) ;
 int * FUNC_2 (int *,char*,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,char*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;

int FUNC_4(RedisModuleCtx *VAR_12, RedisModuleString **VAR_13, int VAR_14) {
    FUNC_0(VAR_13);
    FUNC_0(VAR_14);

    if (FUNC_3(VAR_12, "blockonkeys", 1, VAR_0)== VAR_1)
        return VAR_1;

    RedisModuleTypeMethods VAR_15 = {
        .version = VAR_3,
        .rdb_load = VAR_9,
        .rdb_save = VAR_10,
        .aof_rewrite = VAR_4,
        .mem_usage = ((void*)0),
        .free = VAR_7,
        .digest = ((void*)0)
    };

    VAR_11 = FUNC_2(VAR_12, "fsltype_t", 0, &VAR_15);
    if (VAR_11 == ((void*)0))
        return VAR_1;

    if (FUNC_1(VAR_12,"fsl.push",VAR_8,"",0,0,0) == VAR_1)
        return VAR_1;

    if (FUNC_1(VAR_12,"fsl.bpop2",VAR_5,"",0,0,0) == VAR_1)
        return VAR_1;

    if (FUNC_1(VAR_12,"fsl.bpopgt",VAR_6,"",0,0,0) == VAR_1)
        return VAR_1;

    return VAR_2;
}
