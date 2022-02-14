
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int irq_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (struct irq_desc*,unsigned int) ;
 struct irq_desc* FUNC_2 (unsigned int,unsigned long*,int ) ;
 int FUNC_3 (struct irq_desc*,unsigned int) ;
 int FUNC_4 (struct irq_desc*,unsigned long) ;
 unsigned int FUNC_5 (int *) ;
 unsigned int FUNC_6 () ;

void FUNC_7(unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = FUNC_6();
 unsigned long VAR_6;
 struct irq_desc *VAR_7 = FUNC_2(VAR_3, &VAR_6, VAR_0);

 if (!VAR_7)
  return;





 VAR_4 &= VAR_2;
 if (VAR_4 == VAR_1)
  VAR_4 = FUNC_5(&VAR_7->irq_data);

 if (VAR_4 != VAR_1) {
  int VAR_8;

  VAR_8 = FUNC_1(VAR_7, VAR_4);

  if (VAR_8) {
   FUNC_0(1, "failed to set type for IRQ%d\n", VAR_3);
   goto out;
  }
 }

 FUNC_3(VAR_7, VAR_5);
out:
 FUNC_4(VAR_7, VAR_6);
}
