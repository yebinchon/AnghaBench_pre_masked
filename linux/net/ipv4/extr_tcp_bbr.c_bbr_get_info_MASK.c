
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bbr_bw_lo; int bbr_bw_hi; int bbr_cwnd_gain; int bbr_pacing_gain; int bbr_min_rtt; } ;
union tcp_cc_info {TYPE_1__ bbr; } ;
typedef int u64 ;
typedef int u32 ;
struct tcp_sock {int mss_cache; } ;
struct sock {int dummy; } ;
struct bbr {int cwnd_gain; int pacing_gain; int min_rtt_us; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 struct bbr* FUNC_1 (struct sock*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static size_t FUNC_4(struct sock *VAR_4, u32 VAR_5, int *VAR_6,
      union tcp_cc_info *VAR_7)
{
 if (VAR_5 & (1 << (VAR_1 - 1)) ||
     VAR_5 & (1 << (VAR_2 - 1))) {
  struct tcp_sock *VAR_8 = FUNC_3(VAR_4);
  struct bbr *VAR_9 = FUNC_1(VAR_4);
  u64 VAR_10 = FUNC_0(VAR_4);

  VAR_10 = VAR_10 * VAR_8->mss_cache * VAR_3 >> VAR_0;
  FUNC_2(&VAR_7->bbr, 0, sizeof(VAR_7->bbr));
  VAR_7->bbr.bbr_bw_lo = (u32)VAR_10;
  VAR_7->bbr.bbr_bw_hi = (u32)(VAR_10 >> 32);
  VAR_7->bbr.bbr_min_rtt = VAR_9->min_rtt_us;
  VAR_7->bbr.bbr_pacing_gain = VAR_9->pacing_gain;
  VAR_7->bbr.bbr_cwnd_gain = VAR_9->cwnd_gain;
  *VAR_6 = VAR_1;
  return sizeof(VAR_7->bbr);
 }
 return 0;
}
