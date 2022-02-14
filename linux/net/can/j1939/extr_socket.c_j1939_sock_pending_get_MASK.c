
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct j1939_sock {int skb_pending; } ;


 int FUNC_0 (int *) ;
 struct j1939_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_0)
{
 struct j1939_sock *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_1->skb_pending);
}
