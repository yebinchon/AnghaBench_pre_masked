
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct rtable {int dummy; } ;
struct net {int dummy; } ;
struct iphdr {int dummy; } ;
struct flowi4 {int dummy; } ;


 int FUNC_0 (struct rtable*) ;
 int FUNC_1 (struct net*,struct flowi4*,struct sock*,struct iphdr const*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct rtable*,struct sk_buff*,struct flowi4*,int) ;
 struct rtable* FUNC_3 (struct net*,struct flowi4*) ;
 int FUNC_4 (struct rtable*) ;
 struct net* FUNC_5 (struct sock*) ;

void FUNC_6(struct sk_buff *VAR_0, struct sock *VAR_1)
{
 const struct iphdr *VAR_2 = (const struct iphdr *) VAR_0->data;
 struct flowi4 VAR_3;
 struct rtable *VAR_4;
 struct net *VAR_5 = FUNC_5(VAR_1);

 FUNC_1(VAR_5, &VAR_3, VAR_1, VAR_2, 0, 0, 0, 0, 0);
 VAR_4 = FUNC_3(VAR_5, &VAR_3);
 if (!FUNC_0(VAR_4)) {
  FUNC_2(VAR_4, VAR_0, &VAR_3, 0);
  FUNC_4(VAR_4);
 }
}
