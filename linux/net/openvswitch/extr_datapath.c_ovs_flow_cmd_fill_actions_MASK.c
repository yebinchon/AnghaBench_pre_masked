
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_actions {int actions_len; int actions; } ;
struct sw_flow {int sf_acts; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (int ,int ,struct sk_buff*) ;
 struct sw_flow_actions* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct sw_flow *VAR_2,
         struct sk_buff *VAR_3, int VAR_4)
{
 struct nlattr *VAR_5;
 int VAR_6;
 VAR_5 = FUNC_2(VAR_3, VAR_1);
 if (VAR_5) {
  const struct sw_flow_actions *VAR_7;

  VAR_7 = FUNC_4(VAR_2->sf_acts);
  VAR_6 = FUNC_3(VAR_7->actions,
       VAR_7->actions_len, VAR_3);

  if (!VAR_6)
   FUNC_1(VAR_3, VAR_5);
  else {
   if (VAR_4)
    return VAR_6;

   FUNC_0(VAR_3, VAR_5);
  }
 } else if (VAR_4) {
  return -VAR_0;
 }

 return 0;
}
