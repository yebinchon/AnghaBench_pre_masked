
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {struct xt_NFQ_info_v2* targinfo; } ;
struct xt_NFQ_info_v2 {scalar_t__ bypass; } ;
struct sk_buff {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct sk_buff*,struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_1(struct sk_buff *VAR_1, const struct xt_action_param *VAR_2)
{
 const struct xt_NFQ_info_v2 *VAR_3 = VAR_2->targinfo;
 unsigned int VAR_4 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3->bypass)
  VAR_4 |= VAR_0;
 return VAR_4;
}
