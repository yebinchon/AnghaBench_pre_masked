
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_data {int cpu_id; } ;
struct pkg_data {int dummy; } ;
struct core_data {int dummy; } ;
struct TYPE_2__ {int num_packages; int nodes_per_pkg; int cores_per_node; int threads_per_core; } ;


 struct core_data* FUNC_0 (struct core_data*,int,int,int) ;
 struct pkg_data* FUNC_1 (struct pkg_data*,int) ;
 struct thread_data* FUNC_2 (struct thread_data*,int,int,int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__ VAR_0 ;

int FUNC_4(int (VAR_1)(struct thread_data *, struct core_data *, struct pkg_data *),
 struct thread_data *VAR_2, struct core_data *VAR_3, struct pkg_data *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 for (VAR_6 = 0; VAR_6 < VAR_0.num_packages; ++VAR_6) {
  for (VAR_9 = 0; VAR_9 < VAR_0.nodes_per_pkg; VAR_9++) {
   for (VAR_7 = 0; VAR_7 < VAR_0.cores_per_node; ++VAR_7) {
    for (VAR_8 = 0; VAR_8 <
     VAR_0.threads_per_core; ++VAR_8) {
     struct thread_data *VAR_10;
     struct core_data *VAR_11;
     struct pkg_data *VAR_12;

     VAR_10 = FUNC_2(VAR_2, VAR_8,
             VAR_7, VAR_9,
             VAR_6);

     if (FUNC_3(VAR_10->cpu_id))
      continue;

     VAR_11 = FUNC_0(VAR_3, VAR_7,
           VAR_9, VAR_6);
     VAR_12 = FUNC_1(VAR_4, VAR_6);

     VAR_5 = VAR_1(VAR_10, VAR_11, VAR_12);
     if (VAR_5)
      return VAR_5;
    }
   }
  }
 }
 return 0;
}
