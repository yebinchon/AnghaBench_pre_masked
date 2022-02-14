
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ failover_state; TYPE_1__* promoted_slave; int failover_state_change_time; } ;
typedef TYPE_2__ sentinelRedisInstance ;
struct TYPE_4__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

void FUNC_2(sentinelRedisInstance *VAR_5) {
    FUNC_1(VAR_5->flags & VAR_2);
    FUNC_1(VAR_5->failover_state <= VAR_1);

    VAR_5->flags &= ~(VAR_2|VAR_3);
    VAR_5->failover_state = VAR_0;
    VAR_5->failover_state_change_time = FUNC_0();
    if (VAR_5->promoted_slave) {
        VAR_5->promoted_slave->flags &= ~VAR_4;
        VAR_5->promoted_slave = ((void*)0);
    }
}
