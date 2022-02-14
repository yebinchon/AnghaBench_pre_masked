
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef scalar_t__ mstime_t ;
struct TYPE_8__ {TYPE_3__* slaveof; } ;
struct TYPE_7__ {scalar_t__ fail_time; } ;
struct TYPE_6__ {scalar_t__ cluster_node_timeout; TYPE_1__* cluster; } ;
struct TYPE_5__ {int cant_failover_reason; } ;




 scalar_t__ VAR_0 ;


 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 TYPE_4__* VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(int VAR_4) {
    char *VAR_5;
    static time_t VAR_6 = 0;
    mstime_t VAR_7 = VAR_3.cluster_node_timeout + 5000;


    if (VAR_4 == VAR_3.cluster->cant_failover_reason &&
        FUNC_3(((void*)0))-VAR_6 < VAR_0)
        return;

    VAR_3.cluster->cant_failover_reason = VAR_4;




    if (VAR_2->slaveof &&
        FUNC_1(VAR_2->slaveof) &&
        (FUNC_0() - VAR_2->slaveof->fail_time) < VAR_7) return;

    switch(VAR_4) {
    case 131:
        VAR_5 = "Disconnected from master for longer than allowed. "
              "Please check the 'cluster-replica-validity-factor' configuration "
              "option.";
        break;
    case 129:
        VAR_5 = "Waiting the delay before I can start a new failover.";
        break;
    case 130:
        VAR_5 = "Failover attempt expired.";
        break;
    case 128:
        VAR_5 = "Waiting for votes, but majority still not reached.";
        break;
    default:
        VAR_5 = "Unknown reason code.";
        break;
    }
    VAR_6 = FUNC_3(((void*)0));
    FUNC_2(VAR_1,"Currently unable to failover: %s", VAR_5);
}
