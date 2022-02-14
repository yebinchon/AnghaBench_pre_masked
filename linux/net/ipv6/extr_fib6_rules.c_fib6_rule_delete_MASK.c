
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fib6_rules_require_fldissect; } ;
struct net {TYPE_1__ ipv6; } ;
struct fib_rule {struct net* fr_net; } ;


 scalar_t__ FUNC_0 (struct fib_rule*) ;

__attribute__((used)) static int FUNC_1(struct fib_rule *VAR_0)
{
 struct net *VAR_1 = VAR_0->fr_net;

 if (VAR_1->ipv6.fib6_rules_require_fldissect &&
     FUNC_0(VAR_0))
  VAR_1->ipv6.fib6_rules_require_fldissect--;

 return 0;
}
