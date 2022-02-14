
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_fwspec {int * param; int param_count; int fwnode; } ;
struct irq_domain {TYPE_1__* ops; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {int (* translate ) (struct irq_domain*,struct irq_fwspec*,int *,unsigned int*) ;int (* xlate ) (struct irq_domain*,int ,int *,int ,int *,unsigned int*) ;} ;


 int FUNC_0 (struct irq_domain*,struct irq_fwspec*,int *,unsigned int*) ;
 int FUNC_1 (struct irq_domain*,int ,int *,int ,int *,unsigned int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_0,
    struct irq_fwspec *VAR_1,
    irq_hw_number_t *VAR_2, unsigned int *VAR_3)
{




 if (VAR_0->ops->xlate)
  return VAR_0->ops->xlate(VAR_0, FUNC_2(VAR_1->fwnode),
         VAR_1->param, VAR_1->param_count,
         VAR_2, VAR_3);


 *VAR_2 = VAR_1->param[0];
 return 0;
}
