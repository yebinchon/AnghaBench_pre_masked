
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ protocol; int dev; } ;
struct net {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,scalar_t__,int*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*,int) ;

int FUNC_8(struct net *VAR_4, struct sock *VAR_5, struct sk_buff *VAR_6)
{
 FUNC_6(VAR_6, VAR_1);
 if (!FUNC_4(VAR_6->dev, VAR_6))
  goto drop;

 FUNC_1(VAR_6);

 if (VAR_6->ip_summed == VAR_0 &&
     (VAR_6->protocol == FUNC_3(VAR_3) ||
      VAR_6->protocol == FUNC_3(VAR_2))) {
  int VAR_7;

  if (!FUNC_0(VAR_6, VAR_6->protocol, &VAR_7))
   goto drop;

  FUNC_7(VAR_6, VAR_7);
 }

 FUNC_2(VAR_6);

 return 0;

drop:
 FUNC_5(VAR_6);
 return 0;
}
