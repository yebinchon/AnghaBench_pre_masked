
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;


 int ltq_mask_and_ack_irq (struct irq_data*) ;

__attribute__((used)) static void inline MEI_MASK_AND_ACK_IRQ(int x)
{
 struct irq_data d;
 d.hwirq = x;
 ltq_mask_and_ack_irq(&d);
}
