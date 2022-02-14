
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_dm_hw_metadata {int input_dev; int trap_name; int trap_group_name; } ;
struct devlink_trap_item {TYPE_2__* trap; struct devlink_trap_group_item* group_item; } ;
struct devlink_trap_group_item {TYPE_1__* group; } ;
struct devlink_port {scalar_t__ type; int type_lock; int type_dev; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct net_dm_hw_metadata *VAR_1,
      const struct devlink_trap_item *VAR_2,
      struct devlink_port *VAR_3)
{
 struct devlink_trap_group_item *VAR_4 = VAR_2->group_item;

 VAR_1->trap_group_name = VAR_4->group->name;
 VAR_1->trap_name = VAR_2->trap->name;

 FUNC_0(&VAR_3->type_lock);
 if (VAR_3->type == VAR_0)
  VAR_1->input_dev = VAR_3->type_dev;
 FUNC_1(&VAR_3->type_lock);
}
