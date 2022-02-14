
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_domain {int mapcount; TYPE_1__* ops; } ;
struct irq_data {scalar_t__ hwirq; struct irq_domain* domain; } ;
typedef scalar_t__ irq_hw_number_t ;
struct TYPE_2__ {int (* unmap ) (struct irq_domain*,unsigned int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (struct irq_domain*,scalar_t__) ;
 struct irq_data* FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,int *,int *) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct irq_domain*,unsigned int) ;
 int FUNC_7 (unsigned int) ;

void FUNC_8(struct irq_domain *VAR_1, unsigned int VAR_2)
{
 struct irq_data *VAR_3 = FUNC_2(VAR_2);
 irq_hw_number_t VAR_4;

 if (FUNC_0(!VAR_3 || VAR_3->domain != VAR_1,
   "virq%i doesn't exist; cannot disassociate\n", VAR_2))
  return;

 VAR_4 = VAR_3->hwirq;
 FUNC_4(VAR_2, VAR_0);


 FUNC_3(VAR_2, ((void*)0), ((void*)0));


 FUNC_7(VAR_2);


 if (VAR_1->ops->unmap)
  VAR_1->ops->unmap(VAR_1, VAR_2);
 FUNC_5();

 VAR_3->domain = ((void*)0);
 VAR_3->hwirq = 0;
 VAR_1->mapcount--;


 FUNC_1(VAR_1, VAR_4);
}
