
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct devlink_dpipe_table {int resource_valid; void* resource_units; void* resource_id; } ;
struct devlink {int lock; int dpipe_table_list; } ;


 int VAR_0 ;
 struct devlink_dpipe_table* FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct devlink *VAR_1,
         const char *VAR_2, u64 VAR_3,
         u64 VAR_4)
{
 struct devlink_dpipe_table *VAR_5;
 int VAR_6 = 0;

 FUNC_1(&VAR_1->lock);
 VAR_5 = FUNC_0(&VAR_1->dpipe_table_list,
      VAR_2);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto out;
 }
 VAR_5->resource_id = VAR_3;
 VAR_5->resource_units = VAR_4;
 VAR_5->resource_valid = 1;
out:
 FUNC_2(&VAR_1->lock);
 return VAR_6;
}
