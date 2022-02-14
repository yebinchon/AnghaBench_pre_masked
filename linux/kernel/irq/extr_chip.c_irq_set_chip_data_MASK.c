
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* chip_data; } ;
struct irq_desc {TYPE_1__ irq_data; } ;


 int VAR_0 ;
 struct irq_desc* FUNC_0 (unsigned int,unsigned long*,int ) ;
 int FUNC_1 (struct irq_desc*,unsigned long) ;

int FUNC_2(unsigned int VAR_1, void *VAR_2)
{
 unsigned long VAR_3;
 struct irq_desc *VAR_4 = FUNC_0(VAR_1, &VAR_3, 0);

 if (!VAR_4)
  return -VAR_0;
 VAR_4->irq_data.chip_data = VAR_2;
 FUNC_1(VAR_4, VAR_3);
 return 0;
}
