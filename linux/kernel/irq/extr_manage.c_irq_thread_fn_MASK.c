
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {scalar_t__ (* thread_fn ) (int ,int ) ;int dev_id; int irq; } ;
struct irq_desc {int threads_handled; } ;
typedef scalar_t__ irqreturn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct irq_desc*,struct irqaction*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(struct irq_desc *VAR_1,
  struct irqaction *VAR_2)
{
 irqreturn_t VAR_3;

 VAR_3 = VAR_2->thread_fn(VAR_2->irq, VAR_2->dev_id);
 if (VAR_3 == VAR_0)
  FUNC_0(&VAR_1->threads_handled);

 FUNC_1(VAR_1, VAR_2);
 return VAR_3;
}
