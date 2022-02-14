
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct kvm_pmu {struct kvm_pmc* pmc; } ;
struct TYPE_3__ {struct kvm_pmu pmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_pmc {TYPE_2__* perf_event; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct kvm_pmc*) ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7(struct kvm_vcpu *VAR_4, u64 VAR_5)
{
 int VAR_6;
 struct kvm_pmu *VAR_7 = &VAR_4->arch.pmu;
 struct kvm_pmc *VAR_8;

 if (!(FUNC_1(VAR_4, VAR_3) & VAR_1) || !VAR_5)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (!(VAR_5 & FUNC_0(VAR_6)))
   continue;

  VAR_8 = &VAR_7->pmc[VAR_6];





  if (FUNC_5(VAR_8) &&
      FUNC_4(VAR_6)) {
   FUNC_3(VAR_4, VAR_6);
   continue;
  }


  if (VAR_8->perf_event) {
   FUNC_6(VAR_8->perf_event);
   if (VAR_8->perf_event->state != VAR_2)
    FUNC_2("fail to enable perf event\n");
  }
 }
}
