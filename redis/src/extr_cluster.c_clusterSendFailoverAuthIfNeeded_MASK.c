
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_15__ {int voted_time; int name; struct TYPE_15__* slaveof; } ;
typedef TYPE_3__ clusterNode ;
struct TYPE_16__ {unsigned char* myslots; int* mflags; int configEpoch; int currentEpoch; } ;
typedef TYPE_4__ clusterMsg ;
struct TYPE_18__ {scalar_t__ numslots; } ;
struct TYPE_17__ {int cluster_node_timeout; TYPE_2__* cluster; } ;
struct TYPE_14__ {scalar_t__ currentEpoch; scalar_t__ lastVoteEpoch; TYPE_1__** slots; } ;
struct TYPE_13__ {scalar_t__ configEpoch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;
 TYPE_6__* VAR_5 ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_5__ VAR_6 ;
 int FUNC_8 (int ,char*,int ,...) ;

void FUNC_9(clusterNode *VAR_7, clusterMsg *VAR_8) {
    clusterNode *VAR_9 = VAR_7->slaveof;
    uint64_t VAR_10 = FUNC_7(VAR_8->currentEpoch);
    uint64_t VAR_11 = FUNC_7(VAR_8->configEpoch);
    unsigned char *VAR_12 = VAR_8->myslots;
    int VAR_13 = VAR_8->mflags[0] & VAR_0;
    int VAR_14;





    if (FUNC_6(VAR_5) || VAR_5->numslots == 0) return;





    if (VAR_10 < VAR_6.cluster->currentEpoch) {
        FUNC_8(VAR_4,
            "Failover auth denied to %.40s: reqEpoch (%llu) < curEpoch(%llu)",
            VAR_7->name,
            (unsigned long long) VAR_10,
            (unsigned long long) VAR_6.cluster->currentEpoch);
        return;
    }


    if (VAR_6.cluster->lastVoteEpoch == VAR_6.cluster->currentEpoch) {
        FUNC_8(VAR_4,
                "Failover auth denied to %.40s: already voted for epoch %llu",
                VAR_7->name,
                (unsigned long long) VAR_6.cluster->currentEpoch);
        return;
    }




    if (FUNC_5(VAR_7) || VAR_9 == ((void*)0) ||
        (!FUNC_4(VAR_9) && !VAR_13))
    {
        if (FUNC_5(VAR_7)) {
            FUNC_8(VAR_4,
                    "Failover auth denied to %.40s: it is a master node",
                    VAR_7->name);
        } else if (VAR_9 == ((void*)0)) {
            FUNC_8(VAR_4,
                    "Failover auth denied to %.40s: I don't know its master",
                    VAR_7->name);
        } else if (!FUNC_4(VAR_9)) {
            FUNC_8(VAR_4,
                    "Failover auth denied to %.40s: its master is up",
                    VAR_7->name);
        }
        return;
    }




    if (FUNC_3() - VAR_7->slaveof->voted_time < VAR_6.cluster_node_timeout * 2)
    {
        FUNC_8(VAR_4,
                "Failover auth denied to %.40s: "
                "can't vote about this master before %lld milliseconds",
                VAR_7->name,
                (long long) ((VAR_6.cluster_node_timeout*2)-
                             (FUNC_3() - VAR_7->slaveof->voted_time)));
        return;
    }




    for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
        if (FUNC_0(VAR_12, VAR_14) == 0) continue;
        if (VAR_6.cluster->slots[VAR_14] == ((void*)0) ||
            VAR_6.cluster->slots[VAR_14]->configEpoch <= VAR_11)
        {
            continue;
        }



        FUNC_8(VAR_4,
                "Failover auth denied to %.40s: "
                "slot %d epoch (%llu) > reqEpoch (%llu)",
                VAR_7->name, VAR_14,
                (unsigned long long) VAR_6.cluster->slots[VAR_14]->configEpoch,
                (unsigned long long) VAR_11);
        return;
    }


    VAR_6.cluster->lastVoteEpoch = VAR_6.cluster->currentEpoch;
    VAR_7->slaveof->voted_time = FUNC_3();
    FUNC_1(VAR_3|VAR_2);
    FUNC_2(VAR_7);
    FUNC_8(VAR_4, "Failover auth granted to %.40s for epoch %llu",
        VAR_7->name, (unsigned long long) VAR_6.cluster->currentEpoch);
}
