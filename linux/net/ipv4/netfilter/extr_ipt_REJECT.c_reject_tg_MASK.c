
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {struct ipt_reject_info* targinfo; } ;
struct sk_buff {int dummy; } ;
struct ipt_reject_info {int with; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int ,struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,int ,int) ;
 int FUNC_2 (struct xt_action_param const*) ;
 int FUNC_3 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_4(struct sk_buff *VAR_8, const struct xt_action_param *VAR_9)
{
 const struct ipt_reject_info *VAR_10 = VAR_9->targinfo;
 int VAR_11 = FUNC_2(VAR_9);

 switch (VAR_10->with) {
 case 131:
  FUNC_1(VAR_8, VAR_3, VAR_11);
  break;
 case 133:
  FUNC_1(VAR_8, VAR_1, VAR_11);
  break;
 case 129:
  FUNC_1(VAR_8, VAR_6, VAR_11);
  break;
 case 130:
  FUNC_1(VAR_8, VAR_5, VAR_11);
  break;
 case 132:
  FUNC_1(VAR_8, VAR_2, VAR_11);
  break;
 case 134:
  FUNC_1(VAR_8, VAR_0, VAR_11);
  break;
 case 136:
  FUNC_1(VAR_8, VAR_4, VAR_11);
  break;
 case 128:
  FUNC_0(FUNC_3(VAR_9), VAR_8, VAR_11);
 case 135:

  break;
 }

 return VAR_7;
}
