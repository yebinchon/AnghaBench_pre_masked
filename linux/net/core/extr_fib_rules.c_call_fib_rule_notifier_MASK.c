
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int family; } ;
struct fib_rule_notifier_info {TYPE_1__ info; struct fib_rule* rule; } ;
struct fib_rule {int dummy; } ;
typedef enum fib_event_type { ____Placeholder_fib_event_type } fib_event_type ;


 int FUNC_0 (struct notifier_block*,struct net*,int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_0, struct net *VAR_1,
      enum fib_event_type VAR_2,
      struct fib_rule *VAR_3, int VAR_4)
{
 struct fib_rule_notifier_info VAR_5 = {
  .info.family = VAR_4,
  .rule = VAR_3,
 };

 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_5.info);
}
