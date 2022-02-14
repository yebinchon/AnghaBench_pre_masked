
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

int FUNC_4(int (VAR_1)(struct thread_data *, struct core_data *,
 struct pkg_data *, struct thread_data *, struct core_data *,
 struct pkg_data *), struct thread_data *VAR_2,
 struct core_data *VAR_3, struct pkg_data *VAR_4,
 struct thread_data *VAR_5, struct core_data *VAR_6,
 struct pkg_data *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 for (VAR_9 = 0; VAR_9 < VAR_0.num_packages; ++VAR_9) {
  for (VAR_10 = 0; VAR_10 < VAR_0.nodes_per_pkg; ++VAR_10) {
   for (VAR_11 = 0; VAR_11 < VAR_0.cores_per_node;
        ++VAR_11) {
    for (VAR_12 = 0; VAR_12 <
     VAR_0.threads_per_core; ++VAR_12) {
     struct thread_data *VAR_13, *VAR_14;
     struct core_data *VAR_15, *VAR_16;
     struct pkg_data *VAR_17, *VAR_18;

     VAR_13 = FUNC_2(VAR_2, VAR_12,
             VAR_11, VAR_10,
             VAR_9);

     if (FUNC_3(VAR_13->cpu_id))
      continue;

     VAR_14 = FUNC_2(VAR_5, VAR_12,
       VAR_11, VAR_10,
       VAR_9);

     VAR_15 = FUNC_0(VAR_3, VAR_11,
           VAR_10, VAR_9);
     VAR_16 = FUNC_0(VAR_6, VAR_11,
            VAR_10,
            VAR_9);

     VAR_17 = FUNC_1(VAR_4, VAR_9);
     VAR_18 = FUNC_1(VAR_7, VAR_9);

     VAR_8 = VAR_1(VAR_13, VAR_15, VAR_17, VAR_14, VAR_16, VAR_18);
     if (VAR_8)
      return VAR_8;
    }
   }
  }
 }
 return 0;
}
