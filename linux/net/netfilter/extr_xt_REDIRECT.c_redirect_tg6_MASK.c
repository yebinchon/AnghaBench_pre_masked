
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {int targinfo; } ;
struct sk_buff {int dummy; } ;


 unsigned int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_2(struct sk_buff *VAR_0, const struct xt_action_param *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->targinfo, FUNC_1(VAR_1));
}
