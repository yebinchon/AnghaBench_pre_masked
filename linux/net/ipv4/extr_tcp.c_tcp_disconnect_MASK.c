
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {scalar_t__ num_sacks; scalar_t__ dsack; scalar_t__ saw_tstamp; } ;
struct TYPE_9__ {int reo_wnd_steps; scalar_t__ dsack_seen; scalar_t__ reo_wnd_persist; scalar_t__ last_delivered; scalar_t__ advanced; scalar_t__ mstamp; } ;
struct tcp_sock {scalar_t__ snd_nxt; scalar_t__ write_seq; int copied_seq; int rcv_nxt; int max_window; int snd_cwnd; unsigned int app_limited; scalar_t__ rcv_ooopack; TYPE_5__ rx_opt; scalar_t__ syn_data_acked; TYPE_4__ rack; scalar_t__ last_oow_ack_time; scalar_t__ tlp_high_seq; scalar_t__ sacked_out; scalar_t__ retrans_out; scalar_t__ reord_seen; scalar_t__ dsack_dups; TYPE_3__* duplicate_sack; scalar_t__ bytes_retrans; scalar_t__ bytes_received; scalar_t__ bytes_acked; scalar_t__ bytes_sent; scalar_t__ compressed_ack; scalar_t__ is_sack_reneg; scalar_t__ delivered_ce; scalar_t__ window_clamp; scalar_t__ snd_cwnd_cnt; int snd_ssthresh; scalar_t__ rcv_rtt_last_tsecr; int mdev_us; scalar_t__ srtt_us; int out_of_order_queue; scalar_t__ urg_data; int repair; } ;
struct TYPE_6__ {scalar_t__ offset; int * page; } ;
struct sock {int sk_state; int sk_userlocks; int (* sk_error_report ) (struct sock*) ;TYPE_1__ sk_frag; int * sk_rx_dst; scalar_t__ sk_shutdown; int * sk_rx_skb_cache; int sk_receive_queue; void* sk_err; } ;
struct inet_sock {scalar_t__ inet_num; scalar_t__ defer_connect; scalar_t__ inet_dport; } ;
struct TYPE_7__ {int rcv_mss; } ;
struct inet_connection_sock {int icsk_bind_hash; TYPE_2__ icsk_ack; int icsk_rto; scalar_t__ icsk_probes_out; scalar_t__ icsk_backoff; } ;
struct TYPE_8__ {scalar_t__ end_seq; scalar_t__ start_seq; } ;


 void* VAR_0 ;
 void* VAR_1 ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 struct inet_connection_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 struct inet_sock* FUNC_11 (struct sock*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_5__*,int ,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct sock*,int ) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct tcp_sock*) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct tcp_sock*) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (struct tcp_sock*) ;
 int FUNC_24 (struct sock*,int ) ;
 int FUNC_25 (struct sock*,int ) ;
 int FUNC_26 (struct sock*,int) ;
 struct tcp_sock* FUNC_27 (struct sock*) ;
 int FUNC_28 (struct sock*) ;
 scalar_t__ FUNC_29 (int ) ;

int FUNC_30(struct sock *VAR_14, int VAR_15)
{
 struct inet_sock *VAR_16 = FUNC_11(VAR_14);
 struct inet_connection_sock *VAR_17 = FUNC_7(VAR_14);
 struct tcp_sock *VAR_18 = FUNC_27(VAR_14);
 int VAR_19 = VAR_14->sk_state;
 u32 VAR_20;

 if (VAR_19 != VAR_7)
  FUNC_26(VAR_14, VAR_7);


 if (VAR_19 == VAR_10) {
  FUNC_9(VAR_14);
 } else if (FUNC_29(VAR_18->repair)) {
  VAR_14->sk_err = VAR_0;
 } else if (FUNC_22(VAR_19) ||
     (VAR_18->snd_nxt != VAR_18->write_seq &&
      (1 << VAR_19) & (VAR_4 | VAR_5))) {



  FUNC_24(VAR_14, FUNC_6());
  VAR_14->sk_err = VAR_1;
 } else if (VAR_19 == VAR_12)
  VAR_14->sk_err = VAR_1;

 FUNC_19(VAR_14);
 FUNC_4(&VAR_14->sk_receive_queue);
 if (VAR_14->sk_rx_skb_cache) {
  FUNC_2(VAR_14->sk_rx_skb_cache);
  VAR_14->sk_rx_skb_cache = ((void*)0);
 }
 FUNC_1(VAR_18->copied_seq, VAR_18->rcv_nxt);
 VAR_18->urg_data = 0;
 FUNC_28(VAR_14);
 FUNC_20(VAR_14);
 FUNC_15(&VAR_18->out_of_order_queue);

 VAR_16->inet_dport = 0;

 if (!(VAR_14->sk_userlocks & VAR_2))
  FUNC_10(VAR_14);

 VAR_14->sk_shutdown = 0;
 FUNC_16(VAR_14, VAR_3);
 VAR_18->srtt_us = 0;
 VAR_18->mdev_us = FUNC_12(VAR_13);
 VAR_18->rcv_rtt_last_tsecr = 0;

 VAR_20 = VAR_18->write_seq + VAR_18->max_window + 2;
 if (!VAR_20)
  VAR_20 = 1;
 FUNC_1(VAR_18->write_seq, VAR_20);

 VAR_17->icsk_backoff = 0;
 VAR_18->snd_cwnd = 2;
 VAR_17->icsk_probes_out = 0;
 VAR_17->icsk_rto = VAR_13;
 VAR_18->snd_ssthresh = VAR_8;
 VAR_18->snd_cwnd = VAR_9;
 VAR_18->snd_cwnd_cnt = 0;
 VAR_18->window_clamp = 0;
 VAR_18->delivered_ce = 0;
 FUNC_25(VAR_14, VAR_6);
 VAR_18->is_sack_reneg = 0;
 FUNC_18(VAR_18);
 FUNC_8(VAR_14);



 VAR_17->icsk_ack.rcv_mss = VAR_11;
 FUNC_13(&VAR_18->rx_opt, 0, sizeof(VAR_18->rx_opt));
 FUNC_3(VAR_14);
 FUNC_5(VAR_14->sk_rx_dst);
 VAR_14->sk_rx_dst = ((void*)0);
 FUNC_23(VAR_18);
 VAR_18->compressed_ack = 0;
 VAR_18->bytes_sent = 0;
 VAR_18->bytes_acked = 0;
 VAR_18->bytes_received = 0;
 VAR_18->bytes_retrans = 0;
 VAR_18->duplicate_sack[0].start_seq = 0;
 VAR_18->duplicate_sack[0].end_seq = 0;
 VAR_18->dsack_dups = 0;
 VAR_18->reord_seen = 0;
 VAR_18->retrans_out = 0;
 VAR_18->sacked_out = 0;
 VAR_18->tlp_high_seq = 0;
 VAR_18->last_oow_ack_time = 0;

 VAR_18->app_limited = ~0U;
 VAR_18->rack.mstamp = 0;
 VAR_18->rack.advanced = 0;
 VAR_18->rack.reo_wnd_steps = 1;
 VAR_18->rack.last_delivered = 0;
 VAR_18->rack.reo_wnd_persist = 0;
 VAR_18->rack.dsack_seen = 0;
 VAR_18->syn_data_acked = 0;
 VAR_18->rx_opt.saw_tstamp = 0;
 VAR_18->rx_opt.dsack = 0;
 VAR_18->rx_opt.num_sacks = 0;
 VAR_18->rcv_ooopack = 0;



 FUNC_21(VAR_18);
 VAR_16->defer_connect = 0;

 FUNC_0(VAR_16->inet_num && !VAR_17->icsk_bind_hash);

 if (VAR_14->sk_frag.page) {
  FUNC_14(VAR_14->sk_frag.page);
  VAR_14->sk_frag.page = ((void*)0);
  VAR_14->sk_frag.offset = 0;
 }

 VAR_14->sk_error_report(VAR_14);
 return 0;
}
