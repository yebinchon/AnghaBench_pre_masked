
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct inet_sock {int inet_daddr; int inet_saddr; } ;


 int FUNC_0 (struct sk_buff*,int ,int ) ;
 struct inet_sock* FUNC_1 (struct sock*) ;

void FUNC_2(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 const struct inet_sock *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_2->inet_saddr, VAR_2->inet_daddr);
}
