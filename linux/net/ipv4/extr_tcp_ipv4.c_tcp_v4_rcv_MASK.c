
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int doff; int dest; int source; } ;
struct sock {scalar_t__ sk_state; struct sk_buff* sk_rx_skb_cache; } ;
struct sk_buff {scalar_t__ pkt_type; int * dev; scalar_t__ data; } ;
struct request_sock {struct sock* rsk_listener; } ;
struct net {int dummy; } ;
struct iphdr {scalar_t__ ttl; int daddr; int saddr; } ;
struct TYPE_2__ {scalar_t__ min_ttl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;




 int VAR_9 ;
 int FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net*,int ) ;
 struct sock* FUNC_2 (int *,struct sk_buff*,int ,int ,int ,int,int*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct tcphdr const*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 struct net* FUNC_7 (int *) ;
 int VAR_10 ;
 int FUNC_8 (struct sock*,struct request_sock*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct sock* FUNC_10 (struct net*,int *,struct sk_buff*,int ,int ,int ,int ,int ,int ,int) ;
 struct request_sock* FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sk_buff*) ;
 TYPE_1__* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 struct iphdr* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*,int) ;
 int FUNC_21 (struct request_sock*) ;
 int FUNC_22 (struct sock*,struct sk_buff*) ;
 int FUNC_23 (struct sock*) ;
 scalar_t__ FUNC_24 (struct sk_buff*,int ,int ) ;
 int FUNC_25 (struct sock*) ;
 int FUNC_26 (struct sock*) ;
 int FUNC_27 (struct sock*) ;
 scalar_t__ FUNC_28 (struct sock*,struct sk_buff*) ;
 struct sock* FUNC_29 (struct sock*,struct sk_buff*,struct request_sock*,int,int*) ;
 scalar_t__ FUNC_30 (struct sk_buff*) ;
 scalar_t__ FUNC_31 (struct sock*,struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_32 (struct sock*,struct sk_buff*) ;
 int VAR_11 ;
 int FUNC_33 (int ,struct sk_buff*) ;
 int FUNC_34 (struct sock*) ;
 int FUNC_35 (int ,struct sk_buff*,struct tcphdr const*) ;
 int FUNC_36 (struct sock*,struct sk_buff*) ;
 int FUNC_37 (struct sk_buff*,struct iphdr const*,struct tcphdr const*) ;
 int FUNC_38 (struct sock*,struct sk_buff*) ;
 int FUNC_39 (struct sk_buff*) ;
 int FUNC_40 (struct sock*,struct sk_buff*) ;
 int FUNC_41 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_42 (int) ;
 int FUNC_43 (struct sock*,int ,struct sk_buff*) ;

int FUNC_44(struct sk_buff *VAR_12)
{
 struct net *VAR_13 = FUNC_7(VAR_12->dev);
 struct sk_buff *VAR_14;
 int VAR_15 = FUNC_12(VAR_12);
 const struct iphdr *VAR_16;
 const struct tcphdr *VAR_17;
 bool VAR_18;
 struct sock *VAR_19;
 int VAR_20;

 if (VAR_12->pkt_type != VAR_2)
  goto discard_it;


 FUNC_1(VAR_13, VAR_6);

 if (!FUNC_20(VAR_12, sizeof(struct tcphdr)))
  goto discard_it;

 VAR_17 = (const struct tcphdr *)VAR_12->data;

 if (FUNC_42(VAR_17->doff < sizeof(struct tcphdr) / 4))
  goto bad_packet;
 if (!FUNC_20(VAR_12, VAR_17->doff * 4))
  goto discard_it;






 if (FUNC_24(VAR_12, VAR_0, VAR_10))
  goto csum_error;

 VAR_17 = (const struct tcphdr *)VAR_12->data;
 VAR_16 = FUNC_17(VAR_12);
lookup:
 VAR_19 = FUNC_2(&VAR_11, VAR_12, FUNC_4(VAR_17), VAR_17->source,
          VAR_17->dest, VAR_15, &VAR_18);
 if (!VAR_19)
  goto no_tcp_socket;

process:
 if (VAR_19->sk_state == VAR_8)
  goto do_time_wait;

 if (VAR_19->sk_state == VAR_7) {
  struct request_sock *VAR_21 = FUNC_11(VAR_19);
  bool VAR_22 = 0;
  struct sock *VAR_23;

  VAR_19 = VAR_21->rsk_listener;
  if (FUNC_42(FUNC_38(VAR_19, VAR_12))) {
   FUNC_22(VAR_19, VAR_12);
   FUNC_21(VAR_21);
   goto discard_it;
  }
  if (FUNC_30(VAR_12)) {
   FUNC_21(VAR_21);
   goto csum_error;
  }
  if (FUNC_42(VAR_19->sk_state != VAR_3)) {
   FUNC_8(VAR_19, VAR_21);
   goto lookup;
  }



  FUNC_25(VAR_19);
  VAR_18 = 1;
  VAR_23 = ((void*)0);
  if (!FUNC_32(VAR_19, VAR_12)) {
   VAR_17 = (const struct tcphdr *)VAR_12->data;
   VAR_16 = FUNC_17(VAR_12);
   FUNC_37(VAR_12, VAR_16, VAR_17);
   VAR_23 = FUNC_29(VAR_19, VAR_12, VAR_21, 0, &VAR_22);
  }
  if (!VAR_23) {
   FUNC_21(VAR_21);
   if (VAR_22) {





    FUNC_39(VAR_12);
    FUNC_27(VAR_19);
    goto lookup;
   }
   goto discard_and_relse;
  }
  if (VAR_23 == VAR_19) {
   FUNC_21(VAR_21);
   FUNC_39(VAR_12);
  } else if (FUNC_31(VAR_19, VAR_23, VAR_12)) {
   FUNC_40(VAR_23, VAR_12);
   goto discard_and_relse;
  } else {
   FUNC_27(VAR_19);
   return 0;
  }
 }
 if (FUNC_42(VAR_16->ttl < FUNC_13(VAR_19)->min_ttl)) {
  FUNC_0(VAR_13, VAR_1);
  goto discard_and_relse;
 }

 if (!FUNC_43(VAR_19, VAR_9, VAR_12))
  goto discard_and_relse;

 if (FUNC_38(VAR_19, VAR_12))
  goto discard_and_relse;

 FUNC_19(VAR_12);

 if (FUNC_32(VAR_19, VAR_12))
  goto discard_and_relse;
 VAR_17 = (const struct tcphdr *)VAR_12->data;
 VAR_16 = FUNC_17(VAR_12);
 FUNC_37(VAR_12, VAR_16, VAR_17);

 VAR_12->dev = ((void*)0);

 if (VAR_19->sk_state == VAR_3) {
  VAR_20 = FUNC_36(VAR_19, VAR_12);
  goto put_and_return;
 }

 FUNC_23(VAR_19);

 FUNC_5(VAR_19);
 FUNC_33(FUNC_34(VAR_19), VAR_12);
 VAR_20 = 0;
 if (!FUNC_26(VAR_19)) {
  VAR_14 = VAR_19->sk_rx_skb_cache;
  VAR_19->sk_rx_skb_cache = ((void*)0);
  VAR_20 = FUNC_36(VAR_19, VAR_12);
 } else {
  if (FUNC_28(VAR_19, VAR_12))
   goto discard_and_relse;
  VAR_14 = ((void*)0);
 }
 FUNC_6(VAR_19);
 if (VAR_14)
  FUNC_3(VAR_14);

put_and_return:
 if (VAR_18)
  FUNC_27(VAR_19);

 return VAR_20;

no_tcp_socket:
 if (!FUNC_43(((void*)0), VAR_9, VAR_12))
  goto discard_it;

 FUNC_37(VAR_12, VAR_16, VAR_17);

 if (FUNC_30(VAR_12)) {
csum_error:
  FUNC_1(VAR_13, VAR_4);
bad_packet:
  FUNC_1(VAR_13, VAR_5);
 } else {
  FUNC_40(((void*)0), VAR_12);
 }

discard_it:

 FUNC_18(VAR_12);
 return 0;

discard_and_relse:
 FUNC_22(VAR_19, VAR_12);
 if (VAR_18)
  FUNC_27(VAR_19);
 goto discard_it;

do_time_wait:
 if (!FUNC_43(((void*)0), VAR_9, VAR_12)) {
  FUNC_16(FUNC_14(VAR_19));
  goto discard_it;
 }

 FUNC_37(VAR_12, VAR_16, VAR_17);

 if (FUNC_30(VAR_12)) {
  FUNC_16(FUNC_14(VAR_19));
  goto csum_error;
 }
 switch (FUNC_35(FUNC_14(VAR_19), VAR_12, VAR_17)) {
 case 128: {
  struct sock *VAR_24 = FUNC_10(FUNC_7(VAR_12->dev),
       &VAR_11, VAR_12,
       FUNC_4(VAR_17),
       VAR_16->saddr, VAR_17->source,
       VAR_16->daddr, VAR_17->dest,
       FUNC_9(VAR_12),
       VAR_15);
  if (VAR_24) {
   FUNC_15(FUNC_14(VAR_19));
   VAR_19 = VAR_24;
   FUNC_39(VAR_12);
   VAR_18 = 0;
   goto process;
  }
 }


 case 131:
  FUNC_41(VAR_19, VAR_12);
  break;
 case 130:
  FUNC_40(VAR_19, VAR_12);
  FUNC_15(FUNC_14(VAR_19));
  goto discard_it;
 case 129:;
 }
 goto discard_it;
}
