
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tcphdr {int seq; int source; int dest; } ;
struct tcp_sock {scalar_t__ tcp_mstamp; int srtt_us; int snd_una; int mtu_info; int snd_nxt; int fastopen_rsk; } ;
struct sock {int sk_state; int sk_err; int sk_err_soft; int (* sk_error_report ) (struct sock*) ;int sk_tsq_flags; } ;
struct sk_buff {int dev; scalar_t__ data; } ;
struct request_sock {int sk; } ;
struct net {int dummy; } ;
struct iphdr {int ihl; scalar_t__ ttl; int saddr; int daddr; } ;
struct inet_sock {scalar_t__ min_ttl; scalar_t__ recverr; } ;
struct inet_connection_sock {scalar_t__ icsk_rto; int icsk_backoff; int icsk_retransmits; } ;
typedef scalar_t__ s32 ;
struct TYPE_6__ {int errno; } ;
struct TYPE_5__ {int type; int code; } ;
struct TYPE_4__ {int snt_isn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int const VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int const VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int const VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;


 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct net*,int ) ;
 struct sock* FUNC_3 (struct net*,int *,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct tcp_sock*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 struct net* FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*,struct sock*) ;
 TYPE_3__* VAR_19 ;
 TYPE_2__* FUNC_10 (struct sk_buff*) ;
 struct inet_connection_sock* FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_13 (struct inet_connection_sock*,int ) ;
 int FUNC_14 (struct sk_buff*) ;
 struct inet_sock* FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 struct request_sock* FUNC_20 (int ) ;
 int FUNC_21 (struct sock*) ;
 scalar_t__ FUNC_22 (struct sock*) ;
 int FUNC_23 (struct sock*) ;
 int FUNC_24 (struct sock*) ;
 int FUNC_25 (struct sock*) ;
 int FUNC_26 (struct sock*) ;
 int VAR_20 ;
 int FUNC_27 (struct tcp_sock*) ;
 int FUNC_28 (struct sock*,int ,int) ;
 int FUNC_29 (struct sock*) ;
 TYPE_1__* FUNC_30 (struct request_sock*) ;
 struct sk_buff* FUNC_31 (struct sock*) ;
 struct tcp_sock* FUNC_32 (struct sock*) ;
 scalar_t__ FUNC_33 (struct sk_buff*) ;
 int FUNC_34 (struct sock*) ;
 int FUNC_35 (int ,int *) ;
 scalar_t__ FUNC_36 (int) ;
 scalar_t__ FUNC_37 (int ) ;

int FUNC_38(struct sk_buff *VAR_21, u32 VAR_22)
{
 const struct iphdr *VAR_23 = (const struct iphdr *)VAR_21->data;
 struct tcphdr *VAR_24 = (struct tcphdr *)(VAR_21->data + (VAR_23->ihl << 2));
 struct inet_connection_sock *VAR_25;
 struct tcp_sock *VAR_26;
 struct inet_sock *VAR_27;
 const int VAR_28 = FUNC_10(VAR_21)->type;
 const int VAR_29 = FUNC_10(VAR_21)->code;
 struct sock *VAR_30;
 struct sk_buff *VAR_31;
 struct request_sock *VAR_32;
 u32 VAR_33, VAR_34;
 s32 VAR_35;
 u32 VAR_36;
 int VAR_37;
 struct net *VAR_38 = FUNC_8(VAR_21->dev);

 VAR_30 = FUNC_3(VAR_38, &VAR_20, VAR_23->daddr,
           VAR_24->dest, VAR_23->saddr, FUNC_19(VAR_24->source),
           FUNC_14(VAR_21), 0);
 if (!VAR_30) {
  FUNC_1(VAR_38, VAR_5);
  return -VAR_1;
 }
 if (VAR_30->sk_state == VAR_18) {
  FUNC_17(FUNC_16(VAR_30));
  return 0;
 }
 VAR_33 = FUNC_18(VAR_24->seq);
 if (VAR_30->sk_state == VAR_15) {
  FUNC_28(VAR_30, VAR_33, VAR_28 == 133 ||
         VAR_28 == 130 ||
         (VAR_28 == 134 &&
          (VAR_29 == VAR_6 ||
           VAR_29 == VAR_4)));
  return 0;
 }

 FUNC_6(VAR_30);





 if (FUNC_22(VAR_30)) {
  if (!(VAR_28 == 134 && VAR_29 == VAR_3))
   FUNC_2(VAR_38, VAR_8);
 }
 if (VAR_30->sk_state == VAR_12)
  goto out;

 if (FUNC_36(VAR_23->ttl < FUNC_15(VAR_30)->min_ttl)) {
  FUNC_2(VAR_38, VAR_10);
  goto out;
 }

 VAR_25 = FUNC_11(VAR_30);
 VAR_26 = FUNC_32(VAR_30);

 VAR_32 = FUNC_20(VAR_26->fastopen_rsk);
 VAR_34 = VAR_32 ? FUNC_30(VAR_32)->snt_isn : VAR_26->snd_una;
 if (VAR_30->sk_state != VAR_13 &&
     !FUNC_5(VAR_33, VAR_34, VAR_26->snd_nxt)) {
  FUNC_2(VAR_38, VAR_9);
  goto out;
 }

 switch (VAR_28) {
 case 132:
  if (!FUNC_22(VAR_30))
   FUNC_9(VAR_21, VAR_30);
  goto out;
 case 131:

  goto out;
 case 133:
  VAR_37 = VAR_2;
  break;
 case 134:
  if (VAR_29 > VAR_11)
   goto out;

  if (VAR_29 == VAR_3) {




   if (VAR_30->sk_state == VAR_13)
    goto out;

   VAR_26->mtu_info = VAR_22;
   if (!FUNC_22(VAR_30)) {
    FUNC_34(VAR_30);
   } else {
    if (!FUNC_35(VAR_14, &VAR_30->sk_tsq_flags))
     FUNC_21(VAR_30);
   }
   goto out;
  }

  VAR_37 = VAR_19[VAR_29].errno;


  if (VAR_29 != VAR_6 && VAR_29 != VAR_4)
   break;
  if (VAR_33 != VAR_26->snd_una || !VAR_25->icsk_retransmits ||
      !VAR_25->icsk_backoff || VAR_32)
   break;

  if (FUNC_22(VAR_30))
   break;

  VAR_31 = FUNC_31(VAR_30);
  if (FUNC_0(!VAR_31))
   break;

  VAR_25->icsk_backoff--;
  VAR_25->icsk_rto = VAR_26->srtt_us ? FUNC_4(VAR_26) :
            VAR_17;
  VAR_25->icsk_rto = FUNC_13(VAR_25, VAR_16);


  FUNC_27(VAR_26);
  VAR_36 = (u32)(VAR_26->tcp_mstamp - FUNC_33(VAR_31));
  VAR_35 = VAR_25->icsk_rto -
       FUNC_37(VAR_36);

  if (VAR_35 > 0) {
   FUNC_12(VAR_30, VAR_7,
        VAR_35, VAR_16);
  } else {


   FUNC_29(VAR_30);
  }

  break;
 case 130:
  VAR_37 = VAR_0;
  break;
 default:
  goto out;
 }

 switch (VAR_30->sk_state) {
 case 128:
 case 129:



  if (VAR_32 && !VAR_32->sk)
   break;

  if (!FUNC_22(VAR_30)) {
   VAR_30->sk_err = VAR_37;

   VAR_30->sk_error_report(VAR_30);

   FUNC_26(VAR_30);
  } else {
   VAR_30->sk_err_soft = VAR_37;
  }
  goto out;
 }
 VAR_27 = FUNC_15(VAR_30);
 if (!FUNC_22(VAR_30) && VAR_27->recverr) {
  VAR_30->sk_err = VAR_37;
  VAR_30->sk_error_report(VAR_30);
 } else {
  VAR_30->sk_err_soft = VAR_37;
 }

out:
 FUNC_7(VAR_30);
 FUNC_23(VAR_30);
 return 0;
}
