
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct tcphdr {int seq; int source; int dest; } ;
struct tcp_sock {void* mtu_info; int snd_nxt; void* snd_una; int fastopen_rsk; } ;
struct sock {int sk_state; int sk_err; int sk_err_soft; int (* sk_error_report ) (struct sock*) ;int sk_tsq_flags; } ;
struct sk_buff {TYPE_4__* dev; scalar_t__ data; } ;
struct request_sock {int sk; } ;
struct net {int dummy; } ;
struct ipv6hdr {int saddr; int daddr; } ;
struct ipv6_pinfo {scalar_t__ min_hopcount; scalar_t__ recverr; int dst_cookie; } ;
struct inet6_skb_parm {int dummy; } ;
struct dst_entry {TYPE_1__* ops; } ;
typedef void* __u32 ;
typedef int __be32 ;
struct TYPE_9__ {int ifindex; } ;
struct TYPE_8__ {scalar_t__ hop_limit; } ;
struct TYPE_7__ {void* snt_isn; } ;
struct TYPE_6__ {int (* redirect ) (struct dst_entry*,struct sock*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 int FUNC_0 (struct net*,int ,int ) ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 struct sock* FUNC_3 (struct net*,int *,int *,int ,int *,int ,int ,int ) ;
 struct dst_entry* FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (void*,void*,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 struct net* FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (scalar_t__,scalar_t__,int*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct sock*) ;
 TYPE_3__* FUNC_14 (struct sk_buff*) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 struct request_sock* FUNC_17 (int ) ;
 int FUNC_18 (struct sock*) ;
 scalar_t__ FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct dst_entry*,struct sock*,struct sk_buff*) ;
 int FUNC_22 (struct sock*) ;
 int FUNC_23 (struct sock*) ;
 int FUNC_24 (struct sock*) ;
 int VAR_12 ;
 struct ipv6_pinfo* FUNC_25 (struct sock*) ;
 int FUNC_26 (struct sock*,void*,int) ;
 TYPE_2__* FUNC_27 (struct request_sock*) ;
 struct tcp_sock* FUNC_28 (struct sock*) ;
 int FUNC_29 (struct sock*) ;
 int FUNC_30 (int ,int *) ;

__attribute__((used)) static int FUNC_31(struct sk_buff *VAR_13, struct inet6_skb_parm *VAR_14,
  u8 VAR_15, u8 VAR_16, int VAR_17, __be32 VAR_18)
{
 const struct ipv6hdr *VAR_19 = (const struct ipv6hdr *)VAR_13->data;
 const struct tcphdr *VAR_20 = (struct tcphdr *)(VAR_13->data+VAR_17);
 struct net *VAR_21 = FUNC_8(VAR_13->dev);
 struct request_sock *VAR_22;
 struct ipv6_pinfo *VAR_23;
 struct tcp_sock *VAR_24;
 __u32 VAR_25, VAR_26;
 struct sock *VAR_27;
 bool VAR_28;
 int VAR_29;

 VAR_27 = FUNC_3(VAR_21, &VAR_12,
     &VAR_19->daddr, VAR_20->dest,
     &VAR_19->saddr, FUNC_16(VAR_20->source),
     VAR_13->dev->ifindex, FUNC_10(VAR_13));

 if (!VAR_27) {
  FUNC_0(VAR_21, FUNC_2(VAR_13->dev),
      VAR_1);
  return -VAR_0;
 }

 if (VAR_27->sk_state == VAR_11) {
  FUNC_12(FUNC_11(VAR_27));
  return 0;
 }
 VAR_25 = FUNC_15(VAR_20->seq);
 VAR_28 = FUNC_9(VAR_15, VAR_16, &VAR_29);
 if (VAR_27->sk_state == VAR_10) {
  FUNC_26(VAR_27, VAR_25, VAR_28);
  return 0;
 }

 FUNC_6(VAR_27);
 if (FUNC_19(VAR_27) && VAR_15 != VAR_2)
  FUNC_1(VAR_21, VAR_3);

 if (VAR_27->sk_state == VAR_7)
  goto out;

 if (FUNC_14(VAR_13)->hop_limit < FUNC_25(VAR_27)->min_hopcount) {
  FUNC_1(VAR_21, VAR_5);
  goto out;
 }

 VAR_24 = FUNC_28(VAR_27);

 VAR_22 = FUNC_17(VAR_24->fastopen_rsk);
 VAR_26 = VAR_22 ? FUNC_27(VAR_22)->snt_isn : VAR_24->snd_una;
 if (VAR_27->sk_state != VAR_8 &&
     !FUNC_5(VAR_25, VAR_26, VAR_24->snd_nxt)) {
  FUNC_1(VAR_21, VAR_4);
  goto out;
 }

 VAR_23 = FUNC_25(VAR_27);

 if (VAR_15 == VAR_6) {
  if (!FUNC_19(VAR_27)) {
   struct dst_entry *VAR_30 = FUNC_4(VAR_27, VAR_23->dst_cookie);

   if (VAR_30)
    VAR_30->ops->redirect(VAR_30, VAR_27, VAR_13);
  }
  goto out;
 }

 if (VAR_15 == VAR_2) {




  if (VAR_27->sk_state == VAR_8)
   goto out;

  if (!FUNC_13(VAR_27))
   goto out;

  VAR_24->mtu_info = FUNC_15(VAR_18);
  if (!FUNC_19(VAR_27))
   FUNC_29(VAR_27);
  else if (!FUNC_30(VAR_9,
        &VAR_27->sk_tsq_flags))
   FUNC_18(VAR_27);
  goto out;
 }



 switch (VAR_27->sk_state) {
 case 128:
 case 129:



  if (VAR_22 && !VAR_22->sk)
   break;

  if (!FUNC_19(VAR_27)) {
   VAR_27->sk_err = VAR_29;
   VAR_27->sk_error_report(VAR_27);

   FUNC_24(VAR_27);
  } else
   VAR_27->sk_err_soft = VAR_29;
  goto out;
 }

 if (!FUNC_19(VAR_27) && VAR_23->recverr) {
  VAR_27->sk_err = VAR_29;
  VAR_27->sk_error_report(VAR_27);
 } else
  VAR_27->sk_err_soft = VAR_29;

out:
 FUNC_7(VAR_27);
 FUNC_20(VAR_27);
 return 0;
}
