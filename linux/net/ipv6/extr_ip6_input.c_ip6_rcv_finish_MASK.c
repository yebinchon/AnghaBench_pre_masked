
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net*,struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct net *VAR_1, struct sock *VAR_2, struct sk_buff *VAR_3)
{



 VAR_3 = FUNC_2(VAR_3);
 if (!VAR_3)
  return VAR_0;
 FUNC_1(VAR_1, VAR_2, VAR_3);

 return FUNC_0(VAR_3);
}
