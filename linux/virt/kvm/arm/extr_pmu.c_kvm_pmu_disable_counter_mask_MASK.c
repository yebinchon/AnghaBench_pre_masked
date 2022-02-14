
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvm_pmu {struct kvm_pmc* pmc; } ;
struct TYPE_2__ {struct kvm_pmu pmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_pmc {scalar_t__ perf_event; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct kvm_pmc*) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct kvm_vcpu *VAR_1, u64 VAR_2)
{
 int VAR_3;
 struct kvm_pmu *VAR_4 = &VAR_1->arch.pmu;
 struct kvm_pmc *VAR_5;

 if (!VAR_2)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!(VAR_2 & FUNC_0(VAR_3)))
   continue;

  VAR_5 = &VAR_4->pmc[VAR_3];





  if (FUNC_3(VAR_5) &&
      FUNC_2(VAR_3)) {
   FUNC_1(VAR_1, VAR_3);
   continue;
  }


  if (VAR_5->perf_event)
   FUNC_4(VAR_5->perf_event);
 }
}
