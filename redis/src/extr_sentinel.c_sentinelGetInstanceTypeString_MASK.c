
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ sentinelRedisInstance ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

char *FUNC_0(sentinelRedisInstance *VAR_3) {
    if (VAR_3->flags & VAR_0) return "master";
    else if (VAR_3->flags & VAR_2) return "slave";
    else if (VAR_3->flags & VAR_1) return "sentinel";
    else return "unknown";
}
