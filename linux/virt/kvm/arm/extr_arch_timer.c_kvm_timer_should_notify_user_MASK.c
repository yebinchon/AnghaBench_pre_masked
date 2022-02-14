
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int kvm; TYPE_2__* run; } ;
struct kvm_sync_regs {int device_irq_level; } ;
struct arch_timer_context {int dummy; } ;
struct TYPE_3__ {struct kvm_sync_regs regs; } ;
struct TYPE_4__ {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct arch_timer_context*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct arch_timer_context* FUNC_3 (struct kvm_vcpu*) ;
 struct arch_timer_context* FUNC_4 (struct kvm_vcpu*) ;

bool FUNC_5(struct kvm_vcpu *VAR_2)
{
 struct arch_timer_context *VAR_3 = FUNC_4(VAR_2);
 struct arch_timer_context *VAR_4 = FUNC_3(VAR_2);
 struct kvm_sync_regs *VAR_5 = &VAR_2->run->s.regs;
 bool VAR_6, VAR_7;

 if (FUNC_2(FUNC_0(VAR_2->kvm)))
  return 0;

 VAR_6 = VAR_5->device_irq_level & VAR_1;
 VAR_7 = VAR_5->device_irq_level & VAR_0;

 return FUNC_1(VAR_3) != VAR_6 ||
        FUNC_1(VAR_4) != VAR_7;
}
