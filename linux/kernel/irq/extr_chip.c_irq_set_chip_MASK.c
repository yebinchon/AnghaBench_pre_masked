
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct irq_chip* chip; } ;
struct irq_desc {TYPE_1__ irq_data; } ;
struct irq_chip {int dummy; } ;


 int VAR_0 ;
 struct irq_desc* FUNC_0 (unsigned int,unsigned long*,int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct irq_desc*,unsigned long) ;
 struct irq_chip VAR_1 ;

int FUNC_3(unsigned int VAR_2, struct irq_chip *VAR_3)
{
 unsigned long VAR_4;
 struct irq_desc *VAR_5 = FUNC_0(VAR_2, &VAR_4, 0);

 if (!VAR_5)
  return -VAR_0;

 if (!VAR_3)
  VAR_3 = &VAR_1;

 VAR_5->irq_data.chip = VAR_3;
 FUNC_2(VAR_5, VAR_4);




 FUNC_1(VAR_2);
 return 0;
}
