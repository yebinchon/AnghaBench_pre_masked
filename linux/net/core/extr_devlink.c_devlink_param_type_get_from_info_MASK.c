
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genl_info {int * attrs; } ;
typedef enum devlink_param_type { ____Placeholder_devlink_param_type } devlink_param_type ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct genl_info *VAR_7,
     enum devlink_param_type *VAR_8)
{
 if (!VAR_7->attrs[VAR_0])
  return -VAR_6;

 switch (FUNC_0(VAR_7->attrs[VAR_0])) {
 case 128:
  *VAR_8 = VAR_5;
  break;
 case 130:
  *VAR_8 = VAR_3;
  break;
 case 129:
  *VAR_8 = VAR_4;
  break;
 case 131:
  *VAR_8 = VAR_2;
  break;
 case 132:
  *VAR_8 = VAR_1;
  break;
 default:
  return -VAR_6;
 }

 return 0;
}
