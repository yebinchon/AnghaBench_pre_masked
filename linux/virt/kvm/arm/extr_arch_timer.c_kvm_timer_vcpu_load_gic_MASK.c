
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int kvm; } ;
struct TYPE_2__ {int level; int irq; } ;
struct arch_timer_context {TYPE_1__ irq; struct kvm_vcpu* vcpu; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct arch_timer_context*) ;
 int FUNC_2 (struct kvm_vcpu*,int ,struct arch_timer_context*) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct arch_timer_context*,int) ;

__attribute__((used)) static void FUNC_5(struct arch_timer_context *VAR_0)
{
 struct kvm_vcpu *VAR_1 = VAR_0->vcpu;
 bool VAR_2 = 0;







 FUNC_2(VAR_0->vcpu, FUNC_1(VAR_0), VAR_0);

 if (FUNC_0(VAR_1->kvm))
  VAR_2 = FUNC_3(VAR_1, VAR_0->irq.irq);

 VAR_2 |= VAR_0->irq.level;

 FUNC_4(VAR_0, VAR_2);
}
