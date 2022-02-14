
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int tcp_mstamp; int snd_ssthresh; } ;
struct sock {int sk_pacing_status; } ;
struct bbr {scalar_t__* extra_acked; scalar_t__ extra_acked_win_idx; scalar_t__ extra_acked_win_rtts; scalar_t__ ack_epoch_acked; int ack_epoch_mstamp; scalar_t__ cycle_idx; scalar_t__ cycle_mstamp; scalar_t__ full_bw_cnt; scalar_t__ full_bw; scalar_t__ full_bw_reached; scalar_t__ idle_restart; scalar_t__ round_start; scalar_t__ has_seen_rtt; scalar_t__ rtt_cnt; int bw; int min_rtt_stamp; int min_rtt_us; scalar_t__ probe_rtt_round_done; scalar_t__ probe_rtt_done_stamp; scalar_t__ packet_conservation; int prev_ca_state; scalar_t__ next_rtt_delivered; scalar_t__ prior_cwnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int *,int ,int ) ;
 struct bbr* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_6 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_7(VAR_5);
 struct bbr *VAR_7 = FUNC_4(VAR_5);

 VAR_7->prior_cwnd = 0;
 VAR_6->snd_ssthresh = VAR_3;
 VAR_7->rtt_cnt = 0;
 VAR_7->next_rtt_delivered = 0;
 VAR_7->prev_ca_state = VAR_2;
 VAR_7->packet_conservation = 0;

 VAR_7->probe_rtt_done_stamp = 0;
 VAR_7->probe_rtt_round_done = 0;
 VAR_7->min_rtt_us = FUNC_6(VAR_6);
 VAR_7->min_rtt_stamp = VAR_4;

 FUNC_5(&VAR_7->bw, VAR_7->rtt_cnt, 0);

 VAR_7->has_seen_rtt = 0;
 FUNC_0(VAR_5);

 VAR_7->round_start = 0;
 VAR_7->idle_restart = 0;
 VAR_7->full_bw_reached = 0;
 VAR_7->full_bw = 0;
 VAR_7->full_bw_cnt = 0;
 VAR_7->cycle_mstamp = 0;
 VAR_7->cycle_idx = 0;
 FUNC_1(VAR_5);
 FUNC_2(VAR_5);

 VAR_7->ack_epoch_mstamp = VAR_6->tcp_mstamp;
 VAR_7->ack_epoch_acked = 0;
 VAR_7->extra_acked_win_rtts = 0;
 VAR_7->extra_acked_win_idx = 0;
 VAR_7->extra_acked[0] = 0;
 VAR_7->extra_acked[1] = 0;

 FUNC_3(&VAR_5->sk_pacing_status, VAR_1, VAR_0);
}
