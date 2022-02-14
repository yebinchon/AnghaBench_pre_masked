
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int logical_node_id; int physical_package_id; int physical_node_id; } ;
struct TYPE_3__ {int max_cpu_num; int num_packages; int nodes_per_pkg; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_0(void)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7;


 for (VAR_5 = 0; VAR_5 <= VAR_1.max_cpu_num; ++VAR_5)
  VAR_0[VAR_5].logical_node_id = -1;

 VAR_7 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1.num_packages; VAR_2++) {
  VAR_4 = 0;
  for (VAR_5 = 0; VAR_5 <= VAR_1.max_cpu_num; ++VAR_5) {
   if (VAR_0[VAR_5].physical_package_id != VAR_2)
    continue;

   if (VAR_0[VAR_5].logical_node_id != -1)
    continue;
   VAR_0[VAR_5].logical_node_id = VAR_4;
   VAR_3 = VAR_0[VAR_5].physical_node_id;
   VAR_7++;




   for (VAR_6 = VAR_5; VAR_6 <= VAR_1.max_cpu_num; VAR_6++) {
    if ((VAR_0[VAR_6].physical_package_id == VAR_2) &&
       (VAR_0[VAR_6].physical_node_id == VAR_3)) {
     VAR_0[VAR_6].logical_node_id = VAR_4;
     VAR_7++;
    }
   }
   VAR_4++;
   if (VAR_4 > VAR_1.nodes_per_pkg)
    VAR_1.nodes_per_pkg = VAR_4;
  }
  if (VAR_7 >= VAR_1.max_cpu_num)
   break;
 }
}
