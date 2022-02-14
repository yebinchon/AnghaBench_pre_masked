
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_ops {int dummy; } ;
struct devlink {int reporters_lock; int lock; int trap_group_list; int trap_list; int reporter_list; int region_list; int param_list; int resource_list; int dpipe_table_list; int sb_list; int port_list; struct devlink_ops const* ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct devlink*,int *) ;
 int VAR_1 ;
 struct devlink* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

struct devlink *FUNC_6(const struct devlink_ops *VAR_2, size_t VAR_3)
{
 struct devlink *VAR_4;

 if (FUNC_2(!VAR_2))
  return ((void*)0);

 VAR_4 = FUNC_4(sizeof(*VAR_4) + VAR_3, VAR_0);
 if (!VAR_4)
  return ((void*)0);
 VAR_4->ops = VAR_2;
 FUNC_3(VAR_4, &VAR_1);
 FUNC_0(&VAR_4->port_list);
 FUNC_0(&VAR_4->sb_list);
 FUNC_1(&VAR_4->dpipe_table_list);
 FUNC_0(&VAR_4->resource_list);
 FUNC_0(&VAR_4->param_list);
 FUNC_0(&VAR_4->region_list);
 FUNC_0(&VAR_4->reporter_list);
 FUNC_0(&VAR_4->trap_list);
 FUNC_0(&VAR_4->trap_group_list);
 FUNC_5(&VAR_4->lock);
 FUNC_5(&VAR_4->reporters_lock);
 return VAR_4;
}
