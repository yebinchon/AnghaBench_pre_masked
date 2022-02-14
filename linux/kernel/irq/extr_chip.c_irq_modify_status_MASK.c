
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int irq_data; int depth; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int) ;
 unsigned long VAR_6 ;
 struct irq_desc* FUNC_1 (unsigned int,unsigned long*,int ) ;
 int FUNC_2 (struct irq_desc*,unsigned long) ;
 scalar_t__ FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (struct irq_desc*,unsigned long,unsigned long) ;
 unsigned long FUNC_5 (struct irq_desc*) ;
 scalar_t__ FUNC_6 (struct irq_desc*) ;
 scalar_t__ FUNC_7 (struct irq_desc*) ;
 scalar_t__ FUNC_8 (struct irq_desc*) ;
 int FUNC_9 (int *,unsigned long) ;
 unsigned long FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;

void FUNC_12(unsigned int VAR_7, unsigned long VAR_8, unsigned long VAR_9)
{
 unsigned long VAR_10, VAR_11, VAR_12;
 struct irq_desc *VAR_13 = FUNC_1(VAR_7, &VAR_10, 0);

 if (!VAR_13)
  return;





 FUNC_0(!VAR_13->depth && (VAR_9 & VAR_6));

 FUNC_4(VAR_13, VAR_8, VAR_9);

 VAR_11 = FUNC_10(&VAR_13->irq_data);

 FUNC_9(&VAR_13->irq_data, VAR_2 | VAR_3 |
     VAR_4 | VAR_0 | VAR_1);
 if (FUNC_6(VAR_13))
  FUNC_11(&VAR_13->irq_data, VAR_2);
 if (FUNC_8(VAR_13))
  FUNC_11(&VAR_13->irq_data, VAR_3);
 if (FUNC_3(VAR_13))
  FUNC_11(&VAR_13->irq_data, VAR_1);
 if (FUNC_7(VAR_13))
  FUNC_11(&VAR_13->irq_data, VAR_0);

 VAR_12 = FUNC_5(VAR_13);
 if (VAR_12 != VAR_5)
  VAR_11 = VAR_12;

 FUNC_11(&VAR_13->irq_data, VAR_11);

 FUNC_2(VAR_13, VAR_10);
}
