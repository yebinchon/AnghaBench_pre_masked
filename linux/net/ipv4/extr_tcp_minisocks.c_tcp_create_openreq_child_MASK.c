
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct tcphdr {int dummy; } ;
struct TYPE_7__ {int snd_wscale; int rcv_wscale; int mss_clamp; scalar_t__ ts_recent_stamp; int ts_recent; scalar_t__ tstamp_ok; scalar_t__ wscale_ok; int sack_ok; } ;
struct tcp_sock {int segs_in; void* pushed_seq; int snd_wnd; int max_window; int tcp_header_len; int fastopen_rsk; int * fastopen_req; TYPE_3__ rx_opt; TYPE_1__* af_specific; int * md5sig_info; int tsoffset; int retrans_stamp; void* undo_marker; int window_clamp; int rcv_wnd; int rcv_ssthresh; int write_seq; int total_retrans; void* lsndtime; int rtt_min; int tsorted_sent_queue; int tsq_node; void* snd_up; int snd_nxt; void* snd_una; void* snd_sml; int rcv_nxt; int copied_seq; void* rcv_wup; scalar_t__ pred_flags; } ;
struct tcp_request_sock {int ts_off; int snt_synack; void* snt_isn; int txhash; void* rcv_isn; } ;
typedef struct sock {int sk_txhash; } const sock ;
struct sk_buff {scalar_t__ len; } ;
struct request_sock {int mss; scalar_t__ num_timeout; int ts_recent; int rsk_rcv_wnd; int rsk_window_clamp; int num_retrans; } ;
struct inet_request_sock {int snd_wscale; int rcv_wscale; scalar_t__ wscale_ok; int sack_ok; scalar_t__ tstamp_ok; } ;
struct TYPE_6__ {scalar_t__ last_seg_size; void* lrcvtime; } ;
struct inet_connection_sock {TYPE_2__ icsk_ack; } ;
struct TYPE_8__ {int window; } ;
struct TYPE_5__ {scalar_t__ (* md5_lookup ) (struct sock const*,struct sock const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 struct inet_connection_sock* FUNC_5 (struct sock const*) ;
 struct sock const* FUNC_6 (struct sock const*,struct request_sock*,int ) ;
 int FUNC_7 (struct sock const*,int ) ;
 struct inet_request_sock* FUNC_8 (struct request_sock*) ;
 int FUNC_9 (struct tcp_sock*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int ,unsigned int) ;
 int FUNC_12 (int *,void*,unsigned int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct tcp_sock*,struct request_sock*,struct tcp_sock*) ;
 scalar_t__ FUNC_15 (struct sock const*,int ) ;
 int FUNC_16 (struct sock const*) ;
 scalar_t__ FUNC_17 (struct sock const*,struct sock const*) ;
 int FUNC_18 (struct tcp_sock*,struct request_sock*) ;
 TYPE_4__* FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct tcp_sock*,void*) ;
 int FUNC_21 (struct sock const*) ;
 void* VAR_8 ;
 struct tcp_request_sock* FUNC_22 (struct request_sock*) ;
 struct tcp_sock* FUNC_23 (struct sock const*) ;

struct sock *FUNC_24(const struct sock *VAR_9,
          struct request_sock *VAR_10,
          struct sk_buff *VAR_11)
{
 struct sock *VAR_12 = FUNC_6(VAR_9, VAR_10, VAR_0);
 const struct inet_request_sock *VAR_13 = FUNC_8(VAR_10);
 struct tcp_request_sock *VAR_14 = FUNC_22(VAR_10);
 struct inet_connection_sock *VAR_15;
 struct tcp_sock *VAR_16, *VAR_17;
 u32 VAR_18;

 if (!VAR_12)
  return ((void*)0);

 VAR_15 = FUNC_5(VAR_12);
 VAR_17 = FUNC_23(VAR_12);
 VAR_16 = FUNC_23(VAR_9);

 FUNC_14(VAR_16, VAR_10, VAR_17);


 VAR_17->pred_flags = 0;

 VAR_18 = VAR_14->rcv_isn + 1;
 VAR_17->rcv_wup = VAR_18;
 FUNC_2(VAR_17->copied_seq, VAR_18);
 FUNC_2(VAR_17->rcv_nxt, VAR_18);
 VAR_17->segs_in = 1;

 VAR_18 = VAR_14->snt_isn + 1;
 VAR_17->snd_sml = VAR_17->snd_una = VAR_18;
 FUNC_2(VAR_17->snd_nxt, VAR_18);
 VAR_17->snd_up = VAR_18;

 FUNC_0(&VAR_17->tsq_node);
 FUNC_0(&VAR_17->tsorted_sent_queue);

 FUNC_20(VAR_17, VAR_14->rcv_isn);

 FUNC_12(&VAR_17->rtt_min, VAR_8, ~0U);
 VAR_15->icsk_ack.lrcvtime = VAR_8;

 VAR_17->lsndtime = VAR_8;
 VAR_12->sk_txhash = VAR_14->txhash;
 VAR_17->total_retrans = VAR_10->num_retrans;

 FUNC_21(VAR_12);
 FUNC_2(VAR_17->write_seq, VAR_17->pushed_seq = VAR_14->snt_isn + 1);

 if (FUNC_15(VAR_12, VAR_1))
  FUNC_7(VAR_12,
            FUNC_9(VAR_17));

 VAR_17->rx_opt.tstamp_ok = VAR_13->tstamp_ok;
 VAR_17->rx_opt.sack_ok = VAR_13->sack_ok;
 VAR_17->window_clamp = VAR_10->rsk_window_clamp;
 VAR_17->rcv_ssthresh = VAR_10->rsk_rcv_wnd;
 VAR_17->rcv_wnd = VAR_10->rsk_rcv_wnd;
 VAR_17->rx_opt.wscale_ok = VAR_13->wscale_ok;
 if (VAR_17->rx_opt.wscale_ok) {
  VAR_17->rx_opt.snd_wscale = VAR_13->snd_wscale;
  VAR_17->rx_opt.rcv_wscale = VAR_13->rcv_wscale;
 } else {
  VAR_17->rx_opt.snd_wscale = VAR_17->rx_opt.rcv_wscale = 0;
  VAR_17->window_clamp = FUNC_11(VAR_17->window_clamp, 65535U);
 }
 VAR_17->snd_wnd = FUNC_13(FUNC_19(VAR_11)->window) << VAR_17->rx_opt.snd_wscale;
 VAR_17->max_window = VAR_17->snd_wnd;

 if (VAR_17->rx_opt.tstamp_ok) {
  VAR_17->rx_opt.ts_recent = VAR_10->ts_recent;
  VAR_17->rx_opt.ts_recent_stamp = FUNC_10();
  VAR_17->tcp_header_len = sizeof(struct tcphdr) + VAR_3;
 } else {
  VAR_17->rx_opt.ts_recent_stamp = 0;
  VAR_17->tcp_header_len = sizeof(struct tcphdr);
 }
 if (VAR_10->num_timeout) {
  VAR_17->undo_marker = VAR_14->snt_isn;
  VAR_17->retrans_stamp = FUNC_4(VAR_14->snt_synack,
            VAR_7 / VAR_6);
 }
 VAR_17->tsoffset = VAR_14->ts_off;





 if (VAR_11->len >= VAR_5 + VAR_17->tcp_header_len)
  VAR_15->icsk_ack.last_seg_size = VAR_11->len - VAR_17->tcp_header_len;
 VAR_17->rx_opt.mss_clamp = VAR_10->mss;
 FUNC_18(VAR_17, VAR_10);
 VAR_17->fastopen_req = ((void*)0);
 FUNC_1(VAR_17->fastopen_rsk, ((void*)0));

 FUNC_3(FUNC_16(VAR_9), VAR_4);

 return VAR_12;
}
