
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcphdr {int dummy; } ;
struct TYPE_8__ {int rcv_wscale; scalar_t__ ts_recent_stamp; scalar_t__ user_mss; scalar_t__ mss_clamp; } ;
struct tcp_sock {int tcp_header_len; scalar_t__ window_clamp; scalar_t__ rcv_nxt; int copied_seq; scalar_t__ rcv_wup; int rcv_tstamp; int repair; scalar_t__ write_seq; int snd_nxt; scalar_t__ snd_up; scalar_t__ snd_sml; scalar_t__ snd_una; scalar_t__ snd_wnd; int rcv_wnd; int rcv_ssthresh; TYPE_3__ rx_opt; scalar_t__ advmss; scalar_t__ max_window; TYPE_1__* af_specific; } ;
struct sock {int sk_userlocks; scalar_t__ sk_err; } ;
struct dst_entry {int dummy; } ;
typedef int __u8 ;
struct TYPE_10__ {scalar_t__ icsk_retransmits; int icsk_rto; } ;
struct TYPE_7__ {int sysctl_tcp_window_scaling; scalar_t__ sysctl_tcp_timestamps; } ;
struct TYPE_9__ {TYPE_2__ ipv4; } ;
struct TYPE_6__ {scalar_t__ (* md5_lookup ) (struct sock*,struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct dst_entry* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct dst_entry const*,int ) ;
 int FUNC_3 (struct dst_entry const*) ;
 int FUNC_4 (struct dst_entry const*) ;
 TYPE_5__* FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (int) ;
 TYPE_4__* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int ) ;
 scalar_t__ FUNC_9 (struct sock*,struct sock*) ;
 int FUNC_10 (struct sock*,struct dst_entry const*) ;
 int FUNC_11 (struct tcp_sock*) ;
 scalar_t__ FUNC_12 (struct sock*) ;
 int FUNC_13 (struct tcp_sock*,int ) ;
 int FUNC_14 (struct sock*) ;
 int VAR_6 ;
 scalar_t__ FUNC_15 (struct tcp_sock*,int ) ;
 int FUNC_16 (struct sock*) ;
 scalar_t__ FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*,scalar_t__,scalar_t__,int *,scalar_t__*,int ,int *,scalar_t__) ;
 struct tcp_sock* FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*,int ) ;
 int FUNC_21 (struct sock*) ;
 int FUNC_22 (struct sock*) ;

__attribute__((used)) static void FUNC_23(struct sock *VAR_7)
{
 const struct dst_entry *VAR_8 = FUNC_1(VAR_7);
 struct tcp_sock *VAR_9 = FUNC_19(VAR_7);
 __u8 VAR_10;
 u32 VAR_11;




 VAR_9->tcp_header_len = sizeof(struct tcphdr);
 if (FUNC_7(VAR_7)->ipv4.sysctl_tcp_timestamps)
  VAR_9->tcp_header_len += VAR_5;







 if (VAR_9->rx_opt.user_mss)
  VAR_9->rx_opt.mss_clamp = VAR_9->rx_opt.user_mss;
 VAR_9->max_window = 0;
 FUNC_16(VAR_7);
 FUNC_20(VAR_7, FUNC_4(VAR_8));

 FUNC_10(VAR_7, VAR_8);

 if (!VAR_9->window_clamp)
  VAR_9->window_clamp = FUNC_2(VAR_8, VAR_1);
 VAR_9->advmss = FUNC_15(VAR_9, FUNC_3(VAR_8));

 FUNC_14(VAR_7);


 if (VAR_7->sk_userlocks & VAR_3 &&
     (VAR_9->window_clamp > FUNC_12(VAR_7) || VAR_9->window_clamp == 0))
  VAR_9->window_clamp = FUNC_12(VAR_7);

 VAR_11 = FUNC_17(VAR_7);
 if (VAR_11 == 0)
  VAR_11 = FUNC_2(VAR_8, VAR_0);

 FUNC_18(VAR_7, FUNC_12(VAR_7),
      VAR_9->advmss - (VAR_9->rx_opt.ts_recent_stamp ? VAR_9->tcp_header_len - sizeof(struct tcphdr) : 0),
      &VAR_9->rcv_wnd,
      &VAR_9->window_clamp,
      FUNC_7(VAR_7)->ipv4.sysctl_tcp_window_scaling,
      &VAR_10,
      VAR_11);

 VAR_9->rx_opt.rcv_wscale = VAR_10;
 VAR_9->rcv_ssthresh = VAR_9->rcv_wnd;

 VAR_7->sk_err = 0;
 FUNC_8(VAR_7, VAR_2);
 VAR_9->snd_wnd = 0;
 FUNC_13(VAR_9, 0);
 FUNC_22(VAR_7);
 VAR_9->snd_una = VAR_9->write_seq;
 VAR_9->snd_sml = VAR_9->write_seq;
 VAR_9->snd_up = VAR_9->write_seq;
 FUNC_0(VAR_9->snd_nxt, VAR_9->write_seq);

 if (FUNC_6(!VAR_9->repair))
  VAR_9->rcv_nxt = 0;
 else
  VAR_9->rcv_tstamp = VAR_6;
 VAR_9->rcv_wup = VAR_9->rcv_nxt;
 FUNC_0(VAR_9->copied_seq, VAR_9->rcv_nxt);

 FUNC_5(VAR_7)->icsk_rto = FUNC_21(VAR_7);
 FUNC_5(VAR_7)->icsk_retransmits = 0;
 FUNC_11(VAR_9);
}
