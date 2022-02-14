
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct numa_topology {size_t nr; TYPE_1__* nodes; } ;
struct TYPE_2__ {int cpus; } ;


 int FUNC_0 (struct numa_topology*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct numa_topology *VAR_0)
{
 u32 VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr; VAR_1++)
  FUNC_1(&VAR_0->nodes[VAR_1].cpus);

 FUNC_0(VAR_0);
}
