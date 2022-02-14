
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net*,struct sock*,struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_2, struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->dev;
 int VAR_6;




 VAR_4 = FUNC_2(VAR_4);
 if (!VAR_4)
  return VAR_1;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 != VAR_0)
  VAR_6 = FUNC_0(VAR_4);
 return VAR_6;
}
