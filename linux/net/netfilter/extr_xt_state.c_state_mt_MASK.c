
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_state_info {unsigned int statemask; } ;
struct xt_action_param {struct xt_state_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct nf_conn* FUNC_1 (struct sk_buff const*,int*) ;

__attribute__((used)) static bool
FUNC_2(const struct sk_buff *VAR_3, struct xt_action_param *VAR_4)
{
 const struct xt_state_info *VAR_5 = VAR_4->matchinfo;
 enum ip_conntrack_info VAR_6;
 unsigned int VAR_7;
 struct nf_conn *VAR_8 = FUNC_1(VAR_3, &VAR_6);

 if (VAR_8)
  VAR_7 = FUNC_0(VAR_6);
 else if (VAR_6 == VAR_0)
  VAR_7 = VAR_2;
 else
  VAR_7 = VAR_1;

 return (VAR_5->statemask & VAR_7);
}
