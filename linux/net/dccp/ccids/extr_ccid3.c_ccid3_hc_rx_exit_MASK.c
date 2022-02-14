
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid3_hc_rx_sock {int rx_li_hist; int rx_hist; } ;


 struct ccid3_hc_rx_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct ccid3_hc_rx_sock *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_1->rx_hist);
 FUNC_1(&VAR_1->rx_li_hist);
}
