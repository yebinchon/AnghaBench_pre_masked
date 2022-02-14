
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_action_param {int matchinfo; TYPE_1__* match; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {TYPE_1__* match; } ;
struct ebt_entry_match {TYPE_2__ u; int data; } ;
struct TYPE_3__ {int (* match ) (struct sk_buff const*,struct xt_action_param*) ;} ;


 int FUNC_0 (struct sk_buff const*,struct xt_action_param*) ;

__attribute__((used)) static inline int
FUNC_1(struct ebt_entry_match *VAR_0, const struct sk_buff *VAR_1,
      struct xt_action_param *VAR_2)
{
 VAR_2->match = VAR_0->u.match;
 VAR_2->matchinfo = VAR_0->data;
 return !VAR_0->u.match->match(VAR_1, VAR_2);
}
