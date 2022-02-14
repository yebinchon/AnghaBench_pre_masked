
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_dpipe_table_ops {int size_get; } ;
struct devlink_dpipe_table {char const* name; int counter_control_extern; int list; void* priv; struct devlink_dpipe_table_ops* table_ops; } ;
struct devlink {int lock; int dpipe_table_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 struct devlink_dpipe_table* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct devlink *VAR_4,
     const char *VAR_5,
     struct devlink_dpipe_table_ops *VAR_6,
     void *VAR_7, bool VAR_8)
{
 struct devlink_dpipe_table *VAR_9;

 if (FUNC_1(&VAR_4->dpipe_table_list, VAR_5))
  return -VAR_0;

 if (FUNC_0(!VAR_6->size_get))
  return -VAR_1;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->name = VAR_5;
 VAR_9->table_ops = VAR_6;
 VAR_9->priv = VAR_7;
 VAR_9->counter_control_extern = VAR_8;

 FUNC_4(&VAR_4->lock);
 FUNC_3(&VAR_9->list, &VAR_4->dpipe_table_list);
 FUNC_5(&VAR_4->lock);
 return 0;
}
