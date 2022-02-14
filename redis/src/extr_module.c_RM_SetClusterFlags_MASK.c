
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int cluster_module_flags; } ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_1__ VAR_4 ;

void FUNC_1(RedisModuleCtx *VAR_5, uint64_t VAR_6) {
    FUNC_0(VAR_5);
    if (VAR_6 & VAR_2)
        VAR_4.cluster_module_flags |= VAR_0;
    if (VAR_6 & VAR_3)
        VAR_4.cluster_module_flags |= VAR_1;
}
