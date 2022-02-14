
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct tcp_sock {scalar_t__ rcv_nxt; } ;
struct sock {int sk_state; struct dst_entry* sk_rx_dst; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ skb_iif; } ;
struct TYPE_11__ {scalar_t__ rxtclass; scalar_t__ rxflow; scalar_t__ rxohlim; scalar_t__ rxhlim; scalar_t__ rxoinfo; scalar_t__ rxinfo; } ;
struct TYPE_12__ {TYPE_2__ bits; scalar_t__ all; } ;
struct ipv6_pinfo {int pktoptions; int flow_label; scalar_t__ repflow; int rcv_flowinfo; TYPE_3__ rxopt; int mcast_hops; int mcast_oif; int rx_dst_cookie; } ;
struct dst_entry {TYPE_1__* ops; } ;
struct TYPE_13__ {int h6; } ;
struct TYPE_16__ {scalar_t__ end_seq; TYPE_4__ header; } ;
struct TYPE_15__ {scalar_t__ rx_dst_ifindex; } ;
struct TYPE_14__ {int hop_limit; } ;
struct TYPE_10__ {int * (* check ) (struct dst_entry*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_9__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct dst_entry*) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_8__* FUNC_5 (struct sock*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 TYPE_5__* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sock*,struct sk_buff*,int *) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sock*,int ) ;
 int FUNC_12 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_13 (struct sk_buff*,int ) ;
 int FUNC_14 (struct sk_buff*,struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*,struct sk_buff*) ;
 int * FUNC_17 (struct dst_entry*,int ) ;
 scalar_t__ FUNC_18 (struct sk_buff*) ;
 scalar_t__ FUNC_19 (struct sock*,struct sock*,struct sk_buff*) ;
 struct ipv6_pinfo* FUNC_20 (struct sock*) ;
 int FUNC_21 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_22 (struct sock*,struct sk_buff*) ;
 struct tcp_sock* FUNC_23 (struct sock*) ;
 int FUNC_24 (struct sock*,struct sk_buff*) ;
 struct sock* FUNC_25 (struct sock*,struct sk_buff*) ;
 int FUNC_26 (struct sk_buff*) ;
 int FUNC_27 (struct sk_buff*) ;
 int FUNC_28 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_29 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_30(struct sock *VAR_8, struct sk_buff *VAR_9)
{
 struct ipv6_pinfo *VAR_10 = FUNC_20(VAR_8);
 struct sk_buff *VAR_11 = ((void*)0);
 struct tcp_sock *VAR_12;
 if (VAR_9->protocol == FUNC_4(VAR_0))
  return FUNC_24(VAR_8, VAR_9);
 if (VAR_10->rxopt.all)
  VAR_11 = FUNC_13(VAR_9, FUNC_11(VAR_8, VAR_1));

 if (VAR_8->sk_state == VAR_4) {
  struct dst_entry *VAR_13 = VAR_8->sk_rx_dst;

  FUNC_16(VAR_8, VAR_9);
  FUNC_12(VAR_8, VAR_9);
  if (VAR_13) {
   if (FUNC_5(VAR_8)->rx_dst_ifindex != VAR_9->skb_iif ||
       VAR_13->ops->check(VAR_13, VAR_10->rx_dst_cookie) == ((void*)0)) {
    FUNC_3(VAR_13);
    VAR_8->sk_rx_dst = ((void*)0);
   }
  }

  FUNC_21(VAR_8, VAR_9);
  if (VAR_11)
   goto ipv6_pktoptions;
  return 0;
 }

 if (FUNC_18(VAR_9))
  goto csum_err;

 if (VAR_8->sk_state == VAR_5) {
  struct sock *VAR_14 = FUNC_25(VAR_8, VAR_9);

  if (!VAR_14)
   goto discard;

  if (VAR_14 != VAR_8) {
   if (FUNC_19(VAR_8, VAR_14, VAR_9))
    goto reset;
   if (VAR_11)
    FUNC_2(VAR_11);
   return 0;
  }
 } else
  FUNC_16(VAR_8, VAR_9);

 if (FUNC_22(VAR_8, VAR_9))
  goto reset;
 if (VAR_11)
  goto ipv6_pktoptions;
 return 0;

reset:
 FUNC_28(VAR_8, VAR_9);
discard:
 if (VAR_11)
  FUNC_2(VAR_11);
 FUNC_10(VAR_9);
 return 0;
csum_err:
 FUNC_0(FUNC_15(VAR_8), VAR_6);
 FUNC_0(FUNC_15(VAR_8), VAR_7);
 goto discard;


ipv6_pktoptions:







 VAR_12 = FUNC_23(VAR_8);
 if (FUNC_1(VAR_11)->end_seq == VAR_12->rcv_nxt &&
     !((1 << VAR_8->sk_state) & (VAR_2 | VAR_3))) {
  if (VAR_10->rxopt.bits.rxinfo || VAR_10->rxopt.bits.rxoinfo)
   VAR_10->mcast_oif = FUNC_26(VAR_11);
  if (VAR_10->rxopt.bits.rxhlim || VAR_10->rxopt.bits.rxohlim)
   VAR_10->mcast_hops = FUNC_8(VAR_11)->hop_limit;
  if (VAR_10->rxopt.bits.rxflow || VAR_10->rxopt.bits.rxtclass)
   VAR_10->rcv_flowinfo = FUNC_6(FUNC_8(VAR_11));
  if (VAR_10->repflow)
   VAR_10->flow_label = FUNC_7(FUNC_8(VAR_11));
  if (FUNC_9(VAR_8, VAR_11, &FUNC_1(VAR_11)->header.h6)) {
   FUNC_14(VAR_11, VAR_8);
   FUNC_27(VAR_11);
   VAR_11 = FUNC_29(&VAR_10->pktoptions, VAR_11);
  } else {
   FUNC_2(VAR_11);
   VAR_11 = FUNC_29(&VAR_10->pktoptions, ((void*)0));
  }
 }

 FUNC_10(VAR_11);
 return 0;
}
