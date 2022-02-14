
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_tcp_sock {int bytes_acked; int bytes_received; int sacked_out; int lost_out; int data_segs_out; int segs_out; int data_segs_in; int segs_in; int total_retrans; int retrans_out; int packets_out; int rate_interval_us; int rate_delivered; int ecn_flags; int mss_cache; int snd_una; int snd_nxt; int rcv_nxt; int snd_ssthresh; int rtt_min; int srtt_us; int snd_cwnd; } ;



__attribute__((used)) static void FUNC_0(struct bpf_tcp_sock *VAR_0,
    const struct bpf_tcp_sock *VAR_1)
{
 VAR_0->snd_cwnd = VAR_1->snd_cwnd;
 VAR_0->srtt_us = VAR_1->srtt_us;
 VAR_0->rtt_min = VAR_1->rtt_min;
 VAR_0->snd_ssthresh = VAR_1->snd_ssthresh;
 VAR_0->rcv_nxt = VAR_1->rcv_nxt;
 VAR_0->snd_nxt = VAR_1->snd_nxt;
 VAR_0->snd_una = VAR_1->snd_una;
 VAR_0->mss_cache = VAR_1->mss_cache;
 VAR_0->ecn_flags = VAR_1->ecn_flags;
 VAR_0->rate_delivered = VAR_1->rate_delivered;
 VAR_0->rate_interval_us = VAR_1->rate_interval_us;
 VAR_0->packets_out = VAR_1->packets_out;
 VAR_0->retrans_out = VAR_1->retrans_out;
 VAR_0->total_retrans = VAR_1->total_retrans;
 VAR_0->segs_in = VAR_1->segs_in;
 VAR_0->data_segs_in = VAR_1->data_segs_in;
 VAR_0->segs_out = VAR_1->segs_out;
 VAR_0->data_segs_out = VAR_1->data_segs_out;
 VAR_0->lost_out = VAR_1->lost_out;
 VAR_0->sacked_out = VAR_1->sacked_out;
 VAR_0->bytes_received = VAR_1->bytes_received;
 VAR_0->bytes_acked = VAR_1->bytes_acked;
}
