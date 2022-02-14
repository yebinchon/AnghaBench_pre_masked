
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int flags; scalar_t__ master_link_down_time; int down_after_period; scalar_t__ info_refresh; int last_pub_time; TYPE_2__* link; TYPE_1__* master; } ;
typedef TYPE_3__ sentinelRedisInstance ;
typedef int mstime_t ;
struct TYPE_10__ {int pending_commands; int refcount; int last_pong_time; int last_ping_time; int cc; scalar_t__ disconnected; } ;
struct TYPE_9__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_3__*,char*,int ) ;
 int VAR_9 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

void FUNC_5(sentinelRedisInstance *VAR_10) {
    mstime_t VAR_11 = FUNC_0();
    mstime_t VAR_12, VAR_13;
    int VAR_14;



    if (VAR_10->link->disconnected) return;







    if (VAR_10->link->pending_commands >=
        VAR_2 * VAR_10->link->refcount) return;
    if ((VAR_10->flags & VAR_8) &&
        ((VAR_10->master->flags & (VAR_6|VAR_5)) ||
         (VAR_10->master_link_down_time != 0)))
    {
        VAR_12 = 1000;
    } else {
        VAR_12 = VAR_1;
    }




    VAR_13 = VAR_10->down_after_period;
    if (VAR_13 > VAR_3) VAR_13 = VAR_3;


    if ((VAR_10->flags & VAR_7) == 0 &&
        (VAR_10->info_refresh == 0 ||
        (VAR_11 - VAR_10->info_refresh) > VAR_12))
    {
        VAR_14 = FUNC_1(VAR_10->link->cc,
            VAR_9, VAR_10, "%s",
            FUNC_2(VAR_10,"INFO"));
        if (VAR_14 == VAR_0) VAR_10->link->pending_commands++;
    }


    if ((VAR_11 - VAR_10->link->last_pong_time) > VAR_13 &&
               (VAR_11 - VAR_10->link->last_ping_time) > VAR_13/2) {
        FUNC_4(VAR_10);
    }


    if ((VAR_11 - VAR_10->last_pub_time) > VAR_4) {
        FUNC_3(VAR_10);
    }
}
