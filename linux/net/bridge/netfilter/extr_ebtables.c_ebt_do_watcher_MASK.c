
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_action_param {int targinfo; TYPE_1__* target; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {TYPE_1__* watcher; } ;
struct ebt_entry_watcher {TYPE_2__ u; int data; } ;
struct TYPE_3__ {int (* target ) (struct sk_buff*,struct xt_action_param*) ;} ;


 int FUNC_0 (struct sk_buff*,struct xt_action_param*) ;

__attribute__((used)) static inline int
FUNC_1(const struct ebt_entry_watcher *VAR_0, struct sk_buff *VAR_1,
        struct xt_action_param *VAR_2)
{
 VAR_2->target = VAR_0->u.watcher;
 VAR_2->targinfo = VAR_0->data;
 VAR_0->u.watcher->target(VAR_1, VAR_2);

 return 0;
}
