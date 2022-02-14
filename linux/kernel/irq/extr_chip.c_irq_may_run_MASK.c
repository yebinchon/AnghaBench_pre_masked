
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int irq_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct irq_desc*) ;
 scalar_t__ FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static bool FUNC_3(struct irq_desc *VAR_2)
{
 unsigned int VAR_3 = VAR_0 | VAR_1;





 if (!FUNC_2(&VAR_2->irq_data, VAR_3))
  return 1;






 if (FUNC_1(VAR_2))
  return 0;




 return FUNC_0(VAR_2);
}
