
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_rpfilter_info {int flags; } ;
struct xt_action_param {struct xt_rpfilter_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ipv6hdr* FUNC_1 (struct sk_buff const*) ;
 scalar_t__ FUNC_2 (struct sk_buff const*,int ) ;
 int FUNC_3 (int ,struct sk_buff const*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct xt_action_param*) ;
 int FUNC_6 (struct xt_action_param*) ;

__attribute__((used)) static bool FUNC_7(const struct sk_buff *VAR_2, struct xt_action_param *VAR_3)
{
 const struct xt_rpfilter_info *VAR_4 = VAR_3->matchinfo;
 int VAR_5;
 struct ipv6hdr *VAR_6;
 bool VAR_7 = VAR_4->flags & VAR_1;

 if (FUNC_2(VAR_2, FUNC_5(VAR_3)))
  return 1 ^ VAR_7;

 VAR_6 = FUNC_1(VAR_2);
 VAR_5 = FUNC_0(&VAR_6->saddr);
 if (FUNC_4(VAR_5 == VAR_0))
  return 1 ^ VAR_7;

 return FUNC_3(FUNC_6(VAR_3), VAR_2, FUNC_5(VAR_3),
     VAR_4->flags) ^ VAR_7;
}
