
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union devlink_param_value {int vu8; int vbool; int vstr; int vu32; int vu16; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
typedef enum devlink_param_type { ____Placeholder_devlink_param_type } devlink_param_type ;
typedef enum devlink_param_cmode { ____Placeholder_devlink_param_cmode } devlink_param_cmode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct sk_buff *VAR_4,
    enum devlink_param_type VAR_5,
    enum devlink_param_cmode VAR_6,
    union devlink_param_value VAR_7)
{
 struct nlattr *VAR_8;

 VAR_8 = FUNC_2(VAR_4,
       VAR_0);
 if (!VAR_8)
  goto nla_put_failure;

 if (FUNC_7(VAR_4, VAR_1, VAR_6))
  goto value_nest_cancel;

 switch (VAR_5) {
 case 128:
  if (FUNC_7(VAR_4, VAR_2, VAR_7.vu8))
   goto value_nest_cancel;
  break;
 case 130:
  if (FUNC_5(VAR_4, VAR_2, VAR_7.vu16))
   goto value_nest_cancel;
  break;
 case 129:
  if (FUNC_6(VAR_4, VAR_2, VAR_7.vu32))
   goto value_nest_cancel;
  break;
 case 131:
  if (FUNC_4(VAR_4, VAR_2,
       VAR_7.vstr))
   goto value_nest_cancel;
  break;
 case 132:
  if (VAR_7.vbool &&
      FUNC_3(VAR_4, VAR_2))
   goto value_nest_cancel;
  break;
 }

 FUNC_1(VAR_4, VAR_8);
 return 0;

value_nest_cancel:
 FUNC_0(VAR_4, VAR_8);
nla_put_failure:
 return -VAR_3;
}
