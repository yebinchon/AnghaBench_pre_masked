
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_pmu {int irq_level; } ;
struct TYPE_4__ {struct kvm_pmu pmu; } ;
struct kvm_vcpu {int kvm; TYPE_3__* run; TYPE_1__ arch; } ;
struct kvm_sync_regs {int device_irq_level; } ;
struct TYPE_5__ {struct kvm_sync_regs regs; } ;
struct TYPE_6__ {TYPE_2__ s; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

bool FUNC_2(struct kvm_vcpu *VAR_1)
{
 struct kvm_pmu *VAR_2 = &VAR_1->arch.pmu;
 struct kvm_sync_regs *VAR_3 = &VAR_1->run->s.regs;
 bool VAR_4 = VAR_3->device_irq_level & VAR_0;

 if (FUNC_1(FUNC_0(VAR_1->kvm)))
  return 0;

 return VAR_2->irq_level != VAR_4;
}
