
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct tcp_sock {unsigned long data_segs_out; unsigned long total_retrans; int snd_cwnd; int reordering; int snd_ssthresh; int delivered; int delivered_ce; int write_seq; int snd_una; unsigned long bytes_sent; unsigned long bytes_retrans; int dsack_dups; int reord_seen; int srtt_us; int rate_app_limited; } ;
struct tcp_info {unsigned long tcpi_busy_time; unsigned long tcpi_rwnd_limited; unsigned long tcpi_sndbuf_limited; } ;
struct sock {int sk_pacing_rate; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int icsk_retransmits; int icsk_ca_state; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (struct sock const*) ;
 int FUNC_3 (struct sk_buff*,int ,int) ;
 int FUNC_4 (struct sk_buff*,int ,unsigned long,int ) ;
 int FUNC_5 (struct sk_buff*,int ,int) ;
 unsigned long FUNC_6 (struct tcp_sock const*) ;
 int FUNC_7 (struct tcp_sock const*,struct tcp_info*) ;
 int FUNC_8 (struct tcp_sock const*) ;
 int FUNC_9 () ;
 struct tcp_sock* FUNC_10 (struct sock const*) ;

struct sk_buff *FUNC_11(const struct sock *VAR_24)
{
 const struct tcp_sock *VAR_25 = FUNC_10(VAR_24);
 struct sk_buff *VAR_26;
 struct tcp_info VAR_27;
 unsigned long VAR_28;
 u64 VAR_29;

 VAR_26 = FUNC_1(FUNC_9(), VAR_0);
 if (!VAR_26)
  return ((void*)0);

 FUNC_7(VAR_25, &VAR_27);
 FUNC_4(VAR_26, VAR_1,
     VAR_27.tcpi_busy_time, VAR_13);
 FUNC_4(VAR_26, VAR_17,
     VAR_27.tcpi_rwnd_limited, VAR_13);
 FUNC_4(VAR_26, VAR_18,
     VAR_27.tcpi_sndbuf_limited, VAR_13);
 FUNC_4(VAR_26, VAR_5,
     VAR_25->data_segs_out, VAR_13);
 FUNC_4(VAR_26, VAR_23,
     VAR_25->total_retrans, VAR_13);

 VAR_28 = FUNC_0(VAR_24->sk_pacing_rate);
 VAR_29 = (VAR_28 != ~0UL) ? VAR_28 : ~0ULL;
 FUNC_4(VAR_26, VAR_12, VAR_29, VAR_13);

 VAR_29 = FUNC_6(VAR_25);
 FUNC_4(VAR_26, VAR_8, VAR_29, VAR_13);

 FUNC_3(VAR_26, VAR_20, VAR_25->snd_cwnd);
 FUNC_3(VAR_26, VAR_15, VAR_25->reordering);
 FUNC_3(VAR_26, VAR_11, FUNC_8(VAR_25));

 FUNC_5(VAR_26, VAR_14, FUNC_2(VAR_24)->icsk_retransmits);
 FUNC_5(VAR_26, VAR_9, !!VAR_25->rate_app_limited);
 FUNC_3(VAR_26, VAR_21, VAR_25->snd_ssthresh);
 FUNC_3(VAR_26, VAR_6, VAR_25->delivered);
 FUNC_3(VAR_26, VAR_7, VAR_25->delivered_ce);

 FUNC_3(VAR_26, VAR_19, VAR_25->write_seq - VAR_25->snd_una);
 FUNC_5(VAR_26, VAR_4, FUNC_2(VAR_24)->icsk_ca_state);

 FUNC_4(VAR_26, VAR_3, VAR_25->bytes_sent,
     VAR_13);
 FUNC_4(VAR_26, VAR_2, VAR_25->bytes_retrans,
     VAR_13);
 FUNC_3(VAR_26, VAR_10, VAR_25->dsack_dups);
 FUNC_3(VAR_26, VAR_16, VAR_25->reord_seen);
 FUNC_3(VAR_26, VAR_22, VAR_25->srtt_us >> 3);

 return VAR_26;
}
