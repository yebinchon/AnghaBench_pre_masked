
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mstime_t ;
struct TYPE_7__ {scalar_t__ numslots; int fail_time; int flags; int name; } ;
typedef TYPE_1__ clusterNode ;
struct TYPE_8__ {int cluster_node_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,...) ;

void FUNC_7(clusterNode *VAR_6) {
    mstime_t VAR_7 = FUNC_1();

    FUNC_5(FUNC_2(VAR_6));



    if (FUNC_4(VAR_6) || VAR_6->numslots == 0) {
        FUNC_6(VAR_4,
            "Clear FAIL state for node %.40s: %s is reachable again.",
                VAR_6->name,
                FUNC_4(VAR_6) ? "replica" : "master without slots");
        VAR_6->flags &= ~VAR_1;
        FUNC_0(VAR_3|VAR_2);
    }





    if (FUNC_3(VAR_6) && VAR_6->numslots > 0 &&
        (VAR_7 - VAR_6->fail_time) >
        (VAR_5.cluster_node_timeout * VAR_0))
    {
        FUNC_6(VAR_4,
            "Clear FAIL state for node %.40s: is reachable again and nobody is serving its slots after some time.",
                VAR_6->name);
        VAR_6->flags &= ~VAR_1;
        FUNC_0(VAR_3|VAR_2);
    }
}
