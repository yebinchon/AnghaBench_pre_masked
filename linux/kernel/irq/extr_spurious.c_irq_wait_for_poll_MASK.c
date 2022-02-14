
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int irq; } ;
struct irq_desc {scalar_t__ action; TYPE_1__ irq_data; int lock; } ;


 scalar_t__ FUNC_0 (int,char*,scalar_t__,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 () ;

bool FUNC_7(struct irq_desc *VAR_1)
{
 if (FUNC_0(VAR_0 == FUNC_6(),
        "irq poll in progress on cpu %d for irq %d\n",
        FUNC_6(), VAR_1->irq_data.irq))
  return 0;
 return 0;

}
