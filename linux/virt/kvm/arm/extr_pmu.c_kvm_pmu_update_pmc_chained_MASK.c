
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct kvm_pmu {int chained; struct kvm_pmc* pmc; } ;
struct TYPE_2__ {struct kvm_pmu pmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_pmc {int idx; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (struct kvm_pmc*) ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_pmc*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_0, u64 VAR_1)
{
 struct kvm_pmu *VAR_2 = &VAR_0->arch.pmu;
 struct kvm_pmc *VAR_3 = &VAR_2->pmc[VAR_1];

 if (FUNC_1(VAR_0, VAR_3->idx)) {




  if (!FUNC_2(VAR_3))
   FUNC_3(VAR_0, VAR_3);

  FUNC_4(VAR_3->idx >> 1, VAR_0->arch.pmu.chained);
 } else {
  FUNC_0(VAR_3->idx >> 1, VAR_0->arch.pmu.chained);
 }
}
