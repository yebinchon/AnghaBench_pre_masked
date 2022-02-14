
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_connmark_mtinfo1 {int mask; int mark; int invert; } ;
struct xt_action_param {struct xt_connmark_mtinfo1* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct nf_conn {int mark; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 struct nf_conn* FUNC_0 (struct sk_buff const*,int*) ;

__attribute__((used)) static bool
FUNC_1(const struct sk_buff *VAR_0, struct xt_action_param *VAR_1)
{
 const struct xt_connmark_mtinfo1 *VAR_2 = VAR_1->matchinfo;
 enum ip_conntrack_info VAR_3;
 const struct nf_conn *VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_3);
 if (VAR_4 == ((void*)0))
  return 0;

 return ((VAR_4->mark & VAR_2->mask) == VAR_2->mark) ^ VAR_2->invert;
}
