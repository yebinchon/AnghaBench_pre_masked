
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct devlink_trap_item {int action; TYPE_2__* trap; } ;
struct devlink {TYPE_1__* ops; } ;
typedef enum devlink_trap_action { ____Placeholder_devlink_trap_action } devlink_trap_action ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {int (* trap_action_set ) (struct devlink*,TYPE_2__*,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct devlink*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_2(struct devlink *VAR_1,
         struct devlink_trap_item *VAR_2,
         enum devlink_trap_action VAR_3,
         struct netlink_ext_ack *VAR_4)
{
 int VAR_5;

 if (VAR_2->action != VAR_3 &&
     VAR_2->trap->type != VAR_0) {
  FUNC_0(VAR_4, "Cannot change action of non-drop traps. Skipping");
  return 0;
 }

 VAR_5 = VAR_1->ops->trap_action_set(VAR_1, VAR_2->trap,
         VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_2->action = VAR_3;

 return 0;
}
