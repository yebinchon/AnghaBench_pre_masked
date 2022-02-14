
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct cpu_topology {size_t core_sib; int die_sib; size_t thread_sib; int * thread_siblings; int * die_siblings; int * core_siblings; } ;


 int FUNC_0 (struct cpu_topology*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct cpu_topology *VAR_0)
{
 u32 VAR_1;

 if (!VAR_0)
  return;

 for (VAR_1 = 0 ; VAR_1 < VAR_0->core_sib; VAR_1++)
  FUNC_1(&VAR_0->core_siblings[VAR_1]);

 if (VAR_0->die_sib) {
  for (VAR_1 = 0 ; VAR_1 < VAR_0->die_sib; VAR_1++)
   FUNC_1(&VAR_0->die_siblings[VAR_1]);
 }

 for (VAR_1 = 0 ; VAR_1 < VAR_0->thread_sib; VAR_1++)
  FUNC_1(&VAR_0->thread_siblings[VAR_1]);

 FUNC_0(VAR_0);
}
