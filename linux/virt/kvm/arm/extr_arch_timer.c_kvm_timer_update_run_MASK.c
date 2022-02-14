
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* run; } ;
struct kvm_sync_regs {int device_irq_level; } ;
struct arch_timer_context {int dummy; } ;
struct TYPE_3__ {struct kvm_sync_regs regs; } ;
struct TYPE_4__ {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct arch_timer_context*) ;
 struct arch_timer_context* FUNC_1 (struct kvm_vcpu*) ;
 struct arch_timer_context* FUNC_2 (struct kvm_vcpu*) ;

void FUNC_3(struct kvm_vcpu *VAR_2)
{
 struct arch_timer_context *VAR_3 = FUNC_2(VAR_2);
 struct arch_timer_context *VAR_4 = FUNC_1(VAR_2);
 struct kvm_sync_regs *VAR_5 = &VAR_2->run->s.regs;


 VAR_5->device_irq_level &= ~(VAR_1 |
        VAR_0);
 if (FUNC_0(VAR_3))
  VAR_5->device_irq_level |= VAR_1;
 if (FUNC_0(VAR_4))
  VAR_5->device_irq_level |= VAR_0;
}
