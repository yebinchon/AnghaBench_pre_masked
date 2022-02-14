
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_trap_group_item {int refcount; } ;
struct devlink_trap_group {int name; } ;
struct devlink {int dummy; } ;


 struct devlink_trap_group_item* FUNC_0 (struct devlink*,struct devlink_trap_group const*) ;
 struct devlink_trap_group_item* FUNC_1 (struct devlink*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct devlink_trap_group_item *
FUNC_3(struct devlink *VAR_0,
       const struct devlink_trap_group *VAR_1)
{
 struct devlink_trap_group_item *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1->name);
 if (VAR_2) {
  FUNC_2(&VAR_2->refcount);
  return VAR_2;
 }

 return FUNC_0(VAR_0, VAR_1);
}
