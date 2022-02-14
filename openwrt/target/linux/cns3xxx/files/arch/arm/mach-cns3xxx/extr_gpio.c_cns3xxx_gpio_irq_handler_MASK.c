
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
struct cns3xxx_gpio_chip {int domain; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (int ) ;
 struct irq_chip* FUNC_4 (struct irq_desc*) ;
 struct cns3xxx_gpio_chip* FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(struct irq_desc *VAR_1)
{
 struct cns3xxx_gpio_chip *VAR_2 = FUNC_5(VAR_1);
 struct irq_chip *VAR_3 = FUNC_4(VAR_1);
 u16 VAR_4;
 u32 VAR_5;

 FUNC_1(VAR_3, VAR_1);


 VAR_5 = FUNC_0(VAR_2->base + VAR_0);
 for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
  if (VAR_5 & (1 << VAR_4)) {

   FUNC_3(FUNC_6(VAR_2->domain, VAR_4));
  }
 }

 FUNC_2(VAR_3, VAR_1);
}
