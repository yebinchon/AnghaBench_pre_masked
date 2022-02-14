
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct sk_buff {scalar_t__ protocol; int len; } ;
struct TYPE_8__ {scalar_t__ rxtclass; scalar_t__ rxflow; scalar_t__ rxohlim; scalar_t__ rxhlim; scalar_t__ rxoinfo; scalar_t__ rxinfo; } ;
struct TYPE_9__ {TYPE_1__ bits; scalar_t__ all; } ;
struct ipv6_pinfo {int pktoptions; int flow_label; scalar_t__ repflow; int rcv_flowinfo; TYPE_2__ rxopt; int mcast_hops; int mcast_oif; } ;
struct inet6_skb_parm {int dummy; } ;
struct TYPE_10__ {int h6; } ;
struct TYPE_12__ {TYPE_3__ header; } ;
struct TYPE_11__ {int hop_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sock*,struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sock*,struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;
 struct ipv6_pinfo* FUNC_10 (struct sock*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 TYPE_4__* FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sock*,struct sk_buff*,int *) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (int ,int *,int) ;
 scalar_t__ FUNC_17 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_18 (struct sk_buff*,int ) ;
 int FUNC_19 (struct sk_buff*,struct sock*) ;
 struct sk_buff* FUNC_20 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_21(struct sock *VAR_5, struct sk_buff *VAR_6)
{
 struct ipv6_pinfo *VAR_7 = FUNC_10(VAR_5);
 struct sk_buff *VAR_8 = ((void*)0);
 if (VAR_6->protocol == FUNC_8(VAR_3))
  return FUNC_6(VAR_5, VAR_6);

 if (FUNC_17(VAR_5, VAR_6))
  goto discard;
 if (VAR_7->rxopt.all)
  VAR_8 = FUNC_18(VAR_6, VAR_4);

 if (VAR_5->sk_state == VAR_2) {
  if (FUNC_4(VAR_5, VAR_6, FUNC_3(VAR_6), VAR_6->len))
   goto reset;
  if (VAR_8)
   goto ipv6_pktoptions;
  return 0;
 }
 if (FUNC_5(VAR_5, VAR_6, FUNC_3(VAR_6), VAR_6->len))
  goto reset;
 if (VAR_8)
  goto ipv6_pktoptions;
 return 0;

reset:
 FUNC_7(VAR_5, VAR_6);
discard:
 if (VAR_8 != ((void*)0))
  FUNC_2(VAR_8);
 FUNC_15(VAR_6);
 return 0;




ipv6_pktoptions:
 if (!((1 << VAR_5->sk_state) & (VAR_0 | VAR_1))) {
  if (VAR_7->rxopt.bits.rxinfo || VAR_7->rxopt.bits.rxoinfo)
   VAR_7->mcast_oif = FUNC_9(VAR_8);
  if (VAR_7->rxopt.bits.rxhlim || VAR_7->rxopt.bits.rxohlim)
   VAR_7->mcast_hops = FUNC_13(VAR_8)->hop_limit;
  if (VAR_7->rxopt.bits.rxflow || VAR_7->rxopt.bits.rxtclass)
   VAR_7->rcv_flowinfo = FUNC_11(FUNC_13(VAR_8));
  if (VAR_7->repflow)
   VAR_7->flow_label = FUNC_12(FUNC_13(VAR_8));
  if (FUNC_14(VAR_5, VAR_8,
          &FUNC_0(VAR_8)->header.h6)) {
   FUNC_19(VAR_8, VAR_5);
   FUNC_16(FUNC_1(VAR_8),
    &FUNC_0(VAR_8)->header.h6,
    sizeof(struct inet6_skb_parm));
   VAR_8 = FUNC_20(&VAR_7->pktoptions, VAR_8);
  } else {
   FUNC_2(VAR_8);
   VAR_8 = FUNC_20(&VAR_7->pktoptions, ((void*)0));
  }
 }

 FUNC_15(VAR_8);
 return 0;
}
