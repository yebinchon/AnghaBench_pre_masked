
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct perf_event_attr {int size; int pinned; int disabled; int exclude_user; int exclude_kernel; int exclude_hv; int exclude_host; size_t config; size_t sample_period; int config1; int type; } ;
struct perf_event {int dummy; } ;
struct kvm_pmu {int * pmc; } ;
struct TYPE_2__ {struct kvm_pmu pmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_pmc {scalar_t__ idx; struct perf_event* perf_event; } ;
typedef int attr ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_2 (struct perf_event*) ;
 size_t FUNC_3 (struct kvm_vcpu*,size_t) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*,scalar_t__) ;
 struct kvm_pmc* FUNC_5 (int *) ;
 size_t FUNC_6 (struct kvm_vcpu*,struct kvm_pmc*) ;
 scalar_t__ FUNC_7 (struct kvm_vcpu*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct kvm_vcpu*,scalar_t__) ;
 int VAR_11 ;
 int FUNC_9 (struct kvm_vcpu*,struct kvm_pmc*) ;
 int FUNC_10 (struct perf_event_attr*,int ,int) ;
 struct perf_event* FUNC_11 (struct perf_event_attr*,int,int ,int ,struct kvm_pmc*) ;
 int FUNC_12 (char*,int ) ;

__attribute__((used)) static void FUNC_13(struct kvm_vcpu *VAR_12, u64 VAR_13)
{
 struct kvm_pmu *VAR_14 = &VAR_12->arch.pmu;
 struct kvm_pmc *VAR_15;
 struct perf_event *VAR_16;
 struct perf_event_attr VAR_17;
 u64 VAR_18, VAR_19, VAR_20, VAR_21;






 VAR_15 = FUNC_5(&VAR_14->pmc[VAR_13]);

 VAR_20 = (VAR_15->idx == VAR_2)
       ? VAR_8 : VAR_9 + VAR_15->idx;
 VAR_21 = FUNC_3(VAR_12, VAR_20);

 FUNC_9(VAR_12, VAR_15);
 VAR_18 = VAR_21 & VAR_3;


 if (VAR_18 == VAR_1 &&
     VAR_15->idx != VAR_2)
  return;

 FUNC_10(&VAR_17, 0, sizeof(struct perf_event_attr));
 VAR_17.type = VAR_7;
 VAR_17.size = sizeof(VAR_17);
 VAR_17.pinned = 1;
 VAR_17.disabled = !FUNC_4(VAR_12, VAR_15->idx);
 VAR_17.exclude_user = VAR_21 & VAR_4 ? 1 : 0;
 VAR_17.exclude_kernel = VAR_21 & VAR_5 ? 1 : 0;
 VAR_17.exclude_hv = 1;
 VAR_17.exclude_host = 1;
 VAR_17.config = (VAR_15->idx == VAR_2) ?
  VAR_0 : VAR_18;

 VAR_19 = FUNC_6(VAR_12, VAR_15);

 if (FUNC_7(VAR_12, VAR_15->idx)) {





  VAR_17.sample_period = (-VAR_19) & FUNC_0(63, 0);
  if (FUNC_4(VAR_12, VAR_15->idx + 1))
   VAR_17.config1 |= VAR_6;

  VAR_16 = FUNC_11(&VAR_17, -1, VAR_10,
        VAR_11,
        VAR_15 + 1);
 } else {

  if (FUNC_8(VAR_12, VAR_15->idx))
   VAR_17.sample_period = (-VAR_19) & FUNC_0(63, 0);
  else
   VAR_17.sample_period = (-VAR_19) & FUNC_0(31, 0);

  VAR_16 = FUNC_11(&VAR_17, -1, VAR_10,
       VAR_11, VAR_15);
 }

 if (FUNC_1(VAR_16)) {
  FUNC_12("kvm: pmu event creation failed %ld\n",
       FUNC_2(VAR_16));
  return;
 }

 VAR_15->perf_event = VAR_16;
}
