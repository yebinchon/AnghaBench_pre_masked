
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_trap_group_item {int refcount; } ;
struct devlink {int dummy; } ;


 int FUNC_0 (struct devlink*,struct devlink_trap_group_item*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct devlink *VAR_0,
       struct devlink_trap_group_item *VAR_1)
{
 if (!FUNC_1(&VAR_1->refcount))
  return;

 FUNC_0(VAR_0, VAR_1);
}
