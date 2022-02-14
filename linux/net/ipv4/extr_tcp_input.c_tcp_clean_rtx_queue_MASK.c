
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_8__ {int probe_seq_end; } ;
struct tcp_sock {int sacked_out; int snd_nxt; int snd_una; int retrans_out; int high_seq; scalar_t__ delivered; int lost_out; int snd_up; int mss_cache; scalar_t__ packets_out; int tcp_mstamp; int lost_cnt_hint; TYPE_2__ mtu_probe; struct sk_buff* lost_skb_hint; struct sk_buff* retransmit_skb_hint; scalar_t__ retrans_stamp; } ;
struct TYPE_10__ {int in_flight; } ;
struct tcp_skb_cb {int seq; int sacked; int end_seq; int tcp_flags; TYPE_4__ tx; } ;
struct tcp_sacktag_state {int first_sackt; int last_sackt; TYPE_5__* rate; } ;
struct sock {int tcp_rtx_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {scalar_t__ probe_size; } ;
struct inet_connection_sock {int icsk_ca_state; TYPE_3__* icsk_ca_ops; TYPE_1__ icsk_mtup; } ;
struct ack_sample {int pkts_acked; int in_flight; int rtt_us; } ;
struct TYPE_11__ {scalar_t__ prior_delivered; int rtt_us; } ;
struct TYPE_9__ {int (* pkts_acked ) (struct sock*,struct ack_sample*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct tcp_skb_cb* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int const,int) ;
 int FUNC_5 (int,int,int) ;
 struct inet_connection_sock* FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int) ;
 int FUNC_9 (char*,int,int ) ;
 struct sk_buff* FUNC_10 (int *) ;
 struct sk_buff* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sock*,struct ack_sample*) ;
 int FUNC_13 (struct sock*,struct sk_buff*,int) ;
 int FUNC_14 (struct sock*,int,long,long,long,TYPE_5__*) ;
 int FUNC_15 (struct sock*,int,int ) ;
 int FUNC_16 (struct sock*,int ) ;
 scalar_t__ FUNC_17 (struct tcp_sock*) ;
 scalar_t__ FUNC_18 (struct tcp_sock*) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (struct tcp_sock*,int,int,int) ;
 int FUNC_21 (struct sock*,struct sk_buff*,TYPE_5__*) ;
 int FUNC_22 (struct sock*,int) ;
 int FUNC_23 (struct sk_buff*,struct sock*) ;
 struct tcp_sock* FUNC_24 (struct sock*) ;
 int FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (struct tcp_sock*,struct sk_buff*) ;
 int FUNC_27 (struct sk_buff*) ;
 long FUNC_28 (int ,int) ;
 int FUNC_29 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_30 (int) ;

__attribute__((used)) static int FUNC_31(struct sock *VAR_15, u32 VAR_16,
          u32 VAR_17,
          struct tcp_sacktag_state *VAR_18)
{
 const struct inet_connection_sock *VAR_19 = FUNC_6(VAR_15);
 u64 VAR_20, VAR_21;
 struct tcp_sock *VAR_22 = FUNC_24(VAR_15);
 u32 VAR_23 = VAR_22->sacked_out;
 u32 VAR_24 = VAR_22->snd_nxt;
 struct sk_buff *VAR_25, *VAR_26;
 bool VAR_27 = 1;
 long VAR_28 = -1L;
 long VAR_29 = -1L;
 long VAR_30 = -1L;
 u32 VAR_31 = 0;
 u32 VAR_32 = 0;
 bool VAR_33;
 int VAR_34 = 0;

 VAR_20 = 0;

 for (VAR_25 = FUNC_10(&VAR_15->tcp_rtx_queue); VAR_25; VAR_25 = VAR_26) {
  struct tcp_skb_cb *VAR_35 = FUNC_0(VAR_25);
  const u32 VAR_36 = VAR_35->seq;
  u8 VAR_37 = VAR_35->sacked;
  u32 VAR_38;

  FUNC_13(VAR_15, VAR_25, VAR_17);


  if (FUNC_3(VAR_35->end_seq, VAR_22->snd_una)) {
   if (FUNC_25(VAR_25) == 1 ||
       !FUNC_3(VAR_22->snd_una, VAR_35->seq))
    break;

   VAR_38 = FUNC_29(VAR_15, VAR_25);
   if (!VAR_38)
    break;
   VAR_27 = 0;
  } else {
   VAR_38 = FUNC_25(VAR_25);
  }

  if (FUNC_30(VAR_37 & VAR_10)) {
   if (VAR_37 & VAR_12)
    VAR_22->retrans_out -= VAR_38;
   VAR_34 |= VAR_5;
  } else if (!(VAR_37 & VAR_11)) {
   VAR_21 = FUNC_27(VAR_25);
   FUNC_2(VAR_21 == 0);
   if (!VAR_20)
    VAR_20 = VAR_21;

   VAR_32 = FUNC_0(VAR_25)->tx.in_flight;
   if (FUNC_4(VAR_36, VAR_24))
    VAR_24 = VAR_36;
   if (!FUNC_3(VAR_35->end_seq, VAR_22->high_seq))
    VAR_34 |= VAR_4;
  }

  if (VAR_37 & VAR_11) {
   VAR_22->sacked_out -= VAR_38;
  } else if (FUNC_18(VAR_22)) {
   VAR_22->delivered += VAR_38;
   if (!FUNC_26(VAR_22, VAR_25))
    FUNC_20(VAR_22, VAR_37, VAR_35->end_seq,
       FUNC_27(VAR_25));
  }
  if (VAR_37 & VAR_9)
   VAR_22->lost_out -= VAR_38;

  VAR_22->packets_out -= VAR_38;
  VAR_31 += VAR_38;
  FUNC_21(VAR_15, VAR_25, VAR_18->rate);
  if (FUNC_7(!(VAR_35->tcp_flags & VAR_13))) {
   VAR_34 |= VAR_3;
  } else {
   VAR_34 |= VAR_8;
   VAR_22->retrans_stamp = 0;
  }

  if (!VAR_27)
   break;

  VAR_26 = FUNC_11(VAR_25);
  if (FUNC_30(VAR_25 == VAR_22->retransmit_skb_hint))
   VAR_22->retransmit_skb_hint = ((void*)0);
  if (FUNC_30(VAR_25 == VAR_22->lost_skb_hint))
   VAR_22->lost_skb_hint = ((void*)0);
  FUNC_23(VAR_25, VAR_15);
 }

 if (!VAR_25)
  FUNC_16(VAR_15, VAR_14);

 if (FUNC_7(FUNC_5(VAR_22->snd_up, VAR_17, VAR_22->snd_una)))
  VAR_22->snd_up = VAR_22->snd_una;

 if (VAR_25 && (FUNC_0(VAR_25)->sacked & VAR_11))
  VAR_34 |= VAR_6;

 if (FUNC_7(VAR_20) && !(VAR_34 & VAR_5)) {
  VAR_29 = FUNC_28(VAR_22->tcp_mstamp, VAR_20);
  VAR_30 = FUNC_28(VAR_22->tcp_mstamp, VAR_21);

  if (VAR_31 == 1 && VAR_32 < VAR_22->mss_cache &&
      VAR_32 && !VAR_23 && VAR_27 &&
      VAR_18->rate->prior_delivered + 1 == VAR_22->delivered &&
      !(VAR_34 & (VAR_2 | VAR_8))) {




   VAR_34 |= VAR_1;
  }
 }
 if (VAR_18->first_sackt) {
  VAR_28 = FUNC_28(VAR_22->tcp_mstamp, VAR_18->first_sackt);
  VAR_30 = FUNC_28(VAR_22->tcp_mstamp, VAR_18->last_sackt);
 }
 VAR_33 = FUNC_14(VAR_15, VAR_34, VAR_29, VAR_28,
     VAR_30, VAR_18->rate);

 if (VAR_34 & VAR_0) {
  VAR_34 |= VAR_7;
  if (FUNC_30(VAR_19->icsk_mtup.probe_size &&
        !FUNC_3(VAR_22->mtu_probe.probe_seq_end, VAR_22->snd_una))) {
   FUNC_19(VAR_15);
  }

  if (FUNC_17(VAR_22)) {
   FUNC_22(VAR_15, VAR_31);







   if (VAR_34 & VAR_5)
    VAR_34 &= ~VAR_4;
  } else {
   int VAR_39;


   if (FUNC_4(VAR_24, VAR_16))
    FUNC_15(VAR_15, VAR_24, 0);

   VAR_39 = VAR_23 - VAR_22->sacked_out;
   VAR_22->lost_cnt_hint -= FUNC_8(VAR_22->lost_cnt_hint, VAR_39);
  }
 } else if (VAR_25 && VAR_33 && VAR_28 >= 0 &&
     VAR_28 > FUNC_28(VAR_22->tcp_mstamp,
          FUNC_27(VAR_25))) {




  VAR_34 |= VAR_7;
 }

 if (VAR_19->icsk_ca_ops->pkts_acked) {
  struct ack_sample VAR_40 = { .pkts_acked = VAR_31,
          .rtt_us = VAR_18->rate->rtt_us,
          .in_flight = VAR_32 };

  VAR_19->icsk_ca_ops->pkts_acked(VAR_15, &VAR_40);
 }
 return VAR_34;
}
