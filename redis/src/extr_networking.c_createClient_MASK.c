
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint64_t ;
typedef int connection ;
struct TYPE_12__ {scalar_t__ reploffset; scalar_t__ numreplicas; scalar_t__ xread_group_noack; int * xread_consumer; int * xread_group; int * target; void* keys; scalar_t__ timeout; } ;
struct TYPE_13__ {int resp; int bulklen; int authenticated; char* slave_ip; void* pubsub_patterns; scalar_t__ client_tracking_redirection; int * client_list_node; int * peerid; void* pubsub_channels; void* watched_keys; scalar_t__ woff; TYPE_1__ bpop; int btype; void* reply; scalar_t__ obuf_soft_limit_reached_time; scalar_t__ reply_bytes; int slave_capa; scalar_t__ slave_listening_port; scalar_t__ repl_ack_time; scalar_t__ repl_ack_off; scalar_t__ read_reploff; scalar_t__ reploff; scalar_t__ repl_put_online_on_ack; int replstate; TYPE_10__* user; int lastinteraction; int ctime; scalar_t__ flags; scalar_t__ sentlen; scalar_t__ multibulklen; int * lastcmd; int cmd; int * argv; scalar_t__ argc; scalar_t__ reqtype; scalar_t__ querybuf_peak; void* pending_querybuf; void* querybuf; scalar_t__ qb_pos; scalar_t__ bufpos; int * name; int * conn; int id; } ;
typedef TYPE_2__ client ;
struct TYPE_14__ {int unixtime; int next_client_id; scalar_t__ tcpkeepalive; } ;
struct TYPE_11__ {int flags; } ;


 int VAR_0 ;
 TYPE_10__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_5 ;
 void* FUNC_5 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 void* FUNC_8 () ;
 int VAR_8 ;
 int FUNC_9 (void*,int ) ;
 int FUNC_10 (void*,int ) ;
 int FUNC_11 (void*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_12 () ;
 int FUNC_13 (TYPE_2__*,int ) ;
 TYPE_4__ VAR_12 ;
 TYPE_2__* FUNC_14 (int) ;

client *FUNC_15(connection *VAR_13) {
    client *VAR_14 = FUNC_14(sizeof(client));





    if (VAR_13) {
        FUNC_2(VAR_13);
        FUNC_0(VAR_13);
        if (VAR_12.tcpkeepalive)
            FUNC_1(VAR_13,VAR_12.tcpkeepalive);
        FUNC_4(VAR_13, VAR_11);
        FUNC_3(VAR_13, VAR_14);
    }

    FUNC_13(VAR_14,0);
    uint64_t VAR_15 = ++VAR_12.next_client_id;
    VAR_14->id = VAR_15;
    VAR_14->resp = 2;
    VAR_14->conn = VAR_13;
    VAR_14->name = ((void*)0);
    VAR_14->bufpos = 0;
    VAR_14->qb_pos = 0;
    VAR_14->querybuf = FUNC_12();
    VAR_14->pending_querybuf = FUNC_12();
    VAR_14->querybuf_peak = 0;
    VAR_14->reqtype = 0;
    VAR_14->argc = 0;
    VAR_14->argv = ((void*)0);
    VAR_14->cmd = *(VAR_14->lastcmd = ((void*)0));
    VAR_14->user = VAR_1;
    VAR_14->multibulklen = 0;
    VAR_14->bulklen = -1;
    VAR_14->sentlen = 0;
    VAR_14->flags = 0;
    VAR_14->ctime = VAR_14->lastinteraction = VAR_12.unixtime;


    VAR_14->authenticated = (VAR_14->user->flags & VAR_4) != 0;
    VAR_14->replstate = VAR_2;
    VAR_14->repl_put_online_on_ack = 0;
    VAR_14->reploff = 0;
    VAR_14->read_reploff = 0;
    VAR_14->repl_ack_off = 0;
    VAR_14->repl_ack_time = 0;
    VAR_14->slave_listening_port = 0;
    VAR_14->slave_ip[0] = '\0';
    VAR_14->slave_capa = VAR_3;
    VAR_14->reply = FUNC_8();
    VAR_14->reply_bytes = 0;
    VAR_14->obuf_soft_limit_reached_time = 0;
    FUNC_10(VAR_14->reply,VAR_7);
    FUNC_9(VAR_14->reply,VAR_6);
    VAR_14->btype = VAR_0;
    VAR_14->bpop.timeout = 0;
    VAR_14->bpop.keys = FUNC_5(&VAR_9,((void*)0));
    VAR_14->bpop.target = ((void*)0);
    VAR_14->bpop.xread_group = ((void*)0);
    VAR_14->bpop.xread_consumer = ((void*)0);
    VAR_14->bpop.xread_group_noack = 0;
    VAR_14->bpop.numreplicas = 0;
    VAR_14->bpop.reploffset = 0;
    VAR_14->woff = 0;
    VAR_14->watched_keys = FUNC_8();
    VAR_14->pubsub_channels = FUNC_5(&VAR_10,((void*)0));
    VAR_14->pubsub_patterns = FUNC_8();
    VAR_14->peerid = ((void*)0);
    VAR_14->client_list_node = ((void*)0);
    VAR_14->client_tracking_redirection = 0;
    FUNC_10(VAR_14->pubsub_patterns,VAR_5);
    FUNC_11(VAR_14->pubsub_patterns,VAR_8);
    if (VAR_13) FUNC_7(VAR_14);
    FUNC_6(VAR_14);
    return VAR_14;
}
