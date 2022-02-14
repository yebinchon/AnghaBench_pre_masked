
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid2_seq {scalar_t__ ccid2s_sent; } ;
struct ccid2_hc_tx_sock {unsigned int tx_cwnd; int tx_ssthresh; scalar_t__ tx_last_cong; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct sock*) ;
 struct ccid2_hc_tx_sock* FUNC_1 (struct sock*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_1, struct ccid2_seq *VAR_2)
{
 struct ccid2_hc_tx_sock *VAR_3 = FUNC_1(VAR_1);

 if ((s32)(VAR_2->ccid2s_sent - VAR_3->tx_last_cong) < 0) {
  FUNC_2("Multiple losses in an RTT---treating as one\n");
  return;
 }

 VAR_3->tx_last_cong = VAR_0;

 VAR_3->tx_cwnd = VAR_3->tx_cwnd / 2 ? : 1U;
 VAR_3->tx_ssthresh = FUNC_3(VAR_3->tx_cwnd, 2U);

 FUNC_0(VAR_1);
}
