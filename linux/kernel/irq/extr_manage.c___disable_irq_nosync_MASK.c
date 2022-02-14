
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_desc*) ;
 struct irq_desc* FUNC_1 (unsigned int,unsigned long*,int ) ;
 int FUNC_2 (struct irq_desc*,unsigned long) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_2)
{
 unsigned long VAR_3;
 struct irq_desc *VAR_4 = FUNC_1(VAR_2, &VAR_3, VAR_1);

 if (!VAR_4)
  return -VAR_0;
 FUNC_0(VAR_4);
 FUNC_2(VAR_4, VAR_3);
 return 0;
}
