
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int role_reported; int info_refresh; } ;
typedef TYPE_1__ sentinelRedisInstance ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;

int FUNC_1(sentinelRedisInstance *VAR_4) {
    return
        VAR_4->flags & VAR_1 &&
        VAR_4->role_reported == VAR_1 &&
        (VAR_4->flags & (VAR_3|VAR_2)) == 0 &&
        (FUNC_0() - VAR_4->info_refresh) < VAR_0*2;
}
