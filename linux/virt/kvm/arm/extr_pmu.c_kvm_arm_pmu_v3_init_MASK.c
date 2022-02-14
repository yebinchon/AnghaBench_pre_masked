
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int created; int irq_num; } ;
struct TYPE_3__ {TYPE_2__ pmu; int features; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct kvm_vcpu*,int ,TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_4)
{
 if (!FUNC_2())
  return -VAR_1;

 if (!FUNC_4(VAR_3, VAR_4->arch.features))
  return -VAR_2;

 if (VAR_4->arch.pmu.created)
  return -VAR_0;

 if (FUNC_0(VAR_4->kvm)) {
  int VAR_5;






  if (!FUNC_5(VAR_4->kvm))
   return -VAR_1;

  if (!FUNC_1(VAR_4))
   return -VAR_2;

  VAR_5 = FUNC_3(VAR_4, VAR_4->arch.pmu.irq_num,
      &VAR_4->arch.pmu);
  if (VAR_5)
   return VAR_5;
 }

 VAR_4->arch.pmu.created = 1;
 return 0;
}
