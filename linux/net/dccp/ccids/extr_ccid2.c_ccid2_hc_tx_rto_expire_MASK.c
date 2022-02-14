
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct ccid2_hc_tx_sock {int tx_rto; int tx_ssthresh; int tx_cwnd; int tx_rpdupack; int tx_rtotimer; scalar_t__ tx_rpseq; scalar_t__ tx_packets_acked; int tx_seqh; int tx_seqt; scalar_t__ tx_pipe; struct sock* sk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int) ;
 int FUNC_3 (struct ccid2_hc_tx_sock*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct sock*) ;
 struct ccid2_hc_tx_sock* FUNC_6 (int ,struct timer_list*,int ) ;
 struct ccid2_hc_tx_sock* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (struct sock*,int *,scalar_t__) ;
 scalar_t__ FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_6)
{
 struct ccid2_hc_tx_sock *VAR_7 = FUNC_6(VAR_7, VAR_6, VAR_5);
 struct sock *VAR_8 = VAR_7->sk;
 const bool VAR_9 = FUNC_3(VAR_7);

 FUNC_0(VAR_8);
 if (FUNC_8(VAR_8)) {
  FUNC_7(VAR_8, &VAR_7->tx_rtotimer, VAR_4 + VAR_2 / 5);
  goto out;
 }

 FUNC_4("RTO_EXPIRE\n");

 if (VAR_8->sk_state == VAR_0)
  goto out;


 VAR_7->tx_rto <<= 1;
 if (VAR_7->tx_rto > VAR_1)
  VAR_7->tx_rto = VAR_1;


 VAR_7->tx_ssthresh = VAR_7->tx_cwnd / 2;
 if (VAR_7->tx_ssthresh < 2)
  VAR_7->tx_ssthresh = 2;
 VAR_7->tx_cwnd = 1;
 VAR_7->tx_pipe = 0;


 VAR_7->tx_seqt = VAR_7->tx_seqh;
 VAR_7->tx_packets_acked = 0;


 VAR_7->tx_rpseq = 0;
 VAR_7->tx_rpdupack = -1;
 FUNC_2(VAR_8, 1);


 if (VAR_9)
  FUNC_5(VAR_8);

 FUNC_7(VAR_8, &VAR_7->tx_rtotimer, VAR_4 + VAR_7->tx_rto);
out:
 FUNC_1(VAR_8);
 FUNC_9(VAR_8);
}
