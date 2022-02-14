
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int doff; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int FUNC_0 (struct sock*,struct sk_buff*,int) ;

int FUNC_1(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct tcphdr *VAR_2 = (struct tcphdr *)VAR_1->data;

 return FUNC_0(VAR_0, VAR_1, VAR_2->doff * 4);
}
