
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct j1939_sock {int waitq; int skb_pending; } ;


 int FUNC_0 (int *) ;
 struct j1939_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct sock *VAR_0)
{
 struct j1939_sock *VAR_1 = FUNC_1(VAR_0);


 if (!FUNC_0(&VAR_1->skb_pending))
  FUNC_2(&VAR_1->waitq);
}
