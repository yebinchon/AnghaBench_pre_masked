
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct dccp_sock {scalar_t__ dccps_l_ack_ratio; int dccps_mss_cache; } ;
struct ccid2_hc_tx_sock {unsigned int tx_ssthresh; int tx_rpdupack; int tx_av_chunks; int tx_rtotimer; struct sock* sk; scalar_t__ tx_cwnd_used; int tx_cwnd_stamp; int tx_lsndtime; int tx_last_cong; int tx_rto; int tx_cwnd; int tx_expected_wnd; } ;
struct ccid {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ccid2_hc_tx_sock*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ccid2_hc_tx_sock* FUNC_3 (struct ccid*) ;
 struct dccp_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ccid *VAR_4, struct sock *VAR_5)
{
 struct ccid2_hc_tx_sock *VAR_6 = FUNC_3(VAR_4);
 struct dccp_sock *VAR_7 = FUNC_4(VAR_5);
 u32 VAR_8;


 VAR_6->tx_ssthresh = ~0U;


 VAR_6->tx_cwnd = FUNC_5(VAR_7->dccps_mss_cache);
 VAR_6->tx_expected_wnd = VAR_6->tx_cwnd;


 VAR_8 = FUNC_0(VAR_6->tx_cwnd, 2);
 if (VAR_7->dccps_l_ack_ratio == 0 || VAR_7->dccps_l_ack_ratio > VAR_8)
  VAR_7->dccps_l_ack_ratio = VAR_8;


 if (FUNC_2(VAR_6))
  return -VAR_1;

 VAR_6->tx_rto = VAR_0;
 VAR_6->tx_rpdupack = -1;
 VAR_6->tx_last_cong = VAR_6->tx_lsndtime = VAR_6->tx_cwnd_stamp = VAR_3;
 VAR_6->tx_cwnd_used = 0;
 VAR_6->sk = VAR_5;
 FUNC_6(&VAR_6->tx_rtotimer, VAR_2, 0);
 FUNC_1(&VAR_6->tx_av_chunks);
 return 0;
}
