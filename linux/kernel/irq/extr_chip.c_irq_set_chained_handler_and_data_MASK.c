
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* handler_data; } ;
struct irq_desc {TYPE_1__ irq_common_data; } ;
typedef int irq_flow_handler_t ;


 int FUNC_0 (struct irq_desc*,int ,int,int *) ;
 struct irq_desc* FUNC_1 (unsigned int,unsigned long*,int ) ;
 int FUNC_2 (struct irq_desc*,unsigned long) ;

void
FUNC_3(unsigned int VAR_0, irq_flow_handler_t VAR_1,
     void *VAR_2)
{
 unsigned long VAR_3;
 struct irq_desc *VAR_4 = FUNC_1(VAR_0, &VAR_3, 0);

 if (!VAR_4)
  return;

 VAR_4->irq_common_data.handler_data = VAR_2;
 FUNC_0(VAR_4, VAR_1, 1, ((void*)0));

 FUNC_2(VAR_4, VAR_3);
}
