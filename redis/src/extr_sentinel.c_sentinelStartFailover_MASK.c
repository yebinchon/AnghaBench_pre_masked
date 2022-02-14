
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; void* failover_state_change_time; void* failover_start_time; scalar_t__ failover_epoch; int failover_state; } ;
typedef TYPE_1__ sentinelRedisInstance ;
struct TYPE_6__ {scalar_t__ current_epoch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_4__ VAR_5 ;
 int FUNC_2 (int ,char*,TYPE_1__*,char*,...) ;
 int FUNC_3 (int) ;

void FUNC_4(sentinelRedisInstance *VAR_6) {
    FUNC_3(VAR_6->flags & VAR_4);

    VAR_6->failover_state = VAR_1;
    VAR_6->flags |= VAR_3;
    VAR_6->failover_epoch = ++VAR_5.current_epoch;
    FUNC_2(VAR_0,"+new-epoch",VAR_6,"%llu",
        (unsigned long long) VAR_5.current_epoch);
    FUNC_2(VAR_0,"+try-failover",VAR_6,"%@");
    VAR_6->failover_start_time = FUNC_0()+FUNC_1()%VAR_2;
    VAR_6->failover_state_change_time = FUNC_0();
}
