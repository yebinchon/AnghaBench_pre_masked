
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ s_down_since_time; scalar_t__ o_down_since_time; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef scalar_t__ mstime_t ;


 scalar_t__ FUNC_0 () ;

int FUNC_1(sentinelRedisInstance *VAR_0, mstime_t VAR_1) {
    mstime_t VAR_2;

    VAR_2 = VAR_0->s_down_since_time;
    if (VAR_0->o_down_since_time > VAR_2)
        VAR_2 = VAR_0->o_down_since_time;
    return VAR_2 == 0 || (FUNC_0() - VAR_2) > VAR_1;
}
