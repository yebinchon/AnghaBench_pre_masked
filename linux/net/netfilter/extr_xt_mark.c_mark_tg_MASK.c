
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mark_tginfo2 {int mask; int mark; } ;
struct xt_action_param {struct xt_mark_tginfo2* targinfo; } ;
struct sk_buff {int mark; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int
FUNC_0(struct sk_buff *VAR_1, const struct xt_action_param *VAR_2)
{
 const struct xt_mark_tginfo2 *VAR_3 = VAR_2->targinfo;

 VAR_1->mark = (VAR_1->mark & ~VAR_3->mask) ^ VAR_3->mark;
 return VAR_0;
}
