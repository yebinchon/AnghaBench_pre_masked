
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int istate; scalar_t__ depth; int lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (unsigned int,struct irq_desc*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (struct irq_desc*) ;
 struct irq_desc* FUNC_5 (unsigned int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

const void *FUNC_8(unsigned int VAR_1, void *VAR_2)
{
 struct irq_desc *VAR_3 = FUNC_5(VAR_1);
 unsigned long VAR_4;
 const void *VAR_5;

 if (!VAR_3 || FUNC_0(!(VAR_3->istate & VAR_0)))
  return ((void*)0);

 if (FUNC_0(FUNC_4(VAR_3)))
  return ((void*)0);


 if (FUNC_0(VAR_3->depth == 0))
  FUNC_2(VAR_1);

 FUNC_6(&VAR_3->lock, VAR_4);

 FUNC_3(VAR_3);
 VAR_5 = FUNC_1(VAR_1, VAR_3);

 FUNC_7(&VAR_3->lock, VAR_4);

 return VAR_5;
}
