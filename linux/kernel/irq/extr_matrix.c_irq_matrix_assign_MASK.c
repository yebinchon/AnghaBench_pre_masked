
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_matrix {unsigned int alloc_start; unsigned int alloc_end; int global_available; int total_allocated; int maps; } ;
struct cpumap {int available; int allocated; int alloc_map; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int,int ) ;
 struct cpumap* FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,int ,struct irq_matrix*,struct cpumap*) ;

void FUNC_5(struct irq_matrix *VAR_0, unsigned int VAR_1)
{
 struct cpumap *VAR_2 = FUNC_3(VAR_0->maps);

 if (FUNC_0(VAR_1 < VAR_0->alloc_start || VAR_1 >= VAR_0->alloc_end))
  return;
 if (FUNC_0(FUNC_2(VAR_1, VAR_2->alloc_map)))
  return;
 VAR_2->allocated++;
 VAR_0->total_allocated++;
 VAR_2->available--;
 VAR_0->global_available--;
 FUNC_4(VAR_1, FUNC_1(), VAR_0, VAR_2);
}
