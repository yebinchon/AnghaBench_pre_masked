
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int down_after_period; int flags; scalar_t__ role_reported; int role_reported_time; int s_down_since_time; TYPE_4__* link; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef int mstime_t ;
struct TYPE_6__ {int act_ping_time; int last_avail_time; scalar_t__ cc_conn_time; int last_pong_time; scalar_t__ pc_conn_time; int pc_last_activity; scalar_t__ pc; scalar_t__ cc; scalar_t__ disconnected; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,TYPE_1__*,char*) ;

void FUNC_3(sentinelRedisInstance *VAR_8) {
    mstime_t VAR_9 = 0;

    if (VAR_8->link->act_ping_time)
        VAR_9 = FUNC_1() - VAR_8->link->act_ping_time;
    else if (VAR_8->link->disconnected)
        VAR_9 = FUNC_1() - VAR_8->link->last_avail_time;







    if (VAR_8->link->cc &&
        (FUNC_1() - VAR_8->link->cc_conn_time) >
        VAR_2 &&
        VAR_8->link->act_ping_time != 0 &&


        (FUNC_1() - VAR_8->link->act_ping_time) > (VAR_8->down_after_period/2) &&
        (FUNC_1() - VAR_8->link->last_pong_time) > (VAR_8->down_after_period/2))
    {
        FUNC_0(VAR_8->link,VAR_8->link->cc);
    }






    if (VAR_8->link->pc &&
        (FUNC_1() - VAR_8->link->pc_conn_time) >
         VAR_2 &&
        (FUNC_1() - VAR_8->link->pc_last_activity) > (VAR_3*3))
    {
        FUNC_0(VAR_8->link,VAR_8->link->pc);
    }







    if (VAR_9 > VAR_8->down_after_period ||
        (VAR_8->flags & VAR_4 &&
         VAR_8->role_reported == VAR_6 &&
         FUNC_1() - VAR_8->role_reported_time >
          (VAR_8->down_after_period+VAR_1*2)))
    {

        if ((VAR_8->flags & VAR_7) == 0) {
            FUNC_2(VAR_0,"+sdown",VAR_8,"%@");
            VAR_8->s_down_since_time = FUNC_1();
            VAR_8->flags |= VAR_7;
        }
    } else {

        if (VAR_8->flags & VAR_7) {
            FUNC_2(VAR_0,"-sdown",VAR_8,"%@");
            VAR_8->flags &= ~(VAR_7|VAR_5);
        }
    }
}
