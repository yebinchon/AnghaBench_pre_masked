
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ccid3_hc_tx_sock {scalar_t__ tx_t_ipi; int tx_x; scalar_t__ tx_s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct ccid3_hc_tx_sock *VAR_0)
{
 VAR_0->tx_t_ipi = FUNC_2(((u64)VAR_0->tx_s) << 6, VAR_0->tx_x);

 FUNC_0(VAR_0->tx_t_ipi == 0);
 FUNC_1("t_ipi=%u, s=%u, X=%u\n", VAR_0->tx_t_ipi,
         VAR_0->tx_s, (unsigned int)(VAR_0->tx_x >> 6));
}
