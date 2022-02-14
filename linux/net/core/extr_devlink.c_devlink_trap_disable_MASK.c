
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlink_trap_item {int action; } ;
struct devlink_trap {int name; } ;
struct devlink {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* trap_action_set ) (struct devlink*,struct devlink_trap const*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct devlink_trap_item* FUNC_1 (struct devlink*,int ) ;
 int FUNC_2 (struct devlink*,struct devlink_trap const*,int ) ;

__attribute__((used)) static void FUNC_3(struct devlink *VAR_1,
     const struct devlink_trap *VAR_2)
{
 struct devlink_trap_item *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2->name);
 if (FUNC_0(!VAR_3))
  return;

 VAR_1->ops->trap_action_set(VAR_1, VAR_2, VAR_0);
 VAR_3->action = VAR_0;
}
