
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {struct ebt_mark_t_info* targinfo; } ;
struct sk_buff {int mark; } ;
struct ebt_mark_t_info {int target; int mark; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static unsigned int
FUNC_0(struct sk_buff *VAR_4, const struct xt_action_param *VAR_5)
{
 const struct ebt_mark_t_info *VAR_6 = VAR_5->targinfo;
 int VAR_7 = VAR_6->target & -16;

 if (VAR_7 == VAR_3)
  VAR_4->mark = VAR_6->mark;
 else if (VAR_7 == VAR_2)
  VAR_4->mark |= VAR_6->mark;
 else if (VAR_7 == VAR_1)
  VAR_4->mark &= VAR_6->mark;
 else
  VAR_4->mark ^= VAR_6->mark;

 return VAR_6->target | ~VAR_0;
}
