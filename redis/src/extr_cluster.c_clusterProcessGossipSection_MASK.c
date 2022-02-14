
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint16_t ;
typedef int sds ;
typedef int mstime_t ;
struct TYPE_21__ {scalar_t__ ping_sent; int pong_received; int flags; scalar_t__ port; scalar_t__ cport; int ip; scalar_t__ link; int name; } ;
typedef TYPE_3__ clusterNode ;
struct TYPE_22__ {int cport; int port; int ip; int nodename; int pong_received; int flags; } ;
typedef TYPE_4__ clusterMsgDataGossip ;
struct TYPE_19__ {scalar_t__ gossip; } ;
struct TYPE_20__ {TYPE_1__ ping; } ;
struct TYPE_23__ {int sender; TYPE_2__ data; int count; } ;
typedef TYPE_5__ clusterMsg ;
struct TYPE_24__ {TYPE_3__* node; } ;
typedef TYPE_6__ clusterLink ;
struct TYPE_25__ {scalar_t__ verbosity; int mstime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,int ,int ) ;
 TYPE_3__* VAR_6 ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 TYPE_7__ VAR_7 ;
 int FUNC_15 (scalar_t__,char*,int ,int ,...) ;
 scalar_t__ FUNC_16 (int ,int ) ;

void FUNC_17(clusterMsg *VAR_8, clusterLink *VAR_9) {
    uint16_t VAR_10 = FUNC_11(VAR_8->count);
    clusterMsgDataGossip *VAR_11 = (clusterMsgDataGossip*) VAR_8->data.ping.gossip;
    clusterNode *VAR_12 = VAR_9->node ? VAR_9->node : FUNC_1(VAR_8->sender);

    while(VAR_10--) {
        uint16_t VAR_13 = FUNC_11(VAR_11->flags);
        clusterNode *VAR_14;
        sds VAR_15;

        if (VAR_7.verbosity == VAR_3) {
            VAR_15 = FUNC_12(FUNC_13(), VAR_13);
            FUNC_15(VAR_3,"GOSSIP %.40s %s:%d@%d %s",
                VAR_11->nodename,
                VAR_11->ip,
                FUNC_11(VAR_11->port),
                FUNC_11(VAR_11->cport),
                VAR_15);
            FUNC_14(VAR_15);
        }


        VAR_14 = FUNC_1(VAR_11->nodename);
        if (VAR_14) {


            if (VAR_12 && FUNC_9(VAR_12) && VAR_14 != VAR_6) {
                if (VAR_13 & (VAR_0|VAR_2)) {
                    if (FUNC_2(VAR_14,VAR_12)) {
                        FUNC_15(VAR_4,
                            "Node %.40s reported node %.40s as not reachable.",
                            VAR_12->name, VAR_14->name);
                    }
                    FUNC_7(VAR_14);
                } else {
                    if (FUNC_3(VAR_14,VAR_12)) {
                        FUNC_15(VAR_4,
                            "Node %.40s reported node %.40s is back online.",
                            VAR_12->name, VAR_14->name);
                    }
                }
            }





            if (!(VAR_13 & (VAR_0|VAR_2)) &&
                VAR_14->ping_sent == 0 &&
                FUNC_4(VAR_14) == 0)
            {
                mstime_t VAR_16 = FUNC_10(VAR_11->pong_received);
                VAR_16 *= 1000;





                if (VAR_16 <= (VAR_7.mstime+500) &&
                    VAR_16 > VAR_14->pong_received)
                {
                    VAR_14->pong_received = VAR_16;
                }
            }






            if (VAR_14->flags & (VAR_0|VAR_2) &&
                !(VAR_13 & VAR_1) &&
                !(VAR_13 & (VAR_0|VAR_2)) &&
                (FUNC_16(VAR_14->ip,VAR_11->ip) ||
                 VAR_14->port != FUNC_11(VAR_11->port) ||
                 VAR_14->cport != FUNC_11(VAR_11->cport)))
            {
                if (VAR_14->link) FUNC_6(VAR_14->link);
                FUNC_8(VAR_14->ip,VAR_11->ip,VAR_5);
                VAR_14->port = FUNC_11(VAR_11->port);
                VAR_14->cport = FUNC_11(VAR_11->cport);
                VAR_14->flags &= ~VAR_1;
            }
        } else {






            if (VAR_12 &&
                !(VAR_13 & VAR_1) &&
                !FUNC_0(VAR_11->nodename))
            {
                FUNC_5(VAR_11->ip,FUNC_11(VAR_11->port),FUNC_11(VAR_11->cport));
            }
        }


        VAR_11++;
    }
}
