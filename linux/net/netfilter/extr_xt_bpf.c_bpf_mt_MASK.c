
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_bpf_info {int filter; } ;
struct xt_action_param {struct xt_bpf_info* matchinfo; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int ,struct sk_buff const*) ;

__attribute__((used)) static bool FUNC_1(const struct sk_buff *VAR_0, struct xt_action_param *VAR_1)
{
 const struct xt_bpf_info *VAR_2 = VAR_1->matchinfo;

 return FUNC_0(VAR_2->filter, VAR_0);
}
