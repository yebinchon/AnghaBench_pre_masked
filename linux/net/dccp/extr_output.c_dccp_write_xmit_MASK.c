
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dccp_sock {int dccps_xmit_timer; int dccps_hc_tx_ccid; } ;






 int FUNC_0 (int ,struct sock*,struct sk_buff*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sock*) ;
 struct dccp_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct sock*,int *,scalar_t__) ;

void FUNC_9(struct sock *VAR_1)
{
 struct dccp_sock *VAR_2 = FUNC_5(VAR_1);
 struct sk_buff *VAR_3;

 while ((VAR_3 = FUNC_4(VAR_1))) {
  int VAR_4 = FUNC_0(VAR_2->dccps_hc_tx_ccid, VAR_1, VAR_3);

  switch (FUNC_1(VAR_4)) {
  case 128:
   return;
  case 131:
   FUNC_8(VAR_1, &VAR_2->dccps_xmit_timer,
           VAR_0 + FUNC_7(VAR_4));
   return;
  case 129:
   FUNC_6(VAR_1);
   break;
  case 130:
   FUNC_3(VAR_1, VAR_3);
   FUNC_2("packet discarded due to err=%d\n", VAR_4);
  }
 }
}
