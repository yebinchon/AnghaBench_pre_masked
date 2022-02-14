
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fwspec {scalar_t__ fwnode; } ;
struct irq_domain {int dummy; } ;
struct irq_data {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (struct irq_domain*,int ) ;
 struct irq_domain* VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct irq_domain*,int,int ,struct irq_fwspec*) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (struct irq_domain*) ;
 scalar_t__ FUNC_6 (struct irq_domain*,struct irq_fwspec*,int *,unsigned int*) ;
 int FUNC_7 (struct irq_domain*,int ) ;
 struct irq_domain* FUNC_8 (struct irq_fwspec*,int ) ;
 struct irq_data* FUNC_9 (int) ;
 unsigned int FUNC_10 (int) ;
 int FUNC_11 (struct irq_data*,unsigned int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ,...) ;
 int FUNC_14 (scalar_t__) ;

unsigned int FUNC_15(struct irq_fwspec *VAR_6)
{
 struct irq_domain *VAR_7;
 struct irq_data *VAR_8;
 irq_hw_number_t VAR_9;
 unsigned int VAR_10 = VAR_2;
 int VAR_11;

 if (VAR_6->fwnode) {
  VAR_7 = FUNC_8(VAR_6, VAR_1);
  if (!VAR_7)
   VAR_7 = FUNC_8(VAR_6, VAR_0);
 } else {
  VAR_7 = VAR_5;
 }

 if (!VAR_7) {
  FUNC_13("no irq domain found for %s !\n",
   FUNC_12(FUNC_14(VAR_6->fwnode)));
  return 0;
 }

 if (FUNC_6(VAR_7, VAR_6, &VAR_9, &VAR_10))
  return 0;





 if (FUNC_0(VAR_10 & ~VAR_3))
  VAR_10 &= VAR_3;





 VAR_11 = FUNC_7(VAR_7, VAR_9);
 if (VAR_11) {





  if (VAR_10 == VAR_2 || VAR_10 == FUNC_10(VAR_11))
   return VAR_11;





  if (FUNC_10(VAR_11) == VAR_2) {
   VAR_8 = FUNC_9(VAR_11);
   if (!VAR_8)
    return 0;

   FUNC_11(VAR_8, VAR_10);
   return VAR_11;
  }

  FUNC_13("type mismatch, failed to map hwirq-%lu for %s!\n",
   VAR_9, FUNC_12(FUNC_14(VAR_6->fwnode)));
  return 0;
 }

 if (FUNC_5(VAR_7)) {
  VAR_11 = FUNC_3(VAR_7, 1, VAR_4, VAR_6);
  if (VAR_11 <= 0)
   return 0;
 } else {

  VAR_11 = FUNC_1(VAR_7, VAR_9);
  if (!VAR_11)
   return VAR_11;
 }

 VAR_8 = FUNC_9(VAR_11);
 if (!VAR_8) {
  if (FUNC_5(VAR_7))
   FUNC_4(VAR_11, 1);
  else
   FUNC_2(VAR_11);
  return 0;
 }


 FUNC_11(VAR_8, VAR_10);

 return VAR_11;
}
