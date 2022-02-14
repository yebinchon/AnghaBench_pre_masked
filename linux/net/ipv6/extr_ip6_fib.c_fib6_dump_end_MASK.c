
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_callback {int* args; void* done; TYPE_1__* skb; } ;
struct net {int dummy; } ;
struct fib6_walker {int dummy; } ;
struct TYPE_2__ {int sk; } ;


 int FUNC_0 (struct net*,struct fib6_walker*) ;
 int FUNC_1 (struct fib6_walker*) ;
 struct net* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct netlink_callback *VAR_0)
{
 struct net *VAR_1 = FUNC_2(VAR_0->skb->sk);
 struct fib6_walker *VAR_2 = (void *)VAR_0->args[2];

 if (VAR_2) {
  if (VAR_0->args[4]) {
   VAR_0->args[4] = 0;
   FUNC_0(VAR_1, VAR_2);
  }
  VAR_0->args[2] = 0;
  FUNC_1(VAR_2);
 }
 VAR_0->done = (void *)VAR_0->args[3];
 VAR_0->args[1] = 3;
}
