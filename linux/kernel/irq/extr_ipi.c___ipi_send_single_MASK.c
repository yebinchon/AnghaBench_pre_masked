
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int dummy; } ;
struct irq_data {unsigned int irq; TYPE_1__* common; int domain; } ;
struct irq_chip {int (* ipi_send_single ) (struct irq_data*,unsigned int) ;int (* ipi_send_mask ) (struct irq_data*,int ) ;} ;
struct TYPE_2__ {unsigned int ipi_offset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct irq_chip*,struct irq_data*,int *,unsigned int) ;
 struct irq_chip* FUNC_3 (struct irq_data*) ;
 struct irq_data* FUNC_4 (struct irq_desc*) ;
 scalar_t__ FUNC_5 (int ) ;
 struct irq_data* FUNC_6 (unsigned int) ;
 int FUNC_7 (struct irq_data*,int ) ;
 int FUNC_8 (struct irq_data*,unsigned int) ;

int FUNC_9(struct irq_desc *VAR_1, unsigned int VAR_2)
{
 struct irq_data *VAR_3 = FUNC_4(VAR_1);
 struct irq_chip *VAR_4 = FUNC_3(VAR_3);
 if (!VAR_4->ipi_send_single) {
  VAR_4->ipi_send_mask(VAR_3, FUNC_1(VAR_2));
  return 0;
 }


 if (FUNC_5(VAR_3->domain) &&
     VAR_2 != VAR_3->common->ipi_offset) {

  unsigned VAR_5 = VAR_3->irq + VAR_2 - VAR_3->common->ipi_offset;

  VAR_3 = FUNC_6(VAR_5);
 }
 VAR_4->ipi_send_single(VAR_3, VAR_2);
 return 0;
}
