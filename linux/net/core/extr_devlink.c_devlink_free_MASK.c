
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink {int port_list; int sb_list; int dpipe_table_list; int resource_list; int param_list; int region_list; int reporter_list; int trap_list; int trap_group_list; int lock; int reporters_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct devlink*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct devlink *VAR_0)
{
 FUNC_3(&VAR_0->reporters_lock);
 FUNC_3(&VAR_0->lock);
 FUNC_0(!FUNC_2(&VAR_0->trap_group_list));
 FUNC_0(!FUNC_2(&VAR_0->trap_list));
 FUNC_0(!FUNC_2(&VAR_0->reporter_list));
 FUNC_0(!FUNC_2(&VAR_0->region_list));
 FUNC_0(!FUNC_2(&VAR_0->param_list));
 FUNC_0(!FUNC_2(&VAR_0->resource_list));
 FUNC_0(!FUNC_2(&VAR_0->dpipe_table_list));
 FUNC_0(!FUNC_2(&VAR_0->sb_list));
 FUNC_0(!FUNC_2(&VAR_0->port_list));

 FUNC_1(VAR_0);
}
