
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cpu_topology {int dummy; } ;
struct TYPE_7__ {int logical_cpu_id; int physical_package_id; int die_id; scalar_t__ physical_node_id; int physical_core_id; scalar_t__ thread_id; int logical_node_id; } ;
struct TYPE_6__ {int num_cpus; int max_cpu_num; scalar_t__ max_node_num; int cores_per_node; int num_die; int num_packages; int nodes_per_pkg; int threads_per_core; int num_cores; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,int *) ;
 int VAR_5 ;
 int FUNC_4 (int ,int *) ;
 TYPE_2__* FUNC_5 (int,int) ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int) ;
 int * VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 TYPE_2__* VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int,...) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (TYPE_2__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int VAR_18 ;
 TYPE_1__ VAR_19 ;

void FUNC_17()
{
 int VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23 = 0;
 int VAR_24 = 0;


 FUNC_15();
 VAR_19.num_cpus = 0;
 FUNC_8(VAR_6);
 if (!VAR_18 && VAR_19.num_cpus > 1)
  FUNC_0(VAR_0);

 if (VAR_14 > 1)
  FUNC_9(VAR_17, "num_cpus %d max_cpu_num %d\n", VAR_19.num_cpus, VAR_19.max_cpu_num);

 VAR_13 = FUNC_5(1, (VAR_19.max_cpu_num + 1) * sizeof(struct cpu_topology));
 if (VAR_13 == ((void*)0))
  FUNC_7(1, "calloc cpus");




 VAR_9 = FUNC_1((VAR_19.max_cpu_num + 1));
 if (VAR_9 == ((void*)0))
  FUNC_7(3, "CPU_ALLOC");
 VAR_10 = FUNC_2((VAR_19.max_cpu_num + 1));
 FUNC_4(VAR_10, VAR_9);
 FUNC_8(VAR_16);




 for (VAR_20 = 0; VAR_20 < VAR_5; ++VAR_20) {
  if (FUNC_3(VAR_20, VAR_12, VAR_11))
   if (!FUNC_3(VAR_20, VAR_10, VAR_9))
    FUNC_7(1, "cpu%d not present", VAR_20);
 }




 VAR_7 = FUNC_1((VAR_19.max_cpu_num + 1));
 if (VAR_7 == ((void*)0))
  FUNC_7(3, "CPU_ALLOC");
 VAR_8 = FUNC_2((VAR_19.max_cpu_num + 1));
 FUNC_4(VAR_8, VAR_7);

 FUNC_8(VAR_15);





 for (VAR_20 = 0; VAR_20 <= VAR_19.max_cpu_num; ++VAR_20) {
  int VAR_25;

  if (FUNC_6(VAR_20)) {
   if (VAR_14 > 1)
    FUNC_9(VAR_17, "cpu%d NOT PRESENT\n", VAR_20);
   continue;
  }

  VAR_13[VAR_20].logical_cpu_id = VAR_20;


  VAR_13[VAR_20].physical_package_id = FUNC_13(VAR_20);
  if (VAR_13[VAR_20].physical_package_id > VAR_22)
   VAR_22 = VAR_13[VAR_20].physical_package_id;


  VAR_13[VAR_20].die_id = FUNC_11(VAR_20);
  if (VAR_13[VAR_20].die_id > VAR_23)
   VAR_23 = VAR_13[VAR_20].die_id;


  VAR_13[VAR_20].physical_node_id = FUNC_12(&VAR_13[VAR_20]);
  if (VAR_13[VAR_20].physical_node_id > VAR_19.max_node_num)
   VAR_19.max_node_num = VAR_13[VAR_20].physical_node_id;


  VAR_13[VAR_20].physical_core_id = FUNC_10(VAR_20);
  if (VAR_13[VAR_20].physical_core_id > VAR_21)
   VAR_21 = VAR_13[VAR_20].physical_core_id;


  VAR_25 = FUNC_14(&VAR_13[VAR_20]);
  if (VAR_25 > VAR_24)
   VAR_24 = VAR_25;
  if (VAR_13[VAR_20].thread_id == 0)
   VAR_19.num_cores++;
 }

 VAR_19.cores_per_node = VAR_21 + 1;
 if (VAR_14 > 1)
  FUNC_9(VAR_17, "max_core_id %d, sizing for %d cores per package\n",
   VAR_21, VAR_19.cores_per_node);
 if (!VAR_18 && VAR_19.cores_per_node > 1)
  FUNC_0(VAR_1);

 VAR_19.num_die = VAR_23 + 1;
 if (VAR_14 > 1)
  FUNC_9(VAR_17, "max_die_id %d, sizing for %d die\n",
    VAR_23, VAR_19.num_die);
 if (!VAR_18 && VAR_19.num_die > 1)
  FUNC_0(VAR_2);

 VAR_19.num_packages = VAR_22 + 1;
 if (VAR_14 > 1)
  FUNC_9(VAR_17, "max_package_id %d, sizing for %d packages\n",
   VAR_22, VAR_19.num_packages);
 if (!VAR_18 && VAR_19.num_packages > 1)
  FUNC_0(VAR_4);

 FUNC_16();
 if (VAR_14 > 1)
  FUNC_9(VAR_17, "nodes_per_pkg %d\n", VAR_19.nodes_per_pkg);
 if (!VAR_18 && VAR_19.nodes_per_pkg > 1)
  FUNC_0(VAR_3);

 VAR_19.threads_per_core = VAR_24;
 if (VAR_14 > 1)
  FUNC_9(VAR_17, "max_siblings %d\n", VAR_24);

 if (VAR_14 < 1)
  return;

 for (VAR_20 = 0; VAR_20 <= VAR_19.max_cpu_num; ++VAR_20) {
  if (FUNC_6(VAR_20))
   continue;
  FUNC_9(VAR_17,
   "cpu %d pkg %d die %d node %ld lnode %d core %d thread %ld\n",
   VAR_20, VAR_13[VAR_20].physical_package_id, VAR_13[VAR_20].die_id,
   VAR_13[VAR_20].physical_node_id,
   VAR_13[VAR_20].logical_node_id,
   VAR_13[VAR_20].physical_core_id,
   VAR_13[VAR_20].thread_id);
 }

}
