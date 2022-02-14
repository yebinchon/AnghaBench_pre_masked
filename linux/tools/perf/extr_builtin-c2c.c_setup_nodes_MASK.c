
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nr_numa_nodes; int nr_cpus_avail; struct numa_node* numa_nodes; } ;
struct TYPE_5__ {TYPE_1__ env; } ;
struct perf_session {TYPE_2__ header; } ;
struct perf_cpu_map {int nr; size_t* map; } ;
struct numa_node {struct perf_cpu_map* map; } ;
struct TYPE_6__ {int node_info; int nodes_cnt; int cpus_cnt; unsigned long** nodes; int* cpu2node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*) ;
 unsigned long* FUNC_1 (int) ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_2 (struct perf_cpu_map*) ;
 int FUNC_3 (size_t,unsigned long*) ;
 int FUNC_4 () ;
 void* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct perf_session *VAR_3)
{
 struct numa_node *VAR_4;
 unsigned long **VAR_5;
 int VAR_6, VAR_7;
 int *VAR_8;

 if (VAR_2.node_info > 2)
  VAR_2.node_info = 2;

 VAR_2.nodes_cnt = VAR_3->header.env.nr_numa_nodes;
 VAR_2.cpus_cnt = VAR_3->header.env.nr_cpus_avail;

 VAR_4 = VAR_3->header.env.numa_nodes;
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_5(sizeof(unsigned long *) * VAR_2.nodes_cnt);
 if (!VAR_5)
  return -VAR_1;

 VAR_2.nodes = VAR_5;

 VAR_8 = FUNC_5(sizeof(int) * VAR_2.cpus_cnt);
 if (!VAR_8)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_2.cpus_cnt; VAR_7++)
  VAR_8[VAR_7] = -1;

 VAR_2.cpu2node = VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_2.nodes_cnt; VAR_6++) {
  struct perf_cpu_map *VAR_9 = VAR_4[VAR_6].map;
  unsigned long *VAR_10;

  VAR_10 = FUNC_1(VAR_2.cpus_cnt);
  if (!VAR_10)
   return -VAR_1;

  VAR_5[VAR_6] = VAR_10;


  if (FUNC_2(VAR_9))
   continue;

  for (VAR_7 = 0; VAR_7 < VAR_9->nr; VAR_7++) {
   FUNC_3(VAR_9->map[VAR_7], VAR_10);

   if (FUNC_0(VAR_8[VAR_9->map[VAR_7]] != -1, "node/cpu topology bug"))
    return -VAR_0;

   VAR_8[VAR_9->map[VAR_7]] = VAR_6;
  }
 }

 FUNC_4();
 return 0;
}
