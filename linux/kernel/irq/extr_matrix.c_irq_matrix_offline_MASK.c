
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_matrix {int online_maps; int global_available; int maps; } ;
struct cpumap {int online; scalar_t__ available; } ;


 struct cpumap* FUNC_0 (int ) ;
 int FUNC_1 (struct irq_matrix*) ;

void FUNC_2(struct irq_matrix *VAR_0)
{
 struct cpumap *VAR_1 = FUNC_0(VAR_0->maps);


 VAR_0->global_available -= VAR_1->available;
 VAR_1->online = 0;
 VAR_0->online_maps--;
 FUNC_1(VAR_0);
}
