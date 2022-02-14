
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int percpu_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 struct irq_desc* FUNC_1 (unsigned int,unsigned long*,int ) ;
 int FUNC_2 (struct irq_desc*,unsigned long) ;
 unsigned int FUNC_3 () ;

bool FUNC_4(unsigned int VAR_1)
{
 unsigned int VAR_2 = FUNC_3();
 struct irq_desc *VAR_3;
 unsigned long VAR_4;
 bool VAR_5;

 VAR_3 = FUNC_1(VAR_1, &VAR_4, VAR_0);
 if (!VAR_3)
  return 0;

 VAR_5 = FUNC_0(VAR_2, VAR_3->percpu_enabled);
 FUNC_2(VAR_3, VAR_4);

 return VAR_5;
}
