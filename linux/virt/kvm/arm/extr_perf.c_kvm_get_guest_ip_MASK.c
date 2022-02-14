
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 struct kvm_vcpu* FUNC_0 () ;
 unsigned long* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static unsigned long FUNC_2(void)
{
 struct kvm_vcpu *VAR_0;

 VAR_0 = FUNC_0();

 if (VAR_0)
  return *FUNC_1(VAR_0);

 return 0;
}
