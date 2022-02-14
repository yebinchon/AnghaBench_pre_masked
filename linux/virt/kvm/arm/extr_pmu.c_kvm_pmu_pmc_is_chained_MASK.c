
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chained; } ;
struct TYPE_4__ {TYPE_1__ pmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm_pmc {int idx; } ;


 struct kvm_vcpu* FUNC_0 (struct kvm_pmc*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static bool FUNC_2(struct kvm_pmc *VAR_0)
{
 struct kvm_vcpu *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_0->idx >> 1, VAR_1->arch.pmu.chained);
}
