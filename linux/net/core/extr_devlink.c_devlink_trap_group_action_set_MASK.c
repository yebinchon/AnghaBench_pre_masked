
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genl_info {int extack; int * attrs; } ;
struct devlink_trap_group_item {int dummy; } ;
struct devlink {int dummy; } ;
typedef enum devlink_trap_action { ____Placeholder_devlink_trap_action } devlink_trap_action ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct devlink*,struct devlink_trap_group_item*,int,int ) ;
 int FUNC_2 (struct genl_info*,int*) ;

__attribute__((used)) static int
FUNC_3(struct devlink *VAR_2,
         struct devlink_trap_group_item *VAR_3,
         struct genl_info *VAR_4)
{
 enum devlink_trap_action VAR_5;
 int VAR_6;

 if (!VAR_4->attrs[VAR_0])
  return 0;

 VAR_6 = FUNC_2(VAR_4, &VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_4->extack, "Invalid trap action");
  return -VAR_1;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5,
           VAR_4->extack);
 if (VAR_6)
  return VAR_6;

 return 0;
}
