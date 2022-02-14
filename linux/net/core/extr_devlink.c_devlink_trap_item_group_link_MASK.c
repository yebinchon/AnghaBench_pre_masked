
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlink_trap_item {struct devlink_trap_group_item* group_item; TYPE_1__* trap; } ;
struct devlink_trap_group_item {int dummy; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {int group; } ;


 scalar_t__ FUNC_0 (struct devlink_trap_group_item*) ;
 int FUNC_1 (struct devlink_trap_group_item*) ;
 struct devlink_trap_group_item* FUNC_2 (struct devlink*,int *) ;

__attribute__((used)) static int
FUNC_3(struct devlink *VAR_0,
        struct devlink_trap_item *VAR_1)
{
 struct devlink_trap_group_item *VAR_2;

 VAR_2 = FUNC_2(VAR_0,
       &VAR_1->trap->group);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->group_item = VAR_2;

 return 0;
}
