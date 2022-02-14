
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {struct ip6t_hl_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int hop_limit; } ;
struct ip6t_hl_info {int mode; int hop_limit; } ;






 struct ipv6hdr* FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static bool FUNC_1(const struct sk_buff *VAR_0, struct xt_action_param *VAR_1)
{
 const struct ip6t_hl_info *VAR_2 = VAR_1->matchinfo;
 const struct ipv6hdr *VAR_3 = FUNC_0(VAR_0);

 switch (VAR_2->mode) {
 case 131:
  return VAR_3->hop_limit == VAR_2->hop_limit;
 case 128:
  return VAR_3->hop_limit != VAR_2->hop_limit;
 case 129:
  return VAR_3->hop_limit < VAR_2->hop_limit;
 case 130:
  return VAR_3->hop_limit > VAR_2->hop_limit;
 }

 return 0;
}
