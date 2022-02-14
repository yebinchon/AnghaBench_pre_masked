
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int * action; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct irq_desc *VAR_1)
{
 return (VAR_1->action && VAR_1->action == &VAR_0);
}
