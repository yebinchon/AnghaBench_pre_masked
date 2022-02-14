
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wtmp ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct rxrpc_wire_header {int dummy; } ;
struct TYPE_6__ {int type; int cid; int serial; } ;
struct rxrpc_skb_priv {TYPE_3__ hdr; } ;
struct rxrpc_connection {scalar_t__ state; int error; int channel_lock; int state_lock; TYPE_2__* channels; TYPE_1__* security; int abort_code; int debug_id; } ;
typedef int __be32 ;
struct TYPE_5__ {int call; } ;
struct TYPE_4__ {int (* respond_to_challenge ) (struct rxrpc_connection*,struct sk_buff*,int *) ;int (* verify_response ) (struct rxrpc_connection*,struct sk_buff*,int *) ;int (* init_connection_security ) (struct rxrpc_connection*) ;int (* prime_packet_security ) (struct rxrpc_connection*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;






 int FUNC_0 (char*,int ,int,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct rxrpc_connection*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct rxrpc_connection*,struct sk_buff*,int) ;
 struct rxrpc_skb_priv* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int,int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct rxrpc_connection*,struct sk_buff*,int *) ;
 int FUNC_14 (struct rxrpc_connection*,struct sk_buff*,int *) ;
 int FUNC_15 (struct rxrpc_connection*) ;
 int FUNC_16 (struct rxrpc_connection*) ;
 int FUNC_17 (int *,int ,int ) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static int FUNC_19(struct rxrpc_connection *VAR_8,
          struct sk_buff *VAR_9,
          u32 *VAR_10)
{
 struct rxrpc_skb_priv *VAR_11 = FUNC_9(VAR_9);
 __be32 VAR_12;
 u32 VAR_13;
 int VAR_14, VAR_15;

 if (VAR_8->state >= VAR_4) {
  FUNC_1(" = -ECONNABORTED [%u]", VAR_8->state);
  return -VAR_0;
 }

 FUNC_0("{%d},{%u,%%%u},", VAR_8->debug_id, VAR_11->hdr.type, VAR_11->hdr.serial);

 switch (VAR_11->hdr.type) {
 case 129:
 case 132:
  FUNC_8(VAR_8, VAR_9,
        VAR_11->hdr.cid & VAR_3);
  return 0;

 case 131:

  return 0;

 case 133:
  if (FUNC_10(VAR_9, sizeof(struct rxrpc_wire_header),
      &VAR_12, sizeof(VAR_12)) < 0) {
   FUNC_17(((void*)0), VAR_11->hdr.serial,
           FUNC_18("bad_abort"));
   return -VAR_1;
  }
  VAR_13 = FUNC_4(VAR_12);
  FUNC_2("Rx ABORT %%%u { ac=%d }", VAR_11->hdr.serial, VAR_13);

  VAR_8->error = -VAR_0;
  VAR_8->abort_code = VAR_13;
  VAR_8->state = VAR_4;
  FUNC_6(VAR_8, VAR_2, VAR_11->hdr.serial);
  return -VAR_0;

 case 130:
  return VAR_8->security->respond_to_challenge(VAR_8, VAR_9,
           VAR_10);

 case 128:
  VAR_15 = VAR_8->security->verify_response(VAR_8, VAR_9, VAR_10);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_15 = VAR_8->security->init_connection_security(VAR_8);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_15 = VAR_8->security->prime_packet_security(VAR_8);
  if (VAR_15 < 0)
   return VAR_15;

  FUNC_11(&VAR_8->channel_lock);
  FUNC_11(&VAR_8->state_lock);

  if (VAR_8->state == VAR_6) {
   VAR_8->state = VAR_5;
   FUNC_12(&VAR_8->state_lock);
   for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
    FUNC_7(
     FUNC_5(
      VAR_8->channels[VAR_14].call,
      FUNC_3(&VAR_8->channel_lock)));
  } else {
   FUNC_12(&VAR_8->state_lock);
  }

  FUNC_12(&VAR_8->channel_lock);
  return 0;

 default:
  FUNC_17(((void*)0), VAR_11->hdr.serial,
          FUNC_18("bad_conn_pkt"));
  return -VAR_1;
 }
}
