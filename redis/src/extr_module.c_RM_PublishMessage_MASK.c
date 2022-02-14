
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cluster_enabled; } ;
typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__ VAR_0 ;

int FUNC_3(RedisModuleCtx *VAR_1, RedisModuleString *VAR_2, RedisModuleString *VAR_3) {
    FUNC_0(VAR_1);
    int VAR_4 = FUNC_2(VAR_2, VAR_3);
    if (VAR_0.cluster_enabled)
        FUNC_1(VAR_2, VAR_3);
    return VAR_4;
}
