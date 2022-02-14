
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct tcphdr {int doff; int rst; } ;
struct tcp_options_received {int rcv_tsval; scalar_t__ saw_tstamp; scalar_t__ ts_recent_stamp; scalar_t__ rcv_tsecr; int ts_recent; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_24__ {unsigned long expires; } ;
struct request_sock {int num_timeout; TYPE_4__* rsk_ops; int ts_recent; scalar_t__ rsk_rcv_wnd; TYPE_9__ rsk_timer; } ;
typedef int __be32 ;
struct TYPE_20__ {int sysctl_tcp_abort_on_overflow; } ;
struct TYPE_23__ {TYPE_3__ ipv4; } ;
struct TYPE_22__ {scalar_t__ rcv_isn; scalar_t__ snt_isn; scalar_t__ rcv_nxt; int last_oow_ack_time; scalar_t__ ts_off; } ;
struct TYPE_21__ {int (* send_reset ) (struct sock*,struct sk_buff*) ;int (* send_ack ) (struct sock*,struct sk_buff*,struct request_sock*) ;} ;
struct TYPE_19__ {struct sock* (* syn_recv_sock ) (struct sock*,struct sk_buff*,struct request_sock*,int *,struct request_sock*,int*) ;} ;
struct TYPE_18__ {int rskq_defer_accept; } ;
struct TYPE_17__ {scalar_t__ seq; scalar_t__ ack_seq; scalar_t__ end_seq; } ;
struct TYPE_16__ {TYPE_2__* icsk_af_ops; TYPE_1__ icsk_accept_queue; } ;
struct TYPE_15__ {int acked; } ;


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
 TYPE_14__* FUNC_0 (struct sk_buff*) ;
 int VAR_10 ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 TYPE_11__* FUNC_4 (struct sock*) ;
 struct sock* FUNC_5 (struct sock*,struct sock*,struct request_sock*,int) ;
 int FUNC_6 (struct sock*,struct request_sock*) ;
 TYPE_10__* FUNC_7 (struct request_sock*) ;
 int FUNC_8 (struct sock*,struct request_sock*) ;
 unsigned long VAR_11 ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (int,int ) ;
 int FUNC_11 (TYPE_9__*,unsigned long) ;
 int FUNC_12 (struct sock*,struct request_sock*,int) ;
 TYPE_6__* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*,struct sk_buff*) ;
 int FUNC_15 (struct sock*,struct sk_buff*,struct request_sock*) ;
 struct sock* FUNC_16 (struct sock*,struct sk_buff*,struct request_sock*,int *,struct request_sock*,int*) ;
 int FUNC_17 (struct sock*,struct sk_buff*) ;
 int FUNC_18 (struct tcphdr const*) ;
 struct tcphdr* FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_21 (TYPE_6__*,struct sk_buff*,int ,int *) ;
 int FUNC_22 (TYPE_6__*,struct sk_buff*,struct tcp_options_received*,int ,int *) ;
 int FUNC_23 (struct tcp_options_received*,int ) ;
 int FUNC_24 (struct sock*) ;
 TYPE_5__* FUNC_25 (struct request_sock*) ;
 int FUNC_26 (struct sock*,struct request_sock*) ;

struct sock *FUNC_27(struct sock *VAR_12, struct sk_buff *VAR_13,
      struct request_sock *VAR_14,
      bool VAR_15, bool *VAR_16)
{
 struct tcp_options_received VAR_17;
 struct sock *VAR_18;
 const struct tcphdr *VAR_19 = FUNC_19(VAR_13);
 __be32 VAR_20 = FUNC_18(VAR_19) & (VAR_6|VAR_7|VAR_5);
 bool VAR_21 = 0;
 bool VAR_22;

 VAR_17.saw_tstamp = 0;
 if (VAR_19->doff > (sizeof(struct tcphdr)>>2)) {
  FUNC_22(FUNC_13(VAR_12), VAR_13, &VAR_17, 0, ((void*)0));

  if (VAR_17.saw_tstamp) {
   VAR_17.ts_recent = VAR_14->ts_recent;
   if (VAR_17.rcv_tsecr)
    VAR_17.rcv_tsecr -= FUNC_25(VAR_14)->ts_off;




   VAR_17.ts_recent_stamp = FUNC_9() - ((VAR_10/VAR_0)<<VAR_14->num_timeout);
   VAR_21 = FUNC_23(&VAR_17, VAR_19->rst);
  }
 }


 if (FUNC_0(VAR_13)->seq == FUNC_25(VAR_14)->rcv_isn &&
     VAR_20 == VAR_7 &&
     !VAR_21) {
  if (!FUNC_21(FUNC_13(VAR_12), VAR_13,
       VAR_3,
       &FUNC_25(VAR_14)->last_oow_ack_time) &&

      !FUNC_8(VAR_12, VAR_14)) {
   unsigned long VAR_23 = VAR_11;

   VAR_23 += FUNC_10(VAR_10 << VAR_14->num_timeout,
           VAR_9);
   if (!VAR_15)
    FUNC_11(&VAR_14->rsk_timer, VAR_23);
   else
    VAR_14->rsk_timer.expires = VAR_23;
  }
  return ((void*)0);
 }
 if ((VAR_20 & VAR_5) && !VAR_15 &&
     (FUNC_0(VAR_13)->ack_seq !=
      FUNC_25(VAR_14)->snt_isn + 1))
  return VAR_12;
 if (VAR_21 || !FUNC_20(FUNC_0(VAR_13)->seq, FUNC_0(VAR_13)->end_seq,
       FUNC_25(VAR_14)->rcv_nxt, FUNC_25(VAR_14)->rcv_nxt + VAR_14->rsk_rcv_wnd)) {

  if (!(VAR_20 & VAR_6) &&
      !FUNC_21(FUNC_13(VAR_12), VAR_13,
       VAR_3,
       &FUNC_25(VAR_14)->last_oow_ack_time))
   VAR_14->rsk_ops->send_ack(VAR_12, VAR_13, VAR_14);
  if (VAR_21)
   FUNC_1(FUNC_13(VAR_12), VAR_2);
  return ((void*)0);
 }



 if (VAR_17.saw_tstamp && !FUNC_3(FUNC_0(VAR_13)->seq, FUNC_25(VAR_14)->rcv_nxt))
  VAR_14->ts_recent = VAR_17.rcv_tsval;

 if (FUNC_0(VAR_13)->seq == FUNC_25(VAR_14)->rcv_isn) {


  VAR_20 &= ~VAR_7;
 }




 if (VAR_20 & (VAR_6|VAR_7)) {
  FUNC_2(FUNC_13(VAR_12), VAR_8);
  goto embryonic_reset;
 }







 if (!(VAR_20 & VAR_5))
  return ((void*)0);




 if (VAR_15)
  return VAR_12;


 if (VAR_14->num_timeout < FUNC_4(VAR_12)->icsk_accept_queue.rskq_defer_accept &&
     FUNC_0(VAR_13)->end_seq == FUNC_25(VAR_14)->rcv_isn + 1) {
  FUNC_7(VAR_14)->acked = 1;
  FUNC_1(FUNC_13(VAR_12), VAR_4);
  return ((void*)0);
 }







 VAR_18 = FUNC_4(VAR_12)->icsk_af_ops->syn_recv_sock(VAR_12, VAR_13, VAR_14, ((void*)0),
        VAR_14, &VAR_22);
 if (!VAR_18)
  goto listen_overflow;

 FUNC_14(VAR_18, VAR_13);
 FUNC_26(VAR_18, VAR_14);
 *VAR_16 = !VAR_22;
 return FUNC_5(VAR_12, VAR_18, VAR_14, VAR_22);

listen_overflow:
 if (!FUNC_13(VAR_12)->ipv4.sysctl_tcp_abort_on_overflow) {
  FUNC_7(VAR_14)->acked = 1;
  return ((void*)0);
 }

embryonic_reset:
 if (!(VAR_20 & VAR_6)) {





  VAR_14->rsk_ops->send_reset(VAR_12, VAR_13);
 } else if (VAR_15) {
  FUNC_12(VAR_12, VAR_14, 1);
  FUNC_24(VAR_12);
 }
 if (!VAR_15) {
  FUNC_6(VAR_12, VAR_14);
  FUNC_1(FUNC_13(VAR_12), VAR_1);
 }
 return ((void*)0);
}
