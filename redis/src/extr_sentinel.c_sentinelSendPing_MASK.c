
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* link; } ;
typedef TYPE_2__ sentinelRedisInstance ;
struct TYPE_6__ {scalar_t__ last_ping_time; scalar_t__ act_ping_time; int pending_commands; int cc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_2__*,char*,int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int VAR_1 ;

int FUNC_3(sentinelRedisInstance *VAR_2) {
    int VAR_3 = FUNC_1(VAR_2->link->cc,
        VAR_1, VAR_2, "%s",
        FUNC_2(VAR_2,"PING"));
    if (VAR_3 == VAR_0) {
        VAR_2->link->pending_commands++;
        VAR_2->link->last_ping_time = FUNC_0();



        if (VAR_2->link->act_ping_time == 0)
            VAR_2->link->act_ping_time = VAR_2->link->last_ping_time;
        return 1;
    } else {
        return 0;
    }
}
