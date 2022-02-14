
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int flags; int parallel_syncs; scalar_t__ slave_reconf_sent_time; TYPE_3__* promoted_slave; TYPE_1__* link; int slaves; } ;
typedef TYPE_4__ sentinelRedisInstance ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_12__ {TYPE_2__* addr; } ;
struct TYPE_11__ {int port; int ip; } ;
struct TYPE_10__ {scalar_t__ disconnected; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,char*,TYPE_4__*,char*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;

void FUNC_8(sentinelRedisInstance *VAR_7) {
    dictIterator *VAR_8;
    dictEntry *VAR_9;
    int VAR_10 = 0;

    VAR_8 = FUNC_0(VAR_7->slaves);
    while((VAR_9 = FUNC_2(VAR_8)) != ((void*)0)) {
        sentinelRedisInstance *VAR_11 = FUNC_1(VAR_9);

        if (VAR_11->flags & (VAR_6|VAR_5))
            VAR_10++;
    }
    FUNC_3(VAR_8);

    VAR_8 = FUNC_0(VAR_7->slaves);
    while(VAR_10 < VAR_7->parallel_syncs &&
          (VAR_9 = FUNC_2(VAR_8)) != ((void*)0))
    {
        sentinelRedisInstance *VAR_12 = FUNC_1(VAR_9);
        int VAR_13;


        if (VAR_12->flags & (VAR_3|VAR_4)) continue;





        if ((VAR_12->flags & VAR_6) &&
            (FUNC_4() - VAR_12->slave_reconf_sent_time) >
            VAR_2)
        {
            FUNC_5(VAR_1,"-slave-reconf-sent-timeout",VAR_12,"%@");
            VAR_12->flags &= ~VAR_6;
            VAR_12->flags |= VAR_4;
        }



        if (VAR_12->flags & (VAR_6|VAR_5)) continue;
        if (VAR_12->link->disconnected) continue;


        VAR_13 = FUNC_7(VAR_12,
                VAR_7->promoted_slave->addr->ip,
                VAR_7->promoted_slave->addr->port);
        if (VAR_13 == VAR_0) {
            VAR_12->flags |= VAR_6;
            VAR_12->slave_reconf_sent_time = FUNC_4();
            FUNC_5(VAR_1,"+slave-reconf-sent",VAR_12,"%@");
            VAR_10++;
        }
    }
    FUNC_3(VAR_8);


    FUNC_6(VAR_7);
}
