
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msi_desc {unsigned int irq; } ;
struct TYPE_2__ {struct msi_desc* msi_desc; } ;
struct irq_desc {TYPE_1__ irq_common_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct irq_desc* FUNC_0 (unsigned int,unsigned long*,int ) ;
 int FUNC_1 (struct irq_desc*,unsigned long) ;

int FUNC_2(unsigned int VAR_2, unsigned int VAR_3,
    struct msi_desc *VAR_4)
{
 unsigned long VAR_5;
 struct irq_desc *VAR_6 = FUNC_0(VAR_2 + VAR_3, &VAR_5, VAR_1);

 if (!VAR_6)
  return -VAR_0;
 VAR_6->irq_common_data.msi_desc = VAR_4;
 if (VAR_4 && !VAR_3)
  VAR_4->irq = VAR_2;
 FUNC_1(VAR_6, VAR_5);
 return 0;
}
