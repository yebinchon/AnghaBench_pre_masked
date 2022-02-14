
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_dpipe_table {int counters_enabled; } ;
struct devlink {int dpipe_table_list; } ;


 struct devlink_dpipe_table* FUNC_0 (int *,char const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

bool FUNC_3(struct devlink *VAR_0,
      const char *VAR_1)
{
 struct devlink_dpipe_table *VAR_2;
 bool VAR_3;

 FUNC_1();
 VAR_2 = FUNC_0(&VAR_0->dpipe_table_list,
      VAR_1);
 VAR_3 = 0;
 if (VAR_2)
  VAR_3 = VAR_2->counters_enabled;
 FUNC_2();
 return VAR_3;
}
