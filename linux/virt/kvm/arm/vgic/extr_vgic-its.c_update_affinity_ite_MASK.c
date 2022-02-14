
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct kvm {int dummy; } ;
struct its_ite {int irq; TYPE_1__* collection; } ;
struct TYPE_2__ {int target_addr; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct kvm_vcpu* FUNC_1 (struct kvm*,int ) ;
 int FUNC_2 (int ,struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm *VAR_0, struct its_ite *VAR_1)
{
 struct kvm_vcpu *VAR_2;

 if (!FUNC_0(VAR_1->collection))
  return;

 VAR_2 = FUNC_1(VAR_0, VAR_1->collection->target_addr);
 FUNC_2(VAR_1->irq, VAR_2);
}
