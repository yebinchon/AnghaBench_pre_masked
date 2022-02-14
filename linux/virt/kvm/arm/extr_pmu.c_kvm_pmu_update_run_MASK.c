
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ irq_level; } ;
struct TYPE_8__ {TYPE_3__ pmu; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_2__* run; } ;
struct kvm_sync_regs {int device_irq_level; } ;
struct TYPE_5__ {struct kvm_sync_regs regs; } ;
struct TYPE_6__ {TYPE_1__ s; } ;


 int VAR_0 ;

void FUNC_0(struct kvm_vcpu *VAR_1)
{
 struct kvm_sync_regs *VAR_2 = &VAR_1->run->s.regs;


 VAR_2->device_irq_level &= ~VAR_0;
 if (VAR_1->arch.pmu.irq_level)
  VAR_2->device_irq_level |= VAR_0;
}
