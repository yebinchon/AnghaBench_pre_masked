
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* netdev; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;
 struct sk_buff* FUNC_1 (struct sock*,struct sk_buff*) ;

struct sk_buff *FUNC_2(struct sock *VAR_0,
          struct net_device *VAR_1,
          struct sk_buff *VAR_2)
{
 if (VAR_1 == FUNC_0(VAR_0)->netdev)
  return VAR_2;

 return FUNC_1(VAR_0, VAR_2);
}
