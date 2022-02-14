
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int action; } ;
struct irq_data {int dummy; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,struct cpumask const*) ;
 struct cpumask* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;
 struct irq_data* FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (struct irq_data*,struct cpumask const*,int) ;
 int FUNC_5 (struct irq_desc*,int ,int ) ;
 int FUNC_6 (struct irq_data*) ;
 scalar_t__ FUNC_7 (struct irq_data*) ;
 int FUNC_8 (struct irq_data*) ;

__attribute__((used)) static void FUNC_9(struct irq_desc *VAR_2, unsigned int VAR_3)
{
 struct irq_data *VAR_4 = FUNC_3(VAR_2);
 const struct cpumask *VAR_5 = FUNC_1(VAR_4);

 if (!FUNC_6(VAR_4) || !VAR_2->action ||
     !FUNC_2(VAR_4) || !FUNC_0(VAR_3, VAR_5))
  return;

 if (FUNC_7(VAR_4)) {
  FUNC_5(VAR_2, VAR_0, VAR_1);
  return;
 }






 if (!FUNC_8(VAR_4))
  FUNC_4(VAR_4, VAR_5, 0);
}
