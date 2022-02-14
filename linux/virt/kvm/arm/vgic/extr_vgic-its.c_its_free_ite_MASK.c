
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm {int dummy; } ;
struct its_ite {TYPE_1__* irq; int ite_list; } ;
struct TYPE_2__ {int host_irq; scalar_t__ hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct its_ite*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kvm*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct kvm *VAR_0, struct its_ite *VAR_1)
{
 FUNC_3(&VAR_1->ite_list);


 if (VAR_1->irq) {
  if (VAR_1->irq->hw)
   FUNC_0(FUNC_1(VAR_1->irq->host_irq));

  FUNC_4(VAR_0, VAR_1->irq);
 }

 FUNC_2(VAR_1);
}
