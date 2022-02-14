
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int irq_num; int ready; int created; } ;
struct TYPE_4__ {TYPE_1__ pmu; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,int) ;

int FUNC_5(struct kvm_vcpu *VAR_1)
{
 if (!VAR_1->arch.pmu.created)
  return 0;






 if (FUNC_1(VAR_1->kvm)) {
  int VAR_2 = VAR_1->arch.pmu.irq_num;
  if (!FUNC_2(VAR_1))
   return -VAR_0;







  if (!FUNC_0(VAR_2) && !FUNC_4(VAR_1->kvm, VAR_2))
   return -VAR_0;
 } else if (FUNC_2(VAR_1)) {
     return -VAR_0;
 }

 FUNC_3(VAR_1);
 VAR_1->arch.pmu.ready = 1;

 return 0;
}
