
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dccp_sock {int dccps_l_ack_ratio; int dccps_l_seq_win; int dccps_r_seq_win; } ;
struct ccid2_seq {scalar_t__ ccid2s_sent; } ;
struct ccid2_hc_tx_sock {int tx_cwnd; int tx_ssthresh; int tx_packets_acked; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,unsigned int) ;
 int FUNC_1 (struct sock*,int) ;
 struct ccid2_hc_tx_sock* FUNC_2 (struct sock*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct sock*,scalar_t__) ;
 struct dccp_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_2, struct ccid2_seq *VAR_3,
     unsigned int *VAR_4)
{
 struct ccid2_hc_tx_sock *VAR_5 = FUNC_2(VAR_2);
 struct dccp_sock *VAR_6 = FUNC_4(VAR_2);
 int VAR_7 = VAR_5->tx_cwnd / VAR_6->dccps_l_ack_ratio;

 if (VAR_5->tx_cwnd < VAR_6->dccps_l_seq_win &&
     VAR_7 < VAR_6->dccps_r_seq_win) {
  if (VAR_5->tx_cwnd < VAR_5->tx_ssthresh) {
   if (*VAR_4 > 0 && ++VAR_5->tx_packets_acked >= 2) {
    VAR_5->tx_cwnd += 1;
    *VAR_4 -= 1;
    VAR_5->tx_packets_acked = 0;
   }
  } else if (++VAR_5->tx_packets_acked >= VAR_5->tx_cwnd) {
   VAR_5->tx_cwnd += 1;
   VAR_5->tx_packets_acked = 0;
  }
 }





 if (VAR_7 * VAR_0 >= VAR_6->dccps_r_seq_win)
  FUNC_0(VAR_2, VAR_6->dccps_l_ack_ratio * 2);
 else if (VAR_7 * VAR_0 < VAR_6->dccps_r_seq_win/2)
  FUNC_0(VAR_2, VAR_6->dccps_l_ack_ratio / 2 ? : 1U);

 if (VAR_5->tx_cwnd * VAR_0 >= VAR_6->dccps_l_seq_win)
  FUNC_1(VAR_2, VAR_6->dccps_l_seq_win * 2);
 else if (VAR_5->tx_cwnd * VAR_0 < VAR_6->dccps_l_seq_win/2)
  FUNC_1(VAR_2, VAR_6->dccps_l_seq_win / 2);
 FUNC_3(VAR_2, VAR_1 - VAR_3->ccid2s_sent);
}
