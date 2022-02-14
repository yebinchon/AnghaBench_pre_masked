
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_fwspec {unsigned int param_count; int * param; int * fwnode; } ;
struct device_node {int fwnode; } ;



__attribute__((used)) static void FUNC_0(struct device_node *VAR_0, const u32 *VAR_1,
          unsigned int VAR_2,
          struct irq_fwspec *VAR_3)
{
 int VAR_4;

 VAR_3->fwnode = VAR_0 ? &VAR_0->fwnode : ((void*)0);
 VAR_3->param_count = VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_3->param[VAR_4] = VAR_1[VAR_4];
}
