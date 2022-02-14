
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int whdr ;
typedef int u32 ;
struct rxrpc_wire_header {void* serial; int serviceId; int securityIndex; int flags; int type; void* cid; void* epoch; } ;
struct rxrpc_host_header {int serviceId; int securityIndex; int cid; int epoch; } ;
struct TYPE_8__ {TYPE_3__* peer; TYPE_2__* local; } ;
struct rxrpc_connection {TYPE_4__ params; int debug_id; int serial; int out_clientflag; } ;
struct rxkad_response {void* serial; int serviceId; int securityIndex; int flags; int type; void* cid; void* epoch; } ;
struct rxkad_key {int ticket_len; scalar_t__ ticket; } ;
struct msghdr {scalar_t__ msg_flags; scalar_t__ msg_controllen; int * msg_control; int msg_namelen; int * msg_name; } ;
struct kvec {int iov_len; struct rxrpc_wire_header* iov_base; } ;
struct TYPE_5__ {int transport_len; int transport; } ;
struct TYPE_7__ {int last_tx_at; TYPE_1__ srx; } ;
struct TYPE_6__ {int socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct msghdr*,struct kvec*,int,size_t) ;
 int FUNC_7 () ;
 int FUNC_8 (struct rxrpc_wire_header*,int ,int) ;
 int VAR_2 ;
 int FUNC_9 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_10(struct rxrpc_connection *VAR_3,
          struct rxrpc_host_header *VAR_4,
          struct rxkad_response *VAR_5,
          const struct rxkad_key *VAR_6)
{
 struct rxrpc_wire_header VAR_7;
 struct msghdr VAR_8;
 struct kvec VAR_9[3];
 size_t VAR_10;
 u32 VAR_11;
 int VAR_12;

 FUNC_0("");

 VAR_8.msg_name = &VAR_3->params.peer->srx.transport;
 VAR_8.msg_namelen = VAR_3->params.peer->srx.transport_len;
 VAR_8.msg_control = ((void*)0);
 VAR_8.msg_controllen = 0;
 VAR_8.msg_flags = 0;

 FUNC_8(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.epoch = FUNC_4(VAR_4->epoch);
 VAR_7.cid = FUNC_4(VAR_4->cid);
 VAR_7.type = VAR_1;
 VAR_7.flags = VAR_3->out_clientflag;
 VAR_7.securityIndex = VAR_4->securityIndex;
 VAR_7.serviceId = FUNC_5(VAR_4->serviceId);

 VAR_9[0].iov_base = &VAR_7;
 VAR_9[0].iov_len = sizeof(VAR_7);
 VAR_9[1].iov_base = VAR_5;
 VAR_9[1].iov_len = sizeof(*VAR_5);
 VAR_9[2].iov_base = (void *)VAR_6->ticket;
 VAR_9[2].iov_len = VAR_6->ticket_len;

 VAR_10 = VAR_9[0].iov_len + VAR_9[1].iov_len + VAR_9[2].iov_len;

 VAR_11 = FUNC_3(&VAR_3->serial);
 VAR_7.serial = FUNC_4(VAR_11);
 FUNC_2("Tx RESPONSE %%%u", VAR_11);

 VAR_12 = FUNC_6(VAR_3->params.local->socket, &VAR_8, VAR_9, 3, VAR_10);
 if (VAR_12 < 0) {
  FUNC_9(VAR_3->debug_id, VAR_11, VAR_12,
        VAR_2);
  return -VAR_0;
 }

 VAR_3->params.peer->last_tx_at = FUNC_7();
 FUNC_1(" = 0");
 return 0;
}
