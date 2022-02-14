
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ from; scalar_t__ to; } ;
struct rxrpc_sock {TYPE_2__ service_upgrade; } ;
struct TYPE_5__ {int cid; scalar_t__ serviceId; scalar_t__ userStatus; int securityIndex; int epoch; } ;
struct rxrpc_skb_priv {TYPE_1__ hdr; } ;
struct TYPE_8__ {int cid; int epoch; } ;
struct TYPE_7__ {scalar_t__ service_id; int peer; } ;
struct rxrpc_connection {scalar_t__ service_id; TYPE_4__ proto; int debug_id; TYPE_3__ params; int state; int security_ix; scalar_t__ out_clientflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,struct rxrpc_connection*) ;
 struct rxrpc_skb_priv* FUNC_3 (struct sk_buff*) ;

void FUNC_4(struct rxrpc_sock *VAR_4,
       struct rxrpc_connection *VAR_5,
       struct sk_buff *VAR_6)
{
 struct rxrpc_skb_priv *VAR_7 = FUNC_3(VAR_6);

 FUNC_0("");

 VAR_5->proto.epoch = VAR_7->hdr.epoch;
 VAR_5->proto.cid = VAR_7->hdr.cid & VAR_0;
 VAR_5->params.service_id = VAR_7->hdr.serviceId;
 VAR_5->service_id = VAR_7->hdr.serviceId;
 VAR_5->security_ix = VAR_7->hdr.securityIndex;
 VAR_5->out_clientflag = 0;
 if (VAR_5->security_ix)
  VAR_5->state = VAR_2;
 else
  VAR_5->state = VAR_1;





 if (VAR_7->hdr.userStatus == VAR_3 &&
     VAR_5->service_id == VAR_4->service_upgrade.from)
  VAR_5->service_id = VAR_4->service_upgrade.to;


 FUNC_2(VAR_5->params.peer, VAR_5);

 FUNC_1("CONNECTION new %d {%x}", VAR_5->debug_id, VAR_5->proto.cid);
}
