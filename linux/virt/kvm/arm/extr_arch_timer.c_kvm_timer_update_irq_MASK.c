
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int vcpu_id; int kvm; } ;
struct TYPE_2__ {int level; int irq; } ;
struct arch_timer_context {TYPE_1__ irq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int,struct arch_timer_context*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_0, bool VAR_1,
     struct arch_timer_context *VAR_2)
{
 int VAR_3;

 VAR_2->irq.level = VAR_1;
 FUNC_2(VAR_0->vcpu_id, VAR_2->irq.irq,
       VAR_2->irq.level);

 if (!FUNC_3(VAR_0->kvm)) {
  VAR_3 = FUNC_1(VAR_0->kvm, VAR_0->vcpu_id,
       VAR_2->irq.irq,
       VAR_2->irq.level,
       VAR_2);
  FUNC_0(VAR_3);
 }
}
