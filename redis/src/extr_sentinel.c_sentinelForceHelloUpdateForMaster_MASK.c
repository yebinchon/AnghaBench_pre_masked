
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ last_pub_time; int slaves; int sentinels; } ;
typedef TYPE_1__ sentinelRedisInstance ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

int FUNC_1(sentinelRedisInstance *VAR_4) {
    if (!(VAR_4->flags & VAR_3)) return VAR_0;
    if (VAR_4->last_pub_time >= (VAR_2+1))
        VAR_4->last_pub_time -= (VAR_2+1);
    FUNC_0(VAR_4->sentinels);
    FUNC_0(VAR_4->slaves);
    return VAR_1;
}
