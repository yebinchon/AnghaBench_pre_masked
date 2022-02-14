
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_sock {int k; int pdu_unack_q; } ;


 struct llc_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct llc_sock *VAR_2 = FUNC_0(VAR_0);
 u8 VAR_3 = FUNC_1(&VAR_2->pdu_unack_q);

 if (VAR_2->k - VAR_3 < 1)
  VAR_2->k = 1;
 else
  VAR_2->k -= VAR_3;
 return 0;
}
