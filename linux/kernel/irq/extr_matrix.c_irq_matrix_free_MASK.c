
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_matrix {unsigned int alloc_start; unsigned int alloc_end; int global_available; int total_allocated; int maps; } ;
struct cpumap {scalar_t__ online; int available; int managed_allocated; int allocated; int alloc_map; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int ) ;
 struct cpumap* FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int,struct irq_matrix*,struct cpumap*) ;

void FUNC_4(struct irq_matrix *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2, bool VAR_3)
{
 struct cpumap *VAR_4 = FUNC_2(VAR_0->maps, VAR_1);

 if (FUNC_0(VAR_2 < VAR_0->alloc_start || VAR_2 >= VAR_0->alloc_end))
  return;

 FUNC_1(VAR_2, VAR_4->alloc_map);
 VAR_4->allocated--;
 if(VAR_3)
  VAR_4->managed_allocated--;

 if (VAR_4->online)
  VAR_0->total_allocated--;

 if (!VAR_3) {
  VAR_4->available++;
  if (VAR_4->online)
   VAR_0->global_available++;
 }
 FUNC_3(VAR_2, VAR_1, VAR_0, VAR_4);
}
