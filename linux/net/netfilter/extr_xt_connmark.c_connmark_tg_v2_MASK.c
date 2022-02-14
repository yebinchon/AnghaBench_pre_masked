
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_connmark_tginfo2 {int dummy; } ;
struct xt_action_param {struct xt_connmark_tginfo2* targinfo; } ;
struct sk_buff {int dummy; } ;


 unsigned int FUNC_0 (struct sk_buff*,struct xt_connmark_tginfo2 const*) ;

__attribute__((used)) static unsigned int
FUNC_1(struct sk_buff *VAR_0, const struct xt_action_param *VAR_1)
{
 const struct xt_connmark_tginfo2 *VAR_2 = VAR_1->targinfo;

 return FUNC_0(VAR_0, VAR_2);
}
