
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xt_secmark_target_info {int secid; } ;
struct xt_action_param {struct xt_secmark_target_info* targinfo; } ;
struct sk_buff {int secmark; } ;


 int FUNC_0 () ;

 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned int
FUNC_1(struct sk_buff *VAR_2, const struct xt_action_param *VAR_3)
{
 u32 VAR_4 = 0;
 const struct xt_secmark_target_info *VAR_5 = VAR_3->targinfo;

 switch (VAR_1) {
 case 128:
  VAR_4 = VAR_5->secid;
  break;
 default:
  FUNC_0();
 }

 VAR_2->secmark = VAR_4;
 return VAR_0;
}
