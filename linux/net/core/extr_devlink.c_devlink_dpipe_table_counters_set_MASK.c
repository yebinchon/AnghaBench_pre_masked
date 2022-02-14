
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlink_dpipe_table {int counters_enabled; int priv; TYPE_1__* table_ops; scalar_t__ counter_control_extern; } ;
struct devlink {int dpipe_table_list; } ;
struct TYPE_2__ {int (* counters_set_update ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct devlink_dpipe_table* FUNC_0 (int *,char const*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct devlink *VAR_2,
         const char *VAR_3,
         bool VAR_4)
{
 struct devlink_dpipe_table *VAR_5;

 VAR_5 = FUNC_0(&VAR_2->dpipe_table_list,
      VAR_3);
 if (!VAR_5)
  return -VAR_0;

 if (VAR_5->counter_control_extern)
  return -VAR_1;

 if (!(VAR_5->counters_enabled ^ VAR_4))
  return 0;

 VAR_5->counters_enabled = VAR_4;
 if (VAR_5->table_ops->counters_set_update)
  VAR_5->table_ops->counters_set_update(VAR_5->priv, VAR_4);
 return 0;
}
