
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {TYPE_5__* peer; TYPE_4__* local; } ;
struct TYPE_10__ {int epoch; } ;
struct rxrpc_connection {TYPE_6__ params; int serial; int out_clientflag; TYPE_3__ proto; } ;
struct rxrpc_call {int debug_id; int abort_code; int service_id; int security_ix; int call_id; int cid; TYPE_2__* peer; int lock; scalar_t__ conn; int flags; } ;
struct TYPE_14__ {void* serial; int serviceId; scalar_t__ _rsvd; int securityIndex; scalar_t__ userStatus; int flags; int type; scalar_t__ seq; void* callNumber; void* cid; void* epoch; } ;
struct rxrpc_abort_buffer {TYPE_7__ whdr; void* abort_code; } ;
struct msghdr {scalar_t__ msg_flags; scalar_t__ msg_controllen; int * msg_control; int msg_namelen; int * msg_name; } ;
struct kvec {int iov_len; struct rxrpc_abort_buffer* iov_base; } ;
typedef int rxrpc_serial_t ;
typedef int pkt ;
struct TYPE_12__ {int last_tx_at; } ;
struct TYPE_11__ {int socket; } ;
struct TYPE_8__ {int transport_len; int transport; } ;
struct TYPE_9__ {TYPE_1__ srx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct msghdr*,struct kvec*,int,int) ;
 int FUNC_4 () ;
 struct rxrpc_connection* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct rxrpc_call*) ;
 int FUNC_7 (struct rxrpc_connection*) ;
 int FUNC_8 (struct rxrpc_call*,int) ;
 int VAR_3 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int ,int,int ) ;
 int FUNC_13 (int ,TYPE_7__*,int ) ;

int FUNC_14(struct rxrpc_call *VAR_4)
{
 struct rxrpc_connection *VAR_5 = ((void*)0);
 struct rxrpc_abort_buffer VAR_6;
 struct msghdr VAR_7;
 struct kvec VAR_8[1];
 rxrpc_serial_t VAR_9;
 int VAR_10;







 if (FUNC_6(VAR_4) &&
     FUNC_11(VAR_1, &VAR_4->flags))
  return 0;

 FUNC_9(&VAR_4->lock);
 if (VAR_4->conn)
  VAR_5 = FUNC_5(VAR_4->conn);
 FUNC_10(&VAR_4->lock);
 if (!VAR_5)
  return -VAR_0;

 VAR_7.msg_name = &VAR_4->peer->srx.transport;
 VAR_7.msg_namelen = VAR_4->peer->srx.transport_len;
 VAR_7.msg_control = ((void*)0);
 VAR_7.msg_controllen = 0;
 VAR_7.msg_flags = 0;

 VAR_6.whdr.epoch = FUNC_1(VAR_5->proto.epoch);
 VAR_6.whdr.cid = FUNC_1(VAR_4->cid);
 VAR_6.whdr.callNumber = FUNC_1(VAR_4->call_id);
 VAR_6.whdr.seq = 0;
 VAR_6.whdr.type = VAR_2;
 VAR_6.whdr.flags = VAR_5->out_clientflag;
 VAR_6.whdr.userStatus = 0;
 VAR_6.whdr.securityIndex = VAR_4->security_ix;
 VAR_6.whdr._rsvd = 0;
 VAR_6.whdr.serviceId = FUNC_2(VAR_4->service_id);
 VAR_6.abort_code = FUNC_1(VAR_4->abort_code);

 VAR_8[0].iov_base = &VAR_6;
 VAR_8[0].iov_len = sizeof(VAR_6);

 VAR_9 = FUNC_0(&VAR_5->serial);
 VAR_6.whdr.serial = FUNC_1(VAR_9);

 VAR_10 = FUNC_3(VAR_5->params.local->socket,
        &VAR_7, VAR_8, 1, sizeof(VAR_6));
 VAR_5->params.peer->last_tx_at = FUNC_4();
 if (VAR_10 < 0)
  FUNC_12(VAR_4->debug_id, VAR_9, VAR_10,
        VAR_3);
 else
  FUNC_13(VAR_4->debug_id, &VAR_6.whdr,
          VAR_3);
 FUNC_8(VAR_4, VAR_10);

 FUNC_7(VAR_5);
 return VAR_10;
}
