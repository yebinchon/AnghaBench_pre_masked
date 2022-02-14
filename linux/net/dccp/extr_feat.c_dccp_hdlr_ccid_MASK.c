
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sock {int dummy; } ;
struct dccp_sock {struct ccid* dccps_hc_tx_ccid; struct ccid* dccps_hc_rx_ccid; } ;
struct ccid {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccid*,struct sock*) ;
 int FUNC_1 (struct ccid*,struct sock*) ;
 struct ccid* FUNC_2 (int ,struct sock*,int) ;
 struct dccp_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_1, u64 VAR_2, bool VAR_3)
{
 struct dccp_sock *VAR_4 = FUNC_3(VAR_1);
 struct ccid *VAR_5 = FUNC_2(VAR_2, VAR_1, VAR_3);

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 if (VAR_3) {
  FUNC_0(VAR_4->dccps_hc_rx_ccid, VAR_1);
  VAR_4->dccps_hc_rx_ccid = VAR_5;
 } else {
  FUNC_1(VAR_4->dccps_hc_tx_ccid, VAR_1);
  VAR_4->dccps_hc_tx_ccid = VAR_5;
 }
 return 0;
}
