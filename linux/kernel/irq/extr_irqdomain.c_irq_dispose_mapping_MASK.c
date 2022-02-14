
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {struct irq_domain* domain; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct irq_domain*,unsigned int) ;
 int FUNC_2 (unsigned int,int) ;
 scalar_t__ FUNC_3 (struct irq_domain*) ;
 int FUNC_4 (unsigned int) ;
 struct irq_data* FUNC_5 (unsigned int) ;

void FUNC_6(unsigned int VAR_0)
{
 struct irq_data *VAR_1 = FUNC_5(VAR_0);
 struct irq_domain *VAR_2;

 if (!VAR_0 || !VAR_1)
  return;

 VAR_2 = VAR_1->domain;
 if (FUNC_0(VAR_2 == ((void*)0)))
  return;

 if (FUNC_3(VAR_2)) {
  FUNC_2(VAR_0, 1);
 } else {
  FUNC_1(VAR_2, VAR_0);
  FUNC_4(VAR_0);
 }
}
