
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct genl_info {int * attrs; } ;
typedef enum devlink_trap_action { ____Placeholder_devlink_trap_action } devlink_trap_action ;


 size_t VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct genl_info *VAR_2,
      enum devlink_trap_action *VAR_3)
{
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_2->attrs[VAR_0]);
 switch (VAR_4) {
 case 129:
 case 128:
  *VAR_3 = VAR_4;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
