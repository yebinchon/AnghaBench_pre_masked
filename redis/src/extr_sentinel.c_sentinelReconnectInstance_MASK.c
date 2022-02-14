
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_22__ {int flags; TYPE_1__* addr; TYPE_3__* link; } ;
typedef TYPE_2__ sentinelRedisInstance ;
typedef scalar_t__ mstime_t ;
struct TYPE_23__ {scalar_t__ disconnected; scalar_t__ last_reconn_time; TYPE_6__* pc; TYPE_6__* cc; void* pc_conn_time; void* cc_conn_time; scalar_t__ pending_commands; } ;
typedef TYPE_3__ instanceLink ;
struct TYPE_25__ {TYPE_3__* data; int errstr; scalar_t__ err; } ;
struct TYPE_24__ {int el; scalar_t__ tls_replication; } ;
struct TYPE_21__ {scalar_t__ port; int ip; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*,TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 void* FUNC_2 () ;
 int FUNC_3 (int ,TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,int ,TYPE_2__*,char*,int ,int ) ;
 void* FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 int VAR_9 ;
 int FUNC_8 (int ,char*,TYPE_2__*,char*,...) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (TYPE_2__*,TYPE_6__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,TYPE_6__*,char*) ;
 TYPE_4__ VAR_12 ;

void FUNC_13(sentinelRedisInstance *VAR_13) {
    if (VAR_13->link->disconnected == 0) return;
    if (VAR_13->addr->port == 0) return;
    instanceLink *VAR_14 = VAR_13->link;
    mstime_t VAR_15 = FUNC_2();

    if (VAR_15 - VAR_13->link->last_reconn_time < VAR_5) return;
    VAR_13->link->last_reconn_time = VAR_15;


    if (VAR_14->cc == ((void*)0)) {
        VAR_14->cc = FUNC_5(VAR_13->addr->ip,VAR_13->addr->port,VAR_3);
        if (!VAR_14->cc->err && VAR_12.tls_replication &&
                (FUNC_1(VAR_14->cc) == VAR_0)) {
            FUNC_8(VAR_2,"-cmd-link-reconnection",VAR_13,"%@ #Failed to initialize TLS");
            FUNC_0(VAR_14,VAR_14->cc);
        } else if (VAR_14->cc->err) {
            FUNC_8(VAR_2,"-cmd-link-reconnection",VAR_13,"%@ #%s",
                VAR_14->cc->errstr);
            FUNC_0(VAR_14,VAR_14->cc);
        } else {
            VAR_14->pending_commands = 0;
            VAR_14->cc_conn_time = FUNC_2();
            VAR_14->cc->data = VAR_14;
            FUNC_3(VAR_12.el,VAR_14->cc);
            FUNC_6(VAR_14->cc,
                    VAR_10);
            FUNC_7(VAR_14->cc,
                    VAR_9);
            FUNC_10(VAR_13,VAR_14->cc);
            FUNC_12(VAR_13,VAR_14->cc,"cmd");


            FUNC_11(VAR_13);
        }
    }

    if ((VAR_13->flags & (VAR_6|VAR_8)) && VAR_14->pc == ((void*)0)) {
        VAR_14->pc = FUNC_5(VAR_13->addr->ip,VAR_13->addr->port,VAR_3);
        if (!VAR_14->pc->err && VAR_12.tls_replication &&
                (FUNC_1(VAR_14->pc) == VAR_0)) {
            FUNC_8(VAR_2,"-pubsub-link-reconnection",VAR_13,"%@ #Failed to initialize TLS");
        } else if (VAR_14->pc->err) {
            FUNC_8(VAR_2,"-pubsub-link-reconnection",VAR_13,"%@ #%s",
                VAR_14->pc->errstr);
            FUNC_0(VAR_14,VAR_14->pc);
        } else {
            int VAR_16;

            VAR_14->pc_conn_time = FUNC_2();
            VAR_14->pc->data = VAR_14;
            FUNC_3(VAR_12.el,VAR_14->pc);
            FUNC_6(VAR_14->pc,
                    VAR_10);
            FUNC_7(VAR_14->pc,
                    VAR_9);
            FUNC_10(VAR_13,VAR_14->pc);
            FUNC_12(VAR_13,VAR_14->pc,"pubsub");

            VAR_16 = FUNC_4(VAR_14->pc,
                VAR_11, VAR_13, "%s %s",
                FUNC_9(VAR_13,"SUBSCRIBE"),
                VAR_4);
            if (VAR_16 != VAR_1) {


                FUNC_0(VAR_14,VAR_14->pc);
                return;
            }
        }
    }


    if (VAR_14->cc && (VAR_13->flags & VAR_7 || VAR_14->pc))
        VAR_14->disconnected = 0;
}
