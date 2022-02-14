
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcphdr {scalar_t__ fin; int window; scalar_t__ syn; scalar_t__ rst; scalar_t__ ack; } ;
struct TYPE_6__ {int snd_wscale; int tstamp_ok; scalar_t__ saw_tstamp; } ;
struct tcp_sock {int snd_wnd; int rcv_nxt; int write_seq; int snd_una; int syn_fastopen; int linger2; int lsndtime; int advmss; TYPE_2__ rx_opt; int copied_seq; int retrans_stamp; int srtt_us; int delivered; int fastopen_rsk; } ;
struct sock {int sk_state; int sk_shutdown; int (* sk_state_change ) (struct sock*) ;int sk_socket; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct inet_connection_sock {TYPE_3__* icsk_ca_ops; TYPE_1__* icsk_af_ops; } ;
struct TYPE_8__ {scalar_t__ end_seq; scalar_t__ seq; int ack_seq; } ;
struct TYPE_7__ {int cong_control; } ;
struct TYPE_5__ {int (* conn_request ) (struct sock*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_4__* FUNC_1 (struct sk_buff*) ;


 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct inet_connection_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (int ) ;
 struct request_sock* FUNC_14 (int ,int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*,int ,int ) ;
 int FUNC_19 () ;
 int FUNC_20 (struct sock*,int ) ;
 int FUNC_21 (struct sock*) ;
 int FUNC_22 (struct sock*) ;
 int FUNC_23 (struct sock*,struct sk_buff*) ;
 int FUNC_24 (struct sock*) ;
 int FUNC_25 (struct sock*) ;
 scalar_t__ FUNC_26 (struct sock*,struct sk_buff*,int) ;
 int FUNC_27 (struct sock*) ;
 int FUNC_28 (struct sock*,struct sk_buff*,struct request_sock*,int,int*) ;
 int FUNC_29 (struct sock*,struct sk_buff*) ;
 int FUNC_30 (struct sock*) ;
 int FUNC_31 (struct sock*) ;
 int FUNC_32 (struct sock*,struct sk_buff*) ;
 int FUNC_33 (struct tcp_sock*) ;
 int FUNC_34 (struct sock*) ;
 int FUNC_35 (struct sock*) ;
 struct tcphdr* FUNC_36 (struct sk_buff*) ;
 int FUNC_37 (struct sock*,int ) ;
 int FUNC_38 (struct tcp_sock*,scalar_t__) ;
 int FUNC_39 (struct sock*) ;
 int VAR_13 ;
 int FUNC_40 (struct tcp_sock*) ;
 int FUNC_41 (struct sock*) ;
 int FUNC_42 (struct sock*,struct sk_buff*,struct tcphdr const*) ;
 int FUNC_43 (struct sock*) ;
 int FUNC_44 (struct sock*,struct sk_buff*) ;
 int FUNC_45 (struct sock*,int) ;
 struct tcp_sock* FUNC_46 (struct sock*) ;
 int FUNC_47 (struct sock*,struct request_sock*) ;
 int FUNC_48 (struct sock*,int,int) ;
 int FUNC_49 (struct sock*) ;
 int FUNC_50 (struct sock*) ;
 int FUNC_51 (struct sock*) ;
 int FUNC_52 (struct sock*,struct sk_buff*,struct tcphdr const*) ;
 int FUNC_53 (struct sock*,struct sk_buff*,struct tcphdr const*,int ) ;

int FUNC_54(struct sock *VAR_14, struct sk_buff *VAR_15)
{
 struct tcp_sock *VAR_16 = FUNC_46(VAR_14);
 struct inet_connection_sock *VAR_17 = FUNC_8(VAR_14);
 const struct tcphdr *VAR_18 = FUNC_36(VAR_15);
 struct request_sock *VAR_19;
 int VAR_20 = 0;
 bool VAR_21;

 switch (VAR_14->sk_state) {
 case 137:
  goto discard;

 case 130:
  if (VAR_18->ack)
   return 1;

  if (VAR_18->rst)
   goto discard;

  if (VAR_18->syn) {
   if (VAR_18->fin)
    goto discard;



   FUNC_15();
   FUNC_10();
   VAR_21 = VAR_17->icsk_af_ops->conn_request(VAR_14, VAR_15) >= 0;
   FUNC_11();
   FUNC_16();

   if (!VAR_21)
    return 1;
   FUNC_7(VAR_15);
   return 0;
  }
  goto discard;

 case 128:
  VAR_16->rx_opt.saw_tstamp = 0;
  FUNC_40(VAR_16);
  VAR_20 = FUNC_42(VAR_14, VAR_15, VAR_18);
  if (VAR_20 >= 0)
   return VAR_20;


  FUNC_52(VAR_14, VAR_15, VAR_18);
  FUNC_4(VAR_15);
  FUNC_30(VAR_14);
  return 0;
 }

 FUNC_40(VAR_16);
 VAR_16->rx_opt.saw_tstamp = 0;
 VAR_19 = FUNC_14(VAR_16->fastopen_rsk,
     FUNC_12(VAR_14));
 if (VAR_19) {
  bool VAR_22;

  FUNC_2(VAR_14->sk_state != 129 &&
      VAR_14->sk_state != 133);

  if (!FUNC_28(VAR_14, VAR_15, VAR_19, 1, &VAR_22))
   goto discard;
 }

 if (!VAR_18->ack && !VAR_18->rst && !VAR_18->syn)
  goto discard;

 if (!FUNC_53(VAR_14, VAR_15, VAR_18, 0))
  return 0;


 VAR_21 = FUNC_26(VAR_14, VAR_15, VAR_2 |
          VAR_3 |
          VAR_1) > 0;

 if (!VAR_21) {
  if (VAR_14->sk_state == 129)
   return 1;
  FUNC_44(VAR_14, VAR_15);
  goto discard;
 }
 switch (VAR_14->sk_state) {
 case 129:
  VAR_16->delivered++;
  if (!VAR_16->srtt_us)
   FUNC_47(VAR_14, VAR_19);

  if (VAR_19) {
   FUNC_41(VAR_14);
  } else {
   FUNC_49(VAR_14);
   VAR_16->retrans_stamp = 0;
   FUNC_37(VAR_14, VAR_0);
   FUNC_3(VAR_16->copied_seq, VAR_16->rcv_nxt);
  }
  FUNC_19();
  FUNC_45(VAR_14, 134);
  VAR_14->sk_state_change(VAR_14);





  if (VAR_14->sk_socket)
   FUNC_18(VAR_14, VAR_9, VAR_5);

  VAR_16->snd_una = FUNC_1(VAR_15)->ack_seq;
  VAR_16->snd_wnd = FUNC_13(VAR_18->window) << VAR_16->rx_opt.snd_wscale;
  FUNC_38(VAR_16, FUNC_1(VAR_15)->seq);

  if (VAR_16->rx_opt.tstamp_ok)
   VAR_16->advmss -= VAR_10;

  if (!FUNC_8(VAR_14)->icsk_ca_ops->cong_control)
   FUNC_51(VAR_14);


  VAR_16->lsndtime = VAR_13;

  FUNC_39(VAR_14);
  FUNC_33(VAR_16);
  break;

 case 133: {
  int VAR_23;

  if (VAR_19)
   FUNC_41(VAR_14);

  if (VAR_16->snd_una != VAR_16->write_seq)
   break;

  FUNC_45(VAR_14, 132);
  VAR_14->sk_shutdown |= VAR_7;

  FUNC_17(VAR_14);

  if (!FUNC_20(VAR_14, VAR_8)) {

   VAR_14->sk_state_change(VAR_14);
   break;
  }

  if (VAR_16->linger2 < 0) {
   FUNC_31(VAR_14);
   FUNC_0(FUNC_21(VAR_14), VAR_4);
   return 1;
  }
  if (FUNC_1(VAR_15)->end_seq != FUNC_1(VAR_15)->seq &&
      FUNC_5(FUNC_1(VAR_15)->end_seq - VAR_18->fin, VAR_16->rcv_nxt)) {

   if (VAR_16->syn_fastopen && VAR_18->fin)
    FUNC_34(VAR_14);
   FUNC_31(VAR_14);
   FUNC_0(FUNC_21(VAR_14), VAR_4);
   return 1;
  }

  VAR_23 = FUNC_35(VAR_14);
  if (VAR_23 > VAR_11) {
   FUNC_9(VAR_14, VAR_23 - VAR_11);
  } else if (VAR_18->fin || FUNC_22(VAR_14)) {






   FUNC_9(VAR_14, VAR_23);
  } else {
   FUNC_48(VAR_14, 132, VAR_23);
   goto discard;
  }
  break;
 }

 case 135:
  if (VAR_16->snd_una == VAR_16->write_seq) {
   FUNC_48(VAR_14, VAR_12, 0);
   goto discard;
  }
  break;

 case 131:
  if (VAR_16->snd_una == VAR_16->write_seq) {
   FUNC_50(VAR_14);
   FUNC_31(VAR_14);
   goto discard;
  }
  break;
 }


 FUNC_52(VAR_14, VAR_15, VAR_18);


 switch (VAR_14->sk_state) {
 case 136:
 case 135:
 case 131:
  if (!FUNC_6(FUNC_1(VAR_15)->seq, VAR_16->rcv_nxt))
   break;

 case 133:
 case 132:




  if (VAR_14->sk_shutdown & VAR_6) {
   if (FUNC_1(VAR_15)->end_seq != FUNC_1(VAR_15)->seq &&
       FUNC_5(FUNC_1(VAR_15)->end_seq - VAR_18->fin, VAR_16->rcv_nxt)) {
    FUNC_0(FUNC_21(VAR_14), VAR_4);
    FUNC_43(VAR_14);
    return 1;
   }
  }

 case 134:
  FUNC_29(VAR_14, VAR_15);
  VAR_20 = 1;
  break;
 }


 if (VAR_14->sk_state != 137) {
  FUNC_30(VAR_14);
  FUNC_27(VAR_14);
 }

 if (!VAR_20) {
discard:
  FUNC_32(VAR_14, VAR_15);
 }
 return 0;
}
