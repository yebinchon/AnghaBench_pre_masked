
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_pmu {TYPE_2__* pmc; } ;
struct TYPE_3__ {struct kvm_pmu pmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int idx; } ;


 int VAR_0 ;

void FUNC_0(struct kvm_vcpu *VAR_1)
{
 int VAR_2;
 struct kvm_pmu *VAR_3 = &VAR_1->arch.pmu;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_3->pmc[VAR_2].idx = VAR_2;
}
