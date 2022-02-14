
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udphdr {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ tstamp; void* priority; int mark; } ;
struct TYPE_5__ {scalar_t__ srx_service; } ;
struct rxrpc_sock {scalar_t__ second_service; TYPE_2__ srx; } ;
struct TYPE_6__ {int type; scalar_t__ callNumber; int seq; scalar_t__ securityIndex; scalar_t__ serviceId; unsigned int cid; scalar_t__ serial; int flags; } ;
struct rxrpc_skb_priv {TYPE_3__ hdr; } ;
struct rxrpc_peer {int dummy; } ;
struct rxrpc_local {scalar_t__ service; } ;
struct TYPE_4__ {int service_id; } ;
struct rxrpc_connection {scalar_t__ security_ix; scalar_t__ service_id; struct rxrpc_channel* channels; scalar_t__ hi_serial; int debug_id; TYPE_1__ params; int flags; } ;
struct rxrpc_channel {scalar_t__ last_call; int const last_type; scalar_t__ call_id; scalar_t__ call; int call_debug_id; } ;
struct rxrpc_call {scalar_t__ service_id; int user_mutex; int usage; int flags; scalar_t__ rx_serial; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_1 (char*,struct rxrpc_connection*,int ) ;
 int FUNC_2 (char*,struct sock*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__*,int,scalar_t__) ;
 int FUNC_7 (struct sk_buff*) ;
 void* FUNC_8 () ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (scalar_t__) ;
 struct rxrpc_local* FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (struct rxrpc_connection*) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_14 (struct rxrpc_skb_priv*,struct sk_buff*) ;
 struct rxrpc_connection* FUNC_15 (struct rxrpc_local*,struct sk_buff*,struct rxrpc_peer**) ;
 int FUNC_16 (struct sk_buff*,int ) ;
 int FUNC_17 (struct rxrpc_call*,struct sk_buff*) ;
 int FUNC_18 (struct rxrpc_sock*,struct rxrpc_connection*,struct rxrpc_call*) ;
 struct rxrpc_call* FUNC_19 (struct rxrpc_local*,struct rxrpc_sock*,struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*,int ) ;
 int FUNC_21 (struct rxrpc_connection*,struct sk_buff*) ;
 int FUNC_22 (struct rxrpc_local*,struct sk_buff*) ;
 int FUNC_23 (struct rxrpc_local*,struct sk_buff*) ;
 int FUNC_24 (struct rxrpc_call*,struct sk_buff*) ;
 struct rxrpc_skb_priv* FUNC_25 (struct sk_buff*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_26 (struct rxrpc_skb_priv*) ;
 scalar_t__ FUNC_27 (struct rxrpc_skb_priv*) ;
 int FUNC_28 (struct sk_buff*) ;
 int FUNC_29 (int ,int *) ;
 int FUNC_30 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_31 (struct sk_buff*,int ) ;
 int FUNC_32 (int ,int *) ;
 int FUNC_33 (int ,char*,unsigned int,scalar_t__,int,void*,int ) ;
 int FUNC_34 (int ,int,scalar_t__,int ,int ) ;
 int FUNC_35 (int ,void*) ;
 int FUNC_36 (struct rxrpc_skb_priv*) ;
 int FUNC_37 (struct rxrpc_skb_priv*) ;
 scalar_t__ FUNC_38 (int) ;

int FUNC_39(struct sock *VAR_16, struct sk_buff *VAR_17)
{
 struct rxrpc_local *VAR_18 = FUNC_11(VAR_16);
 struct rxrpc_connection *VAR_19;
 struct rxrpc_channel *VAR_20;
 struct rxrpc_call *VAR_21 = ((void*)0);
 struct rxrpc_skb_priv *VAR_22;
 struct rxrpc_peer *VAR_23 = ((void*)0);
 struct rxrpc_sock *VAR_24 = ((void*)0);
 unsigned int VAR_25;

 FUNC_2("%p", VAR_16);

 if (FUNC_38(!VAR_18)) {
  FUNC_7(VAR_17);
  return 0;
 }
 if (VAR_17->tstamp == 0)
  VAR_17->tstamp = FUNC_8();

 FUNC_20(VAR_17, VAR_13);

 FUNC_30(VAR_17, sizeof(struct udphdr));




 VAR_22 = FUNC_25(VAR_17);


 if (FUNC_14(VAR_22, VAR_17) < 0)
  goto bad_message;

 if (FUNC_0(VAR_0)) {
  static int VAR_26;
  if ((VAR_26++ & 7) == 7) {
   FUNC_36(VAR_22);
   FUNC_16(VAR_17, VAR_12);
   return 0;
  }
 }

 if (VAR_17->tstamp == 0)
  VAR_17->tstamp = FUNC_8();
 FUNC_37(VAR_22);

 switch (VAR_22->hdr.type) {
 case 128:
  if (FUNC_26(VAR_22))
   goto discard;
  FUNC_22(VAR_18, VAR_17);
  goto out;

 case 133:
  if (FUNC_27(VAR_22))
   goto discard;

 case 135:
 case 134:
  if (VAR_22->hdr.callNumber == 0)
   goto bad_message;

 case 136:
  break;

 case 131:
  if (VAR_22->hdr.callNumber == 0 ||
      VAR_22->hdr.seq == 0)
   goto bad_message;
  if (!FUNC_28(VAR_17))
   goto bad_message;




  if (VAR_22->hdr.securityIndex != 0) {
   struct sk_buff *VAR_27 = FUNC_31(VAR_17, VAR_3);
   if (!VAR_27) {
    FUNC_13(VAR_17, VAR_15);
    goto out;
   }

   if (VAR_27 != VAR_17) {
    FUNC_13(VAR_17, VAR_13);
    VAR_17 = VAR_27;
    FUNC_20(VAR_17, VAR_14);
    VAR_22 = FUNC_25(VAR_17);
   }
  }
  break;

 case 132:
  if (FUNC_27(VAR_22))
   goto discard;
  break;
 case 129:
  if (FUNC_26(VAR_22))
   goto discard;
  break;


 case 130:
 case 138:
 case 137:
  goto discard;

 default:
  FUNC_4("Rx Bad Packet Type %u", VAR_22->hdr.type);
  goto bad_message;
 }

 if (VAR_22->hdr.serviceId == 0)
  goto bad_message;

 if (FUNC_27(VAR_22)) {




  VAR_24 = FUNC_10(VAR_18->service);
  if (!VAR_24 || (VAR_22->hdr.serviceId != VAR_24->srx.srx_service &&
       VAR_22->hdr.serviceId != VAR_24->second_service)) {
   if (VAR_22->hdr.type == 131 &&
       VAR_22->hdr.seq == 1)
    goto unsupported_service;
   goto discard;
  }
 }

 VAR_19 = FUNC_15(VAR_18, VAR_17, &VAR_23);
 if (VAR_19) {
  if (VAR_22->hdr.securityIndex != VAR_19->security_ix)
   goto wrong_security;

  if (VAR_22->hdr.serviceId != VAR_19->service_id) {
   int VAR_28;

   if (!FUNC_32(VAR_7, &VAR_19->flags))
    goto reupgrade;
   VAR_28 = FUNC_6(&VAR_19->service_id, VAR_19->params.service_id,
      VAR_22->hdr.serviceId);

   if (VAR_28 != VAR_19->params.service_id &&
       VAR_28 != VAR_22->hdr.serviceId)
    goto reupgrade;
  }

  if (VAR_22->hdr.callNumber == 0) {

   FUNC_1("CONN %p {%d}", VAR_19, VAR_19->debug_id);
   FUNC_21(VAR_19, VAR_17);
   goto out;
  }

  if ((int)VAR_22->hdr.serial - (int)VAR_19->hi_serial > 0)
   VAR_19->hi_serial = VAR_22->hdr.serial;


  VAR_25 = VAR_22->hdr.cid & VAR_6;
  VAR_20 = &VAR_19->channels[VAR_25];


  if (VAR_22->hdr.callNumber < VAR_20->last_call)
   goto discard;

  if (VAR_22->hdr.callNumber == VAR_20->last_call) {
   if (VAR_20->call ||
       VAR_22->hdr.type == 136)
    goto discard;




   if (FUNC_12(VAR_19) &&
       VAR_20->last_type == 135)
    goto discard;




   if (VAR_22->hdr.type == 131)
    FUNC_34(VAR_20->call_debug_id,
          VAR_22->hdr.seq,
          VAR_22->hdr.serial,
          VAR_22->hdr.flags, 0);
   FUNC_21(VAR_19, VAR_17);
   goto out;
  }

  VAR_21 = FUNC_10(VAR_20->call);

  if (VAR_22->hdr.callNumber > VAR_20->call_id) {
   if (FUNC_26(VAR_22))
    goto reject_packet;
   if (VAR_21)
    FUNC_18(VAR_24, VAR_19, VAR_21);
   VAR_21 = ((void*)0);
  }

  if (VAR_21) {
   if (VAR_22->hdr.serviceId != VAR_21->service_id)
    VAR_21->service_id = VAR_22->hdr.serviceId;
   if ((int)VAR_22->hdr.serial - (int)VAR_21->rx_serial > 0)
    VAR_21->rx_serial = VAR_22->hdr.serial;
   if (!FUNC_32(VAR_5, &VAR_21->flags))
    FUNC_29(VAR_5, &VAR_21->flags);
  }
 }

 if (!VAR_21 || FUNC_5(&VAR_21->usage) == 0) {
  if (FUNC_26(VAR_22) ||
      VAR_22->hdr.type != 131)
   goto bad_message;
  if (VAR_22->hdr.seq != 1)
   goto discard;
  VAR_21 = FUNC_19(VAR_18, VAR_24, VAR_17);
  if (!VAR_21)
   goto reject_packet;
  FUNC_24(VAR_21, VAR_17);
  FUNC_9(&VAR_21->user_mutex);
 }




 FUNC_17(VAR_21, VAR_17);
 goto out;

discard:
 FUNC_16(VAR_17, VAR_11);
out:
 FUNC_35(0, 0);
 return 0;

wrong_security:
 FUNC_33(0, "SEC", VAR_22->hdr.cid, VAR_22->hdr.callNumber, VAR_22->hdr.seq,
     VAR_4, VAR_1);
 VAR_17->priority = VAR_4;
 goto post_abort;

unsupported_service:
 FUNC_33(0, "INV", VAR_22->hdr.cid, VAR_22->hdr.callNumber, VAR_22->hdr.seq,
     VAR_9, VAR_2);
 VAR_17->priority = VAR_9;
 goto post_abort;

reupgrade:
 FUNC_33(0, "UPG", VAR_22->hdr.cid, VAR_22->hdr.callNumber, VAR_22->hdr.seq,
     VAR_10, VAR_1);
 goto protocol_error;

bad_message:
 FUNC_33(0, "BAD", VAR_22->hdr.cid, VAR_22->hdr.callNumber, VAR_22->hdr.seq,
     VAR_10, VAR_1);
protocol_error:
 VAR_17->priority = VAR_10;
post_abort:
 VAR_17->mark = VAR_8;
reject_packet:
 FUNC_35(VAR_17->mark, VAR_17->priority);
 FUNC_23(VAR_18, VAR_17);
 FUNC_3(" [badmsg]");
 return 0;
}
