
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_dpipe_table {int list; } ;
struct devlink {int lock; int dpipe_table_list; } ;


 struct devlink_dpipe_table* FUNC_0 (int *,char const*) ;
 int FUNC_1 (struct devlink_dpipe_table*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

void FUNC_5(struct devlink *VAR_1,
        const char *VAR_2)
{
 struct devlink_dpipe_table *VAR_3;

 FUNC_3(&VAR_1->lock);
 VAR_3 = FUNC_0(&VAR_1->dpipe_table_list,
      VAR_2);
 if (!VAR_3)
  goto unlock;
 FUNC_2(&VAR_3->list);
 FUNC_4(&VAR_1->lock);
 FUNC_1(VAR_3, VAR_0);
 return;
unlock:
 FUNC_4(&VAR_1->lock);
}
