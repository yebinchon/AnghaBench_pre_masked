
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ failover_state; int * addr; TYPE_1__* promoted_slave; } ;
typedef TYPE_2__ sentinelRedisInstance ;
typedef int sentinelAddr ;
struct TYPE_4__ {int * addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

sentinelAddr *FUNC_0(sentinelRedisInstance *VAR_2) {





    if ((VAR_2->flags & VAR_1) &&
        VAR_2->promoted_slave &&
        VAR_2->failover_state >= VAR_0)
    {
        return VAR_2->promoted_slave->addr;
    } else {
        return VAR_2->addr;
    }
}
