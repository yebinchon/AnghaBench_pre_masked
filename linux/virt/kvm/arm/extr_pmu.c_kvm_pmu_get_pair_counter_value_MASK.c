
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pmc {int idx; scalar_t__ perf_event; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;
 struct kvm_pmc* FUNC_1 (struct kvm_pmc*) ;
 scalar_t__ FUNC_2 (struct kvm_pmc*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,int*,int*) ;

__attribute__((used)) static u64 FUNC_5(struct kvm_vcpu *VAR_3,
       struct kvm_pmc *VAR_4)
{
 u64 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 if (FUNC_2(VAR_4)) {
  VAR_4 = FUNC_1(VAR_4);
  VAR_7 = VAR_2 + VAR_4->idx;

  VAR_5 = FUNC_0(VAR_3, VAR_7);
  VAR_6 = FUNC_0(VAR_3, VAR_7 + 1);

  VAR_5 = FUNC_3(VAR_5) | (VAR_6 << 32);
 } else {
  VAR_7 = (VAR_4->idx == VAR_0)
        ? VAR_1 : VAR_2 + VAR_4->idx;
  VAR_5 = FUNC_0(VAR_3, VAR_7);
 }





 if (VAR_4->perf_event)
  VAR_5 += FUNC_4(VAR_4->perf_event, &VAR_8,
       &VAR_9);

 return VAR_5;
}
