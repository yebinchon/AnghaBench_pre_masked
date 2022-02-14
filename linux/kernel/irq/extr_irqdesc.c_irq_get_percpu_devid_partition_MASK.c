
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int percpu_affinity; int percpu_enabled; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpumask*,int ) ;
 struct irq_desc* FUNC_1 (unsigned int) ;

int FUNC_2(unsigned int VAR_1, struct cpumask *VAR_2)
{
 struct irq_desc *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_3 || !VAR_3->percpu_enabled)
  return -VAR_0;

 if (VAR_2)
  FUNC_0(VAR_2, VAR_3->percpu_affinity);

 return 0;
}
