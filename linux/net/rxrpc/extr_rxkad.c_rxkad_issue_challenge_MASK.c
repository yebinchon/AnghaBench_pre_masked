
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int whdr ;
typedef int u32 ;
struct rxrpc_wire_header {void* serial; int serviceId; scalar_t__ _rsvd; int securityIndex; scalar_t__ userStatus; int flags; int type; scalar_t__ seq; scalar_t__ callNumber; void* cid; void* epoch; scalar_t__ __padding; void* min_level; void* nonce; void* version; } ;
struct TYPE_10__ {TYPE_4__* peer; TYPE_3__* local; int key; } ;
struct TYPE_7__ {int epoch; int cid; } ;
struct rxrpc_connection {int security_nonce; int debug_id; TYPE_5__ params; int serial; int service_id; int security_ix; int out_clientflag; TYPE_2__ proto; } ;
struct rxkad_challenge {void* serial; int serviceId; scalar_t__ _rsvd; int securityIndex; scalar_t__ userStatus; int flags; int type; scalar_t__ seq; scalar_t__ callNumber; void* cid; void* epoch; scalar_t__ __padding; void* min_level; void* nonce; void* version; } ;
struct msghdr {scalar_t__ msg_flags; scalar_t__ msg_controllen; int * msg_control; int msg_namelen; int * msg_name; } ;
struct kvec {int iov_len; struct rxrpc_wire_header* iov_base; } ;
typedef int challenge ;
struct TYPE_6__ {int transport_len; int transport; } ;
struct TYPE_9__ {int last_tx_at; TYPE_1__ srx; } ;
struct TYPE_8__ {int socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*,int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct msghdr*,struct kvec*,int,size_t) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int VAR_2 ;
 int FUNC_11 (int ,int,int,int ) ;
 int FUNC_12 (int ,struct rxrpc_wire_header*,int ) ;

__attribute__((used)) static int FUNC_13(struct rxrpc_connection *VAR_3)
{
 struct rxkad_challenge VAR_4;
 struct rxrpc_wire_header VAR_5;
 struct msghdr VAR_6;
 struct kvec VAR_7[2];
 size_t VAR_8;
 u32 VAR_9;
 int VAR_10;

 FUNC_0("{%d,%x}", VAR_3->debug_id, FUNC_8(VAR_3->params.key));

 VAR_10 = FUNC_9(VAR_3->params.key);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_4(&VAR_3->security_nonce, sizeof(VAR_3->security_nonce));

 VAR_4.version = FUNC_5(2);
 VAR_4.nonce = FUNC_5(VAR_3->security_nonce);
 VAR_4.min_level = FUNC_5(0);
 VAR_4.__padding = 0;

 VAR_6.msg_name = &VAR_3->params.peer->srx.transport;
 VAR_6.msg_namelen = VAR_3->params.peer->srx.transport_len;
 VAR_6.msg_control = ((void*)0);
 VAR_6.msg_controllen = 0;
 VAR_6.msg_flags = 0;

 VAR_5.epoch = FUNC_5(VAR_3->proto.epoch);
 VAR_5.cid = FUNC_5(VAR_3->proto.cid);
 VAR_5.callNumber = 0;
 VAR_5.seq = 0;
 VAR_5.type = VAR_1;
 VAR_5.flags = VAR_3->out_clientflag;
 VAR_5.userStatus = 0;
 VAR_5.securityIndex = VAR_3->security_ix;
 VAR_5._rsvd = 0;
 VAR_5.serviceId = FUNC_6(VAR_3->service_id);

 VAR_7[0].iov_base = &VAR_5;
 VAR_7[0].iov_len = sizeof(VAR_5);
 VAR_7[1].iov_base = &VAR_4;
 VAR_7[1].iov_len = sizeof(VAR_4);

 VAR_8 = VAR_7[0].iov_len + VAR_7[1].iov_len;

 VAR_9 = FUNC_3(&VAR_3->serial);
 VAR_5.serial = FUNC_5(VAR_9);
 FUNC_2("Tx CHALLENGE %%%u", VAR_9);

 VAR_10 = FUNC_7(VAR_3->params.local->socket, &VAR_6, VAR_7, 2, VAR_8);
 if (VAR_10 < 0) {
  FUNC_11(VAR_3->debug_id, VAR_9, VAR_10,
        VAR_2);
  return -VAR_0;
 }

 VAR_3->params.peer->last_tx_at = FUNC_10();
 FUNC_12(VAR_3->debug_id, &VAR_5,
         VAR_2);
 FUNC_1(" = 0");
 return 0;
}
