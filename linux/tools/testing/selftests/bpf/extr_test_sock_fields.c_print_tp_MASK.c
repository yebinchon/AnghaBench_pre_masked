
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_tcp_sock {int snd_cwnd; int srtt_us; int rtt_min; int snd_ssthresh; int rcv_nxt; int snd_nxt; int snd_una; int mss_cache; int ecn_flags; int rate_delivered; int rate_interval_us; int packets_out; int retrans_out; int total_retrans; int segs_in; int data_segs_in; int segs_out; int data_segs_out; int lost_out; int sacked_out; int bytes_acked; int bytes_received; } ;


 int FUNC_0 (char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct bpf_tcp_sock *VAR_0)
{
 FUNC_0("snd_cwnd:%u srtt_us:%u rtt_min:%u snd_ssthresh:%u rcv_nxt:%u "
        "snd_nxt:%u snd:una:%u mss_cache:%u ecn_flags:%u "
        "rate_delivered:%u rate_interval_us:%u packets_out:%u "
        "retrans_out:%u total_retrans:%u segs_in:%u data_segs_in:%u "
        "segs_out:%u data_segs_out:%u lost_out:%u sacked_out:%u "
        "bytes_received:%llu bytes_acked:%llu\n",
        VAR_0->snd_cwnd, VAR_0->srtt_us, VAR_0->rtt_min, VAR_0->snd_ssthresh,
        VAR_0->rcv_nxt, VAR_0->snd_nxt, VAR_0->snd_una, VAR_0->mss_cache,
        VAR_0->ecn_flags, VAR_0->rate_delivered, VAR_0->rate_interval_us,
        VAR_0->packets_out, VAR_0->retrans_out, VAR_0->total_retrans,
        VAR_0->segs_in, VAR_0->data_segs_in, VAR_0->segs_out,
        VAR_0->data_segs_out, VAR_0->lost_out, VAR_0->sacked_out,
        VAR_0->bytes_received, VAR_0->bytes_acked);
}
