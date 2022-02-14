
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mstime_t ;
struct TYPE_11__ {scalar_t__ numslots; } ;
struct TYPE_10__ {scalar_t__ configEpoch; TYPE_5__* slaveof; } ;
struct TYPE_9__ {int cluster_node_timeout; scalar_t__ repl_state; int cluster_slave_validity_factor; TYPE_2__* cluster; scalar_t__ repl_ping_slave_period; scalar_t__ repl_down_since; scalar_t__ unixtime; TYPE_1__* master; scalar_t__ cluster_slave_no_failover; } ;
struct TYPE_8__ {scalar_t__ failover_auth_time; int size; scalar_t__ mf_end; int todo_before_sleep; int failover_auth_count; int failover_auth_sent; int failover_auth_rank; scalar_t__ currentEpoch; scalar_t__ failover_auth_epoch; int cant_failover_reason; scalar_t__ mf_can_start; } ;
struct TYPE_7__ {scalar_t__ lastinteraction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 void* FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 TYPE_4__* VAR_12 ;
 int FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 TYPE_3__ VAR_13 ;
 int FUNC_11 (int ,char*,...) ;

void FUNC_12(void) {
    mstime_t VAR_14;
    mstime_t VAR_15 = FUNC_6() - VAR_13.cluster->failover_auth_time;
    int VAR_16 = (VAR_13.cluster->size / 2) + 1;
    int VAR_17 = VAR_13.cluster->mf_end != 0 &&
                          VAR_13.cluster->mf_can_start;
    mstime_t VAR_18, VAR_19;

    VAR_13.cluster->todo_before_sleep &= ~VAR_7;
    VAR_18 = VAR_13.cluster_node_timeout*2;
    if (VAR_18 < 2000) VAR_18 = 2000;
    VAR_19 = VAR_18*2;
    if (FUNC_8(VAR_12) ||
        VAR_12->slaveof == ((void*)0) ||
        (!FUNC_7(VAR_12->slaveof) && !VAR_17) ||
        (VAR_13.cluster_slave_no_failover && !VAR_17) ||
        VAR_12->slaveof->numslots == 0)
    {


        VAR_13.cluster->cant_failover_reason = VAR_3;
        return;
    }



    if (VAR_13.repl_state == VAR_11) {
        VAR_14 = (mstime_t)(VAR_13.unixtime - VAR_13.master->lastinteraction)
                   * 1000;
    } else {
        VAR_14 = (mstime_t)(VAR_13.unixtime - VAR_13.repl_down_since) * 1000;
    }




    if (VAR_14 > VAR_13.cluster_node_timeout)
        VAR_14 -= VAR_13.cluster_node_timeout;





    if (VAR_13.cluster_slave_validity_factor &&
        VAR_14 >
        (((mstime_t)VAR_13.repl_ping_slave_period * 1000) +
         (VAR_13.cluster_node_timeout * VAR_13.cluster_slave_validity_factor)))
    {
        if (!VAR_17) {
            FUNC_4(VAR_1);
            return;
        }
    }



    if (VAR_15 > VAR_19) {
        VAR_13.cluster->failover_auth_time = FUNC_6() +
            500 +
            FUNC_9() % 500;
        VAR_13.cluster->failover_auth_count = 0;
        VAR_13.cluster->failover_auth_sent = 0;
        VAR_13.cluster->failover_auth_rank = FUNC_3();



        VAR_13.cluster->failover_auth_time +=
            VAR_13.cluster->failover_auth_rank * 1000;

        if (VAR_13.cluster->mf_end) {
            VAR_13.cluster->failover_auth_time = FUNC_6();
            VAR_13.cluster->failover_auth_rank = 0;
     FUNC_1(VAR_7);
        }
        FUNC_11(VAR_10,
            "Start of election delayed for %lld milliseconds "
            "(rank #%d, offset %lld).",
            VAR_13.cluster->failover_auth_time - FUNC_6(),
            VAR_13.cluster->failover_auth_rank,
            FUNC_10());



        FUNC_0(VAR_0);
        return;
    }






    if (VAR_13.cluster->failover_auth_sent == 0 &&
        VAR_13.cluster->mf_end == 0)
    {
        int VAR_20 = FUNC_3();
        if (VAR_20 > VAR_13.cluster->failover_auth_rank) {
            long long VAR_21 =
                (VAR_20 - VAR_13.cluster->failover_auth_rank) * 1000;
            VAR_13.cluster->failover_auth_time += VAR_21;
            VAR_13.cluster->failover_auth_rank = VAR_20;
            FUNC_11(VAR_10,
                "Replica rank updated to #%d, added %lld milliseconds of delay.",
                VAR_20, VAR_21);
        }
    }


    if (FUNC_6() < VAR_13.cluster->failover_auth_time) {
        FUNC_4(VAR_4);
        return;
    }


    if (VAR_15 > VAR_18) {
        FUNC_4(VAR_2);
        return;
    }


    if (VAR_13.cluster->failover_auth_sent == 0) {
        VAR_13.cluster->currentEpoch++;
        VAR_13.cluster->failover_auth_epoch = VAR_13.cluster->currentEpoch;
        FUNC_11(VAR_10,"Starting a failover election for epoch %llu.",
            (unsigned long long) VAR_13.cluster->currentEpoch);
        FUNC_5();
        VAR_13.cluster->failover_auth_sent = 1;
        FUNC_1(VAR_8|
                             VAR_9|
                             VAR_6);
        return;
    }


    if (VAR_13.cluster->failover_auth_count >= VAR_16) {


        FUNC_11(VAR_10,
            "Failover election won: I'm the new master.");


        if (VAR_12->configEpoch < VAR_13.cluster->failover_auth_epoch) {
            VAR_12->configEpoch = VAR_13.cluster->failover_auth_epoch;
            FUNC_11(VAR_10,
                "configEpoch set to %llu after successful failover",
                (unsigned long long) VAR_12->configEpoch);
        }


        FUNC_2();
    } else {
        FUNC_4(VAR_5);
    }
}
