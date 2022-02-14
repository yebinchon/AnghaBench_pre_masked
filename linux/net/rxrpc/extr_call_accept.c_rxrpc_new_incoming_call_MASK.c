
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int mark; int priority; } ;
struct TYPE_5__ {scalar_t__ sk_state; } ;
struct rxrpc_sock {int incoming_lock; int discard_new_call; TYPE_2__ sk; int (* notify_new_call ) (TYPE_2__*,struct rxrpc_call*,int ) ;} ;
struct TYPE_4__ {int seq; int serial; int callNumber; int cid; } ;
struct rxrpc_skb_priv {TYPE_1__ hdr; } ;
struct rxrpc_peer {int dummy; } ;
struct rxrpc_local {int dummy; } ;
struct rxrpc_connection {int state; int state_lock; int error; int abort_code; int events; } ;
struct rxrpc_call {scalar_t__ state; int debug_id; int state_lock; struct rxrpc_connection* conn; int user_call_ID; int user_mutex; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;

 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,struct rxrpc_call*,int ,int ,int ) ;
 struct rxrpc_call* FUNC_5 (struct rxrpc_sock*,struct rxrpc_local*,struct rxrpc_peer*,struct rxrpc_connection*,struct sk_buff*) ;
 int VAR_12 ;
 struct rxrpc_connection* FUNC_6 (struct rxrpc_local*,struct sk_buff*,struct rxrpc_peer**) ;
 int FUNC_7 (struct rxrpc_sock*,struct rxrpc_call*,struct sk_buff*) ;
 int FUNC_8 (struct rxrpc_call*) ;
 int FUNC_9 (struct rxrpc_call*,int ) ;
 int FUNC_10 (struct rxrpc_connection*) ;
 int VAR_13 ;
 int FUNC_11 (struct rxrpc_call*,int ,int ,int ) ;
 struct rxrpc_skb_priv* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_2__*,struct rxrpc_call*,int ) ;
 int FUNC_18 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_19 (struct rxrpc_call*,int ,int ,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

struct rxrpc_call *FUNC_22(struct rxrpc_local *VAR_14,
        struct rxrpc_sock *VAR_15,
        struct sk_buff *VAR_16)
{
 struct rxrpc_skb_priv *VAR_17 = FUNC_12(VAR_16);
 struct rxrpc_connection *VAR_18;
 struct rxrpc_peer *VAR_19 = ((void*)0);
 struct rxrpc_call *VAR_20;

 FUNC_1("");

 FUNC_15(&VAR_15->incoming_lock);
 if (VAR_15->sk.sk_state == VAR_8 ||
     VAR_15->sk.sk_state == VAR_5) {
  FUNC_18(0, "CLS", VAR_17->hdr.cid, VAR_17->hdr.callNumber,
      VAR_17->hdr.seq, VAR_11, VAR_0);
  VAR_16->mark = VAR_9;
  VAR_16->priority = VAR_11;
  FUNC_2(" = NULL [close]");
  VAR_20 = ((void*)0);
  goto out;
 }






 VAR_18 = FUNC_6(VAR_14, VAR_16, &VAR_19);

 VAR_20 = FUNC_5(VAR_15, VAR_14, VAR_19, VAR_18, VAR_16);
 if (!VAR_20) {
  VAR_16->mark = VAR_10;
  FUNC_2(" = NULL [busy]");
  VAR_20 = ((void*)0);
  goto out;
 }

 FUNC_19(VAR_20, VAR_13,
       VAR_17->hdr.serial, VAR_17->hdr.seq);
 if (!FUNC_3(&VAR_20->user_mutex))
  FUNC_0();


 FUNC_7(VAR_15, VAR_20, VAR_16);
 VAR_18 = VAR_20->conn;

 if (VAR_15->notify_new_call)
  VAR_15->notify_new_call(&VAR_15->sk, VAR_20, VAR_20->user_call_ID);
 else
  FUNC_14(&VAR_15->sk);

 FUNC_15(&VAR_18->state_lock);
 switch (VAR_18->state) {
 case 128:
  VAR_18->state = VAR_7;
  FUNC_13(VAR_6, &VAR_20->conn->events);
  FUNC_10(VAR_20->conn);
  break;

 case 129:
  FUNC_20(&VAR_20->state_lock);
  if (VAR_20->state < VAR_1) {
   if (VAR_15->discard_new_call)
    VAR_20->state = VAR_4;
   else
    VAR_20->state = VAR_3;
  }
  FUNC_21(&VAR_20->state_lock);
  break;

 case 130:
  FUNC_11(VAR_20, VAR_2,
       VAR_18->abort_code, VAR_18->error);
  break;
 case 131:
  FUNC_4("CON", VAR_20, VAR_17->hdr.seq,
     VAR_18->abort_code, VAR_18->error);
  break;
 default:
  FUNC_0();
 }
 FUNC_16(&VAR_18->state_lock);

 if (VAR_20->state == VAR_3)
  FUNC_8(VAR_20);






 FUNC_9(VAR_20, VAR_12);

 FUNC_2(" = %p{%d}", VAR_20, VAR_20->debug_id);
out:
 FUNC_16(&VAR_15->incoming_lock);
 return VAR_20;
}
