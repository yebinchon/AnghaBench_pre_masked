
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_data {int cpu_id; int flags; } ;
struct pkg_data {int package_id; } ;
struct core_data {int core_id; } ;
struct TYPE_2__ {int physical_package_id; int logical_node_id; int physical_core_id; int thread_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct core_data* FUNC_0 (struct core_data*,int,int,int) ;
 struct pkg_data* FUNC_1 (struct pkg_data*,int) ;
 struct thread_data* FUNC_2 (struct thread_data*,int,int,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_1__* VAR_2 ;

void FUNC_4(struct thread_data *VAR_3, struct core_data *VAR_4,
 struct pkg_data *VAR_5, int VAR_6)
{
 int VAR_7 = VAR_2[VAR_6].physical_package_id;
 int VAR_8 = VAR_2[VAR_6].logical_node_id;
 int VAR_9 = VAR_2[VAR_6].physical_core_id;
 int VAR_10 = VAR_2[VAR_6].thread_id;
 struct thread_data *VAR_11;
 struct core_data *VAR_12;
 struct pkg_data *VAR_13;





 if (VAR_8 < 0)
  VAR_8 = 0;

 VAR_11 = FUNC_2(VAR_3, VAR_10, VAR_9, VAR_8, VAR_7);
 VAR_12 = FUNC_0(VAR_4, VAR_9, VAR_8, VAR_7);
 VAR_13 = FUNC_1(VAR_5, VAR_7);

 VAR_11->cpu_id = VAR_6;
 if (VAR_10 == 0) {
  VAR_11->flags |= VAR_1;
  if (FUNC_3(VAR_6))
   VAR_11->flags |= VAR_0;
 }

 VAR_12->core_id = VAR_9;
 VAR_13->package_id = VAR_7;
}
