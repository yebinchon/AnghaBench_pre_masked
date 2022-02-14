
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int istate; scalar_t__ wake_depth; int irq_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,unsigned int) ;
 struct irq_desc* FUNC_1 (unsigned int,unsigned long*,int ) ;
 int FUNC_2 (struct irq_desc*,unsigned long) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (unsigned int,unsigned int) ;

int FUNC_6(unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;
 struct irq_desc *VAR_7 = FUNC_1(VAR_4, &VAR_6, VAR_3);
 int VAR_8 = 0;

 if (!VAR_7)
  return -VAR_0;


 if (VAR_7->istate & VAR_2) {
  VAR_8 = -VAR_0;
  goto out_unlock;
 }




 if (VAR_5) {
  if (VAR_7->wake_depth++ == 0) {
   VAR_8 = FUNC_5(VAR_4, VAR_5);
   if (VAR_8)
    VAR_7->wake_depth = 0;
   else
    FUNC_4(&VAR_7->irq_data, VAR_1);
  }
 } else {
  if (VAR_7->wake_depth == 0) {
   FUNC_0(1, "Unbalanced IRQ %d wake disable\n", VAR_4);
  } else if (--VAR_7->wake_depth == 0) {
   VAR_8 = FUNC_5(VAR_4, VAR_5);
   if (VAR_8)
    VAR_7->wake_depth = 1;
   else
    FUNC_3(&VAR_7->irq_data, VAR_1);
  }
 }

out_unlock:
 FUNC_2(VAR_7, VAR_6);
 return VAR_8;
}
