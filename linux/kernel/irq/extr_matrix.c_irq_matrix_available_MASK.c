
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_matrix {unsigned int global_available; int maps; } ;
struct cpumap {unsigned int available; } ;


 struct cpumap* FUNC_0 (int ) ;

unsigned int FUNC_1(struct irq_matrix *VAR_0, bool VAR_1)
{
 struct cpumap *VAR_2 = FUNC_0(VAR_0->maps);

 if (!VAR_1)
  return VAR_0->global_available;
 return VAR_0->global_available - VAR_2->available;
}
