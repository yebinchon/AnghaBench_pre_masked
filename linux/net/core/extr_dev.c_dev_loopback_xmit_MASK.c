
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int ip_summed; int pkt_type; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;

int FUNC_7(struct net *VAR_2, struct sock *VAR_3, struct sk_buff *VAR_4)
{
 FUNC_6(VAR_4);
 FUNC_1(VAR_4, FUNC_5(VAR_4));
 VAR_4->pkt_type = VAR_1;
 VAR_4->ip_summed = VAR_0;
 FUNC_0(!FUNC_3(VAR_4));
 FUNC_4(VAR_4);
 FUNC_2(VAR_4);
 return 0;
}
