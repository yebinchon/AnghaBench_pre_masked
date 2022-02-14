
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {int irq; } ;
struct irq_glue {TYPE_1__ notify; } ;
struct cpu_rmap {size_t used; struct irq_glue** obj; } ;


 int FUNC_0 (struct cpu_rmap*) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct cpu_rmap *VAR_0)
{
 struct irq_glue *VAR_1;
 u16 VAR_2;

 if (!VAR_0)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->used; VAR_2++) {
  VAR_1 = VAR_0->obj[VAR_2];
  FUNC_1(VAR_1->notify.irq, ((void*)0));
 }

 FUNC_0(VAR_0);
}
