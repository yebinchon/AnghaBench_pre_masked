
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_policy_walk {int dummy; } ;
struct netlink_callback {TYPE_1__* skb; scalar_t__ args; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int sk; } ;


 struct net* FUNC_0 (int ) ;
 int FUNC_1 (struct xfrm_policy_walk*,struct net*) ;

__attribute__((used)) static int FUNC_2(struct netlink_callback *VAR_0)
{
 struct xfrm_policy_walk *VAR_1 = (struct xfrm_policy_walk *)VAR_0->args;
 struct net *VAR_2 = FUNC_0(VAR_0->skb->sk);

 FUNC_1(VAR_1, VAR_2);
 return 0;
}
