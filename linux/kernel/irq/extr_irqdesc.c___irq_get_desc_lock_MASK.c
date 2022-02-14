
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int lock; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct irq_desc*) ;
 scalar_t__ FUNC_1 (struct irq_desc*) ;
 struct irq_desc* FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;

struct irq_desc *
FUNC_4(unsigned int VAR_2, unsigned long *VAR_3, bool VAR_4,
      unsigned int VAR_5)
{
 struct irq_desc *VAR_6 = FUNC_2(VAR_2);

 if (VAR_6) {
  if (VAR_5 & VAR_0) {
   if ((VAR_5 & VAR_1) &&
       !FUNC_1(VAR_6))
    return ((void*)0);

   if (!(VAR_5 & VAR_1) &&
       FUNC_1(VAR_6))
    return ((void*)0);
  }

  if (VAR_4)
   FUNC_0(VAR_6);
  FUNC_3(&VAR_6->lock, *VAR_3);
 }
 return VAR_6;
}
