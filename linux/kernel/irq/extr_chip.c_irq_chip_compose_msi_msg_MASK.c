
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msi_msg {int dummy; } ;
struct irq_data {TYPE_1__* chip; struct irq_data* parent_data; } ;
struct TYPE_2__ {int (* irq_compose_msi_msg ) (struct irq_data*,struct msi_msg*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct irq_data*,struct msi_msg*) ;

int FUNC_1(struct irq_data *VAR_1, struct msi_msg *VAR_2)
{
 struct irq_data *VAR_3 = ((void*)0);




  if (VAR_1->chip && VAR_1->chip->irq_compose_msi_msg)
   VAR_3 = VAR_1;
 if (!VAR_3)
  return -VAR_0;

 VAR_3->chip->irq_compose_msi_msg(VAR_3, VAR_2);

 return 0;
}
