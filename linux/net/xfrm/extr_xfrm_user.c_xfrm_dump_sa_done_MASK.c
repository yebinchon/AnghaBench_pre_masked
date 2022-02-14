
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state_walk {int dummy; } ;
struct sock {int dummy; } ;
struct netlink_callback {scalar_t__* args; TYPE_1__* skb; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct sock* sk; } ;


 struct net* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct xfrm_state_walk*,struct net*) ;

__attribute__((used)) static int FUNC_2(struct netlink_callback *VAR_0)
{
 struct xfrm_state_walk *VAR_1 = (struct xfrm_state_walk *) &VAR_0->args[1];
 struct sock *VAR_2 = VAR_0->skb->sk;
 struct net *VAR_3 = FUNC_0(VAR_2);

 if (VAR_0->args[0])
  FUNC_1(VAR_1, VAR_3);
 return 0;
}
