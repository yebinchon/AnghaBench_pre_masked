
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_cpu_info {scalar_t__ cpu; int invert; } ;
struct xt_action_param {struct xt_cpu_info* matchinfo; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(const struct sk_buff *VAR_0, struct xt_action_param *VAR_1)
{
 const struct xt_cpu_info *VAR_2 = VAR_1->matchinfo;

 return (VAR_2->cpu == FUNC_0()) ^ VAR_2->invert;
}
