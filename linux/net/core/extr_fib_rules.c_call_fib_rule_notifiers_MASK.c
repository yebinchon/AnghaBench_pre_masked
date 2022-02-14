
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct fib_rules_ops {int fib_rules_seq; int family; } ;
struct TYPE_2__ {struct netlink_ext_ack* extack; int family; } ;
struct fib_rule_notifier_info {TYPE_1__ info; struct fib_rule* rule; } ;
struct fib_rule {int dummy; } ;
typedef enum fib_event_type { ____Placeholder_fib_event_type } fib_event_type ;


 int FUNC_0 (struct net*,int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct net *VAR_0,
       enum fib_event_type VAR_1,
       struct fib_rule *VAR_2,
       struct fib_rules_ops *VAR_3,
       struct netlink_ext_ack *VAR_4)
{
 struct fib_rule_notifier_info VAR_5 = {
  .info.family = VAR_3->family,
  .info.extack = VAR_4,
  .rule = VAR_2,
 };

 VAR_3->fib_rules_seq++;
 return FUNC_0(VAR_0, VAR_1, &VAR_5.info);
}
