
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int tot_count; } ;


 int FUNC_0 (struct irq_desc*) ;

__attribute__((used)) static inline void FUNC_1(struct irq_desc *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->tot_count++;
}
