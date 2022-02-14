
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int istate; int depth; int irq_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

bool FUNC_5(struct irq_desc *VAR_3)
{
 if (FUNC_3(&VAR_3->irq_data)) {
  FUNC_2(&VAR_3->irq_data, VAR_0);
  VAR_3->istate |= VAR_2 | VAR_1;
  VAR_3->depth++;
  FUNC_1(VAR_3);
  FUNC_4(FUNC_0(VAR_3));
  return 1;
 }
 return 0;
}
