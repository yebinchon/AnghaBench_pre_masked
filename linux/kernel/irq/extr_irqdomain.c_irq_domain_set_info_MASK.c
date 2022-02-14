
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_chip {int dummy; } ;
typedef int irq_hw_number_t ;
typedef int irq_flow_handler_t ;


 int FUNC_0 (unsigned int,struct irq_chip*,int ,char const*) ;
 int FUNC_1 (unsigned int,void*) ;
 int FUNC_2 (unsigned int,void*) ;

void FUNC_3(struct irq_domain *VAR_0, unsigned int VAR_1,
    irq_hw_number_t VAR_2, struct irq_chip *VAR_3,
    void *VAR_4, irq_flow_handler_t VAR_5,
    void *VAR_6, const char *VAR_7)
{
 FUNC_0(VAR_1, VAR_3, VAR_5, VAR_7);
 FUNC_1(VAR_1, VAR_4);
 FUNC_2(VAR_1, VAR_6);
}
