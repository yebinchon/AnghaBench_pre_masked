
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int depth; } ;


 int FUNC_0 (struct irq_desc*) ;

void FUNC_1(struct irq_desc *VAR_0)
{
 if (!VAR_0->depth++)
  FUNC_0(VAR_0);
}
