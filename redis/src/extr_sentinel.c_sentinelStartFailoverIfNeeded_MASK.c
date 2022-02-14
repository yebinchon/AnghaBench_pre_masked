
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_4__ {int flags; int failover_start_time; int failover_timeout; int failover_delay_logged; } ;
typedef TYPE_1__ sentinelRedisInstance ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,char*) ;

int FUNC_4(sentinelRedisInstance *VAR_3) {

    if (!(VAR_3->flags & VAR_2)) return 0;


    if (VAR_3->flags & VAR_1) return 0;


    if (FUNC_1() - VAR_3->failover_start_time <
        VAR_3->failover_timeout*2)
    {
        if (VAR_3->failover_delay_logged != VAR_3->failover_start_time) {
            time_t VAR_4 = (VAR_3->failover_start_time +
                            VAR_3->failover_timeout*2) / 1000;
            char VAR_5[26];

            FUNC_0(&VAR_4,VAR_5);
            VAR_5[24] = '\0';
            VAR_3->failover_delay_logged = VAR_3->failover_start_time;
            FUNC_3(VAR_0,
                "Next failover delay: I will not start a failover before %s",
                VAR_5);
        }
        return 0;
    }

    FUNC_2(VAR_3);
    return 1;
}
