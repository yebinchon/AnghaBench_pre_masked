
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_pmu {int chained; int * pmc; } ;
struct TYPE_2__ {struct kvm_pmu pmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int *) ;

void FUNC_2(struct kvm_vcpu *VAR_2)
{
 int VAR_3;
 struct kvm_pmu *VAR_4 = &VAR_2->arch.pmu;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(VAR_2, &VAR_4->pmc[VAR_3]);

 FUNC_0(VAR_2->arch.pmu.chained, VAR_1);
}
