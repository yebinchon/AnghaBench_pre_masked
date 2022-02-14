
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fib_has_custom_rules; scalar_t__ fib_rules_require_fldissect; int fib_num_tclassid_users; } ;
struct net {TYPE_1__ ipv4; } ;
struct fib_rule {struct net* fr_net; } ;
struct fib4_rule {scalar_t__ tclassid; } ;


 scalar_t__ FUNC_0 (struct fib_rule*) ;
 int FUNC_1 (struct net*) ;

__attribute__((used)) static int FUNC_2(struct fib_rule *VAR_0)
{
 struct net *VAR_1 = VAR_0->fr_net;
 int VAR_2;


 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  goto errout;





 VAR_1->ipv4.fib_has_custom_rules = 1;

 if (VAR_1->ipv4.fib_rules_require_fldissect &&
     FUNC_0(VAR_0))
  VAR_1->ipv4.fib_rules_require_fldissect--;
errout:
 return VAR_2;
}
