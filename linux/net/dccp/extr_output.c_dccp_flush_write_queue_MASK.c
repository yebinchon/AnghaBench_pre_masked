
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_write_queue; } ;
struct sk_buff {int dummy; } ;
struct dccp_sock {int dccps_hc_tx_ccid; } ;






 int FUNC_0 (char*) ;
 long FUNC_1 (int ,struct sock*,struct sk_buff*) ;
 int FUNC_2 (long) ;
 int FUNC_3 (char*,long) ;
 struct dccp_sock* FUNC_4 (struct sock*) ;
 long FUNC_5 (struct sock*,long) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sk_buff*) ;
 long FUNC_8 (long) ;
 int FUNC_9 (int *) ;
 struct sk_buff* FUNC_10 (int *) ;

void FUNC_11(struct sock *VAR_0, long *VAR_1)
{
 struct dccp_sock *VAR_2 = FUNC_4(VAR_0);
 struct sk_buff *VAR_3;
 long VAR_4, VAR_5;

 while (*VAR_1 > 0 && (VAR_3 = FUNC_10(&VAR_0->sk_write_queue))) {
  VAR_5 = FUNC_1(VAR_2->dccps_hc_tx_ccid, VAR_0, VAR_3);

  switch (FUNC_2(VAR_5)) {
  case 128:





   FUNC_0("CCID did not manage to send all packets\n");
   return;
  case 131:
   VAR_4 = FUNC_8(VAR_5);
   if (VAR_4 > *VAR_1)
    return;
   VAR_5 = FUNC_5(VAR_0, VAR_4);
   if (VAR_5 < 0)
    return;
   *VAR_1 -= (VAR_4 - VAR_5);

   break;
  case 129:
   FUNC_6(VAR_0);
   break;
  case 130:
   FUNC_9(&VAR_0->sk_write_queue);
   FUNC_7(VAR_3);
   FUNC_3("packet discarded due to err=%ld\n", VAR_5);
  }
 }
}
