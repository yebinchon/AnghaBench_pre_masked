
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int flags; scalar_t__ s_down_since_time; int down_after_period; scalar_t__ slave_priority; scalar_t__ info_refresh; scalar_t__ master_link_down_time; TYPE_1__* link; int slaves; } ;
typedef TYPE_2__ sentinelRedisInstance ;
typedef scalar_t__ mstime_t ;
typedef int instance ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_9__ {int last_avail_time; scalar_t__ disconnected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_2__**,int,int,int ) ;
 int FUNC_7 (TYPE_2__**) ;
 TYPE_2__** FUNC_8 (int) ;

sentinelRedisInstance *FUNC_9(sentinelRedisInstance *VAR_5) {
    sentinelRedisInstance **VAR_6 =
        FUNC_8(sizeof(VAR_6[0])*FUNC_4(VAR_5->slaves));
    sentinelRedisInstance *VAR_7 = ((void*)0);
    int VAR_8 = 0;
    dictIterator *VAR_9;
    dictEntry *VAR_10;
    mstime_t VAR_11 = 0;

    if (VAR_5->flags & VAR_3)
        VAR_11 += FUNC_5() - VAR_5->s_down_since_time;
    VAR_11 += VAR_5->down_after_period * 10;

    VAR_9 = FUNC_0(VAR_5->slaves);
    while((VAR_10 = FUNC_2(VAR_9)) != ((void*)0)) {
        sentinelRedisInstance *VAR_12 = FUNC_1(VAR_10);
        mstime_t VAR_13;

        if (VAR_12->flags & (VAR_3|VAR_2)) continue;
        if (VAR_12->link->disconnected) continue;
        if (FUNC_5() - VAR_12->link->last_avail_time > VAR_1*5) continue;
        if (VAR_12->slave_priority == 0) continue;




        if (VAR_5->flags & VAR_3)
            VAR_13 = VAR_1*5;
        else
            VAR_13 = VAR_0*3;
        if (FUNC_5() - VAR_12->info_refresh > VAR_13) continue;
        if (VAR_12->master_link_down_time > VAR_11) continue;
        VAR_6[VAR_8++] = VAR_12;
    }
    FUNC_3(VAR_9);
    if (VAR_8) {
        FUNC_6(VAR_6,VAR_8,sizeof(sentinelRedisInstance*),
            VAR_4);
        VAR_7 = VAR_6[0];
    }
    FUNC_7(VAR_6);
    return VAR_7;
}
