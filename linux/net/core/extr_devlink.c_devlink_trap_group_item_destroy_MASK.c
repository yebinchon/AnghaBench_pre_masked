
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_trap_group_item {int stats; int list; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct devlink*,struct devlink_trap_group_item*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct devlink_trap_group_item*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct devlink *VAR_1,
    struct devlink_trap_group_item *VAR_2)
{
 FUNC_0(VAR_1, VAR_2,
      VAR_0);
 FUNC_3(&VAR_2->list);
 FUNC_1(VAR_2->stats);
 FUNC_2(VAR_2);
}
