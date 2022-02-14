
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct kvm_pmu {struct kvm_pmc* pmc; } ;
struct TYPE_2__ {struct kvm_pmu pmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_pmc {int dummy; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct kvm_vcpu*,struct kvm_pmc*) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (struct kvm_pmc*) ;
 size_t FUNC_3 (size_t) ;
 size_t FUNC_4 (size_t) ;

u64 FUNC_5(struct kvm_vcpu *VAR_1, u64 VAR_2)
{
 u64 VAR_3;
 struct kvm_pmu *VAR_4 = &VAR_1->arch.pmu;
 struct kvm_pmc *VAR_5 = &VAR_4->pmc[VAR_2];

 VAR_3 = FUNC_0(VAR_1, VAR_5);

 if (FUNC_2(VAR_5) &&
     FUNC_1(VAR_2))
  VAR_3 = FUNC_4(VAR_3);
 else if (VAR_2 != VAR_0)
  VAR_3 = FUNC_3(VAR_3);

 return VAR_3;
}
