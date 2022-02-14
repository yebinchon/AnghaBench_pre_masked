
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccid2_hc_tx_sock {int tx_expected_wnd; } ;



__attribute__((used)) static void FUNC_0(struct ccid2_hc_tx_sock *VAR_0, u32 VAR_1)
{
 VAR_0->tx_expected_wnd = (3 * VAR_0->tx_expected_wnd + VAR_1) / 4;
}
