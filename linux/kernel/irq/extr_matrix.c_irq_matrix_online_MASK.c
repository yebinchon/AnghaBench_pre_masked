
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_matrix {int online_maps; int global_available; scalar_t__ systembits_inalloc; scalar_t__ alloc_size; int maps; } ;
struct cpumap {int online; int initialized; scalar_t__ available; scalar_t__ managed; } ;


 int FUNC_0 (int) ;
 struct cpumap* FUNC_1 (int ) ;
 int FUNC_2 (struct irq_matrix*) ;

void FUNC_3(struct irq_matrix *VAR_0)
{
 struct cpumap *VAR_1 = FUNC_1(VAR_0->maps);

 FUNC_0(VAR_1->online);

 if (!VAR_1->initialized) {
  VAR_1->available = VAR_0->alloc_size;
  VAR_1->available -= VAR_1->managed + VAR_0->systembits_inalloc;
  VAR_1->initialized = 1;
 }
 VAR_0->global_available += VAR_1->available;
 VAR_1->online = 1;
 VAR_0->online_maps++;
 FUNC_2(VAR_0);
}
