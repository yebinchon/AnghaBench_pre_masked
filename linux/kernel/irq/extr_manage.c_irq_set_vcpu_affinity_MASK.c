
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_data {struct irq_data* parent_data; } ;
struct irq_chip {int (* irq_set_vcpu_affinity ) (struct irq_data*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct irq_chip* FUNC_0 (struct irq_data*) ;
 struct irq_data* FUNC_1 (struct irq_desc*) ;
 struct irq_desc* FUNC_2 (unsigned int,unsigned long*,int ) ;
 int FUNC_3 (struct irq_desc*,unsigned long) ;
 int FUNC_4 (struct irq_data*,void*) ;

int FUNC_5(unsigned int VAR_2, void *VAR_3)
{
 unsigned long VAR_4;
 struct irq_desc *VAR_5 = FUNC_2(VAR_2, &VAR_4, 0);
 struct irq_data *VAR_6;
 struct irq_chip *VAR_7;
 int VAR_8 = -VAR_1;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5);
 do {
  VAR_7 = FUNC_0(VAR_6);
  if (VAR_7 && VAR_7->irq_set_vcpu_affinity)
   break;



  VAR_6 = ((void*)0);

 } while (VAR_6);

 if (VAR_6)
  VAR_8 = VAR_7->irq_set_vcpu_affinity(VAR_6, VAR_3);
 FUNC_3(VAR_5, VAR_4);

 return VAR_8;
}
