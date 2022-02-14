
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_desc*,unsigned int) ;
 struct irq_desc* FUNC_1 (unsigned int,unsigned long*,int ) ;
 int FUNC_2 (struct irq_desc*,unsigned long) ;

int FUNC_3(unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;
 struct irq_desc *VAR_5 = FUNC_1(VAR_2, &VAR_4, VAR_1);
 int VAR_6 = 0;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5, VAR_3);
 FUNC_2(VAR_5, VAR_4);
 return VAR_6;
}
