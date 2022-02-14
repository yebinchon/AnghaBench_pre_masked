
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int clusterState ;
struct TYPE_8__ {int port; int cport; int name; } ;
struct TYPE_7__ {int cfd_count; int tls_port; int port; int cluster_announce_port; int cluster_announce_bus_port; TYPE_1__* cluster; int * cfd; int el; scalar_t__ tls_cluster; int cluster_configfile; } ;
struct TYPE_6__ {int size; scalar_t__ mf_end; int slots_keys_count; int slots_to_keys; TYPE_3__* myself; int slots; scalar_t__ stats_pfail_nodes; scalar_t__* stats_bus_messages_received; scalar_t__* stats_bus_messages_sent; scalar_t__ lastVoteEpoch; int cant_failover_reason; scalar_t__ failover_auth_epoch; scalar_t__ failover_auth_rank; scalar_t__ failover_auth_count; scalar_t__ failover_auth_time; void* nodes_black_list; void* nodes; scalar_t__ todo_before_sleep; int state; scalar_t__ currentEpoch; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int *) ;
 int VAR_11 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 TYPE_3__* FUNC_7 (int *,int) ;
 void* FUNC_8 (int *,int *) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int,int *,int*) ;
 int FUNC_11 (int ,int ,int) ;
 TYPE_3__* VAR_14 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 TYPE_2__ VAR_15 ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (char*) ;
 TYPE_1__* FUNC_16 (int) ;

void FUNC_17(void) {
    int VAR_16 = 0;

    VAR_15.cluster = FUNC_16(sizeof(clusterState));
    VAR_15.cluster->myself = ((void*)0);
    VAR_15.cluster->currentEpoch = 0;
    VAR_15.cluster->state = VAR_4;
    VAR_15.cluster->size = 1;
    VAR_15.cluster->todo_before_sleep = 0;
    VAR_15.cluster->nodes = FUNC_8(&VAR_13,((void*)0));
    VAR_15.cluster->nodes_black_list =
        FUNC_8(&VAR_12,((void*)0));
    VAR_15.cluster->failover_auth_time = 0;
    VAR_15.cluster->failover_auth_count = 0;
    VAR_15.cluster->failover_auth_rank = 0;
    VAR_15.cluster->failover_auth_epoch = 0;
    VAR_15.cluster->cant_failover_reason = VAR_3;
    VAR_15.cluster->lastVoteEpoch = 0;
    for (int VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
        VAR_15.cluster->stats_bus_messages_sent[VAR_17] = 0;
        VAR_15.cluster->stats_bus_messages_received[VAR_17] = 0;
    }
    VAR_15.cluster->stats_pfail_nodes = 0;
    FUNC_11(VAR_15.cluster->slots,0, sizeof(VAR_15.cluster->slots));
    FUNC_2();



    if (FUNC_4(VAR_15.cluster_configfile) == VAR_8)
        FUNC_9(1);


    if (FUNC_3(VAR_15.cluster_configfile) == VAR_8) {


        VAR_14 = VAR_15.cluster->myself =
            FUNC_7(((void*)0),VAR_6|VAR_5);
        FUNC_14(VAR_9,"No cluster configuration found, I'm %.40s",
            VAR_14->name);
        FUNC_1(VAR_14);
        VAR_16 = 1;
    }
    if (VAR_16) FUNC_5(1);


    VAR_15.cfd_count = 0;




    int VAR_18 = VAR_15.tls_cluster ? VAR_15.tls_port : VAR_15.port;
    if (VAR_18 > (65535-VAR_7)) {
        FUNC_14(VAR_10, "Redis port number too high. "
                   "Cluster communication port is 10,000 port "
                   "numbers higher than your Redis port. "
                   "Your Redis port number must be "
                   "lower than 55535.");
        FUNC_9(1);
    }
    if (FUNC_10(VAR_18+VAR_7,
        VAR_15.cfd,&VAR_15.cfd_count) == VAR_8)
    {
        FUNC_9(1);
    } else {
        int VAR_19;

        for (VAR_19 = 0; VAR_19 < VAR_15.cfd_count; VAR_19++) {
            if (FUNC_0(VAR_15.el, VAR_15.cfd[VAR_19], VAR_1,
                VAR_11, ((void*)0)) == VAR_0)
                    FUNC_15("Unrecoverable error creating Redis Cluster "
                                "file event.");
        }
    }


    VAR_15.cluster->slots_to_keys = FUNC_12();
    FUNC_11(VAR_15.cluster->slots_keys_count,0,
           sizeof(VAR_15.cluster->slots_keys_count));



    VAR_14->port = VAR_18;
    VAR_14->cport = VAR_18+VAR_7;
    if (VAR_15.cluster_announce_port)
        VAR_14->port = VAR_15.cluster_announce_port;
    if (VAR_15.cluster_announce_bus_port)
        VAR_14->cport = VAR_15.cluster_announce_bus_port;

    VAR_15.cluster->mf_end = 0;
    FUNC_13();
    FUNC_6();
}
