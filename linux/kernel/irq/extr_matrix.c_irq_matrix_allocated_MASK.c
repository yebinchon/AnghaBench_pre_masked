
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_matrix {int maps; } ;
struct cpumap {unsigned int allocated; } ;


 struct cpumap* FUNC_0 (int ) ;

unsigned int FUNC_1(struct irq_matrix *VAR_0)
{
 struct cpumap *VAR_1 = FUNC_0(VAR_0->maps);

 return VAR_1->allocated;
}
