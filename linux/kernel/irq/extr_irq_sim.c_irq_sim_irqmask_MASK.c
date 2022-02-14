
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_sim_irq_ctx {int enabled; } ;
struct irq_data {int dummy; } ;


 struct irq_sim_irq_ctx* FUNC_0 (struct irq_data*) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_0)
{
 struct irq_sim_irq_ctx *VAR_1 = FUNC_0(VAR_0);

 VAR_1->enabled = 0;
}
