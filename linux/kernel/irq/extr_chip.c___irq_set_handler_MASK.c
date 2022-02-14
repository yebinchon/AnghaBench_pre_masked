
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
typedef int irq_flow_handler_t ;


 int FUNC_0 (struct irq_desc*,int ,int,char const*) ;
 struct irq_desc* FUNC_1 (unsigned int,unsigned long*,int ) ;
 int FUNC_2 (struct irq_desc*,unsigned long) ;

void
FUNC_3(unsigned int VAR_0, irq_flow_handler_t VAR_1, int VAR_2,
    const char *VAR_3)
{
 unsigned long VAR_4;
 struct irq_desc *VAR_5 = FUNC_1(VAR_0, &VAR_4, 0);

 if (!VAR_5)
  return;

 FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_5, VAR_4);
}
