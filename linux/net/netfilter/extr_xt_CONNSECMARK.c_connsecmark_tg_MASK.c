
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_connsecmark_target_info {int mode; } ;
struct xt_action_param {struct xt_connsecmark_target_info* targinfo; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 () ;


 unsigned int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static unsigned int
FUNC_3(struct sk_buff *VAR_1, const struct xt_action_param *VAR_2)
{
 const struct xt_connsecmark_target_info *VAR_3 = VAR_2->targinfo;

 switch (VAR_3->mode) {
 case 128:
  FUNC_2(VAR_1);
  break;

 case 129:
  FUNC_1(VAR_1);
  break;

 default:
  FUNC_0();
 }

 return VAR_0;
}
