
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int release; int notify; } ;
struct irq_glue {struct cpu_rmap* rmap; TYPE_1__ notify; int index; } ;
struct cpu_rmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpu_rmap*,struct irq_glue*) ;
 int FUNC_1 (struct cpu_rmap*) ;
 int FUNC_2 (struct cpu_rmap*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (struct irq_glue*) ;
 struct irq_glue* FUNC_5 (int,int ) ;

int FUNC_6(struct cpu_rmap *VAR_4, int VAR_5)
{
 struct irq_glue *VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 int VAR_7;

 if (!VAR_6)
  return -VAR_0;
 VAR_6->notify.notify = VAR_2;
 VAR_6->notify.release = VAR_3;
 VAR_6->rmap = VAR_4;
 FUNC_1(VAR_4);
 VAR_6->index = FUNC_0(VAR_4, VAR_6);
 VAR_7 = FUNC_3(VAR_5, &VAR_6->notify);
 if (VAR_7) {
  FUNC_2(VAR_6->rmap);
  FUNC_4(VAR_6);
 }
 return VAR_7;
}
