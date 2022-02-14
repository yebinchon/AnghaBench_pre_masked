
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dccp_sock {int * dccps_hc_tx_ccid; } ;


 int FUNC_0 (int *,struct sock*) ;
 struct dccp_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct dccp_sock *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->dccps_hc_tx_ccid, VAR_0);
 VAR_1->dccps_hc_tx_ccid = ((void*)0);
 FUNC_2(VAR_0);
}
