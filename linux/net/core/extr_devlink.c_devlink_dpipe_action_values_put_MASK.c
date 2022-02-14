
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct devlink_dpipe_value {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct devlink_dpipe_value*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2,
        struct devlink_dpipe_value *VAR_3,
        unsigned int VAR_4)
{
 struct nlattr *VAR_5;
 int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = FUNC_3(VAR_2,
          VAR_0);
  if (!VAR_5)
   return -VAR_1;
  VAR_7 = FUNC_0(VAR_2, &VAR_3[VAR_6]);
  if (VAR_7)
   goto err_action_value_put;
  FUNC_2(VAR_2, VAR_5);
 }
 return 0;

err_action_value_put:
 FUNC_1(VAR_2, VAR_5);
 return VAR_7;
}
