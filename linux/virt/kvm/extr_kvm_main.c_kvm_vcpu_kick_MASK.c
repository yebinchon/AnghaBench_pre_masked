
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int cpu; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 unsigned int VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

void FUNC_6(struct kvm_vcpu *VAR_1)
{
 int VAR_2;
 int VAR_3 = VAR_1->cpu;

 if (FUNC_3(VAR_1))
  return;

 VAR_2 = FUNC_1();
 if (VAR_3 != VAR_2 && (unsigned)VAR_3 < VAR_0 && FUNC_0(VAR_3))
  if (FUNC_2(VAR_1))
   FUNC_5(VAR_3);
 FUNC_4();
}
