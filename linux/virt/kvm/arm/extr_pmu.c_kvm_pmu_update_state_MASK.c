
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_pmu {int irq_level; int irq_num; } ;
struct TYPE_2__ {struct kvm_pmu pmu; } ;
struct kvm_vcpu {int vcpu_id; int kvm; TYPE_1__ arch; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,int ,int ,int,struct kvm_pmu*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_0)
{
 struct kvm_pmu *VAR_1 = &VAR_0->arch.pmu;
 bool VAR_2;

 if (!FUNC_2(VAR_0))
  return;

 VAR_2 = !!FUNC_3(VAR_0);
 if (VAR_1->irq_level == VAR_2)
  return;

 VAR_1->irq_level = VAR_2;

 if (FUNC_5(FUNC_1(VAR_0->kvm))) {
  int VAR_3 = FUNC_4(VAR_0->kvm, VAR_0->vcpu_id,
           VAR_1->irq_num, VAR_2, VAR_1);
  FUNC_0(VAR_3);
 }
}
