
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid2_hc_tx_sock {int tx_cwnd; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,unsigned int) ;
 struct ccid2_hc_tx_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1)
{
 struct ccid2_hc_tx_sock *VAR_2 = FUNC_1(VAR_1);
 if (FUNC_2(VAR_1, VAR_0) > VAR_2->tx_cwnd)
  FUNC_0(VAR_1, VAR_2->tx_cwnd/2 ? : 1U);
}
