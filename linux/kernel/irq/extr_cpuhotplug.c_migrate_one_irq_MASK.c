
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_data {int irq; } ;
struct irq_chip {int (* irq_unmask ) (struct irq_data*) ;int (* irq_mask ) (struct irq_data*) ;int irq_set_affinity; } ;
struct cpumask {int dummy; } ;


 struct cpumask* VAR_0 ;
 scalar_t__ FUNC_0 (struct cpumask const*,struct cpumask*) ;
 int FUNC_1 (struct irq_data*) ;
 struct cpumask* FUNC_2 (struct irq_data*) ;
 struct irq_chip* FUNC_3 (struct irq_data*) ;
 struct irq_data* FUNC_4 (struct irq_desc*) ;
 struct cpumask* FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (struct irq_data*,struct cpumask const*,int) ;
 scalar_t__ FUNC_7 (struct irq_desc*,int) ;
 int FUNC_8 (struct irq_desc*) ;
 int FUNC_9 (struct irq_data*) ;
 int FUNC_10 (struct irq_desc*) ;
 scalar_t__ FUNC_11 (struct irq_data*) ;
 int FUNC_12 (struct irq_data*) ;
 scalar_t__ FUNC_13 (struct irq_data*) ;
 int FUNC_14 (struct irq_data*) ;
 int FUNC_15 (struct irq_data*) ;
 scalar_t__ VAR_1 ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (char*,int ,int) ;
 int FUNC_18 (struct irq_data*) ;
 int FUNC_19 (struct irq_data*) ;

__attribute__((used)) static bool FUNC_20(struct irq_desc *VAR_2)
{
 struct irq_data *VAR_3 = FUNC_4(VAR_2);
 struct irq_chip *VAR_4 = FUNC_3(VAR_3);
 bool VAR_5 = !FUNC_1(VAR_3) && !FUNC_12(VAR_3);
 const struct cpumask *VAR_6;
 bool VAR_7 = 0;
 int VAR_8;






 if (!VAR_4 || !VAR_4->irq_set_affinity) {
  FUNC_16("IRQ %u: Unable to migrate away\n", VAR_3->irq);
  return 0;
 }
 if (FUNC_13(VAR_3) || !FUNC_14(VAR_3) || !FUNC_9(VAR_3)) {




  FUNC_7(VAR_2, 0);
  return 0;
 }







 FUNC_8(VAR_2);







 if (FUNC_7(VAR_2, 1))
  VAR_6 = FUNC_5(VAR_2);
 else
  VAR_6 = FUNC_2(VAR_3);


 if (VAR_5 && VAR_4->irq_mask)
  VAR_4->irq_mask(VAR_3);

 if (FUNC_0(VAR_6, VAR_0) >= VAR_1) {




  if (FUNC_11(VAR_3)) {
   FUNC_15(VAR_3);
   FUNC_10(VAR_2);
   return 0;
  }
  VAR_6 = VAR_0;
  VAR_7 = 1;
 }






 VAR_8 = FUNC_6(VAR_3, VAR_6, 0);
 if (VAR_8) {
  FUNC_17("IRQ%u: set affinity failed(%d).\n",
        VAR_3->irq, VAR_8);
  VAR_7 = 0;
 }

 if (VAR_5 && VAR_4->irq_unmask)
  VAR_4->irq_unmask(VAR_3);

 return VAR_7;
}
