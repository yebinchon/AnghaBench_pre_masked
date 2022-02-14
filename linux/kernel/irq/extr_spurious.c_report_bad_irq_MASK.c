
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct irq_desc*,int ) ;

__attribute__((used)) static void FUNC_1(struct irq_desc *VAR_0, irqreturn_t VAR_1)
{
 static int VAR_2 = 100;

 if (VAR_2 > 0) {
  VAR_2--;
  FUNC_0(VAR_0, VAR_1);
 }
}
