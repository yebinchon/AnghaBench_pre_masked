
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct devlink_dpipe_entry {int action_values_count; int action_values; int match_values_count; int match_values; int counter; scalar_t__ counter_valid; int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_7,
       struct devlink_dpipe_entry *VAR_8)
{
 struct nlattr *VAR_9, *VAR_10, *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_4(VAR_7, VAR_0);
 if (!VAR_9)
  return -VAR_6;

 if (FUNC_5(VAR_7, VAR_3, VAR_8->index,
         VAR_5))
  goto nla_put_failure;
 if (VAR_8->counter_valid)
  if (FUNC_5(VAR_7, VAR_2,
          VAR_8->counter, VAR_5))
   goto nla_put_failure;

 VAR_10 = FUNC_4(VAR_7,
          VAR_4);
 if (!VAR_10)
  goto nla_put_failure;

 VAR_12 = FUNC_1(VAR_7, VAR_8->match_values,
          VAR_8->match_values_count);
 if (VAR_12) {
  FUNC_2(VAR_7, VAR_10);
  goto err_match_values_put;
 }
 FUNC_3(VAR_7, VAR_10);

 VAR_11 = FUNC_4(VAR_7,
          VAR_1);
 if (!VAR_11)
  goto nla_put_failure;

 VAR_12 = FUNC_0(VAR_7, VAR_8->action_values,
           VAR_8->action_values_count);
 if (VAR_12) {
  FUNC_2(VAR_7, VAR_11);
  goto err_action_values_put;
 }
 FUNC_3(VAR_7, VAR_11);

 FUNC_3(VAR_7, VAR_9);
 return 0;

nla_put_failure:
 VAR_12 = -VAR_6;
err_match_values_put:
err_action_values_put:
 FUNC_2(VAR_7, VAR_9);
 return VAR_12;
}
