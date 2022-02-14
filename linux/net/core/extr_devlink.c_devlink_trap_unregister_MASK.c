
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlink_trap_item {int stats; int list; } ;
struct devlink_trap {int name; } ;
struct devlink {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* trap_fini ) (struct devlink*,struct devlink_trap const*,struct devlink_trap_item*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct devlink*,struct devlink_trap_item*) ;
 struct devlink_trap_item* FUNC_2 (struct devlink*,int ) ;
 int FUNC_3 (struct devlink*,struct devlink_trap_item*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct devlink_trap_item*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct devlink*,struct devlink_trap const*,struct devlink_trap_item*) ;

__attribute__((used)) static void FUNC_8(struct devlink *VAR_1,
        const struct devlink_trap *VAR_2)
{
 struct devlink_trap_item *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2->name);
 if (FUNC_0(!VAR_3))
  return;

 FUNC_3(VAR_1, VAR_3, VAR_0);
 FUNC_6(&VAR_3->list);
 if (VAR_1->ops->trap_fini)
  VAR_1->ops->trap_fini(VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_1, VAR_3);
 FUNC_4(VAR_3->stats);
 FUNC_5(VAR_3);
}
