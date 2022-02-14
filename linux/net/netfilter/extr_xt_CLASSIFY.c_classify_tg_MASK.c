
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_classify_target_info {int priority; } ;
struct xt_action_param {struct xt_classify_target_info* targinfo; } ;
struct sk_buff {int priority; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int
FUNC_0(struct sk_buff *VAR_1, const struct xt_action_param *VAR_2)
{
 const struct xt_classify_target_info *VAR_3 = VAR_2->targinfo;

 VAR_1->priority = VAR_3->priority;
 return VAR_0;
}
