
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int kvm; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 unsigned long* FUNC_3 (struct kvm_vcpu*) ;
 int * FUNC_4 (struct kvm_vcpu*) ;

void FUNC_5(struct kvm_vcpu *VAR_1)
{
 unsigned long VAR_2 = *FUNC_3(VAR_1);
 if (!(VAR_2 & VAR_0)) {
  FUNC_1(*FUNC_4(VAR_1),
     FUNC_2(VAR_1));
  FUNC_0(VAR_1->kvm);
  *FUNC_3(VAR_1) = VAR_2 | VAR_0;
 }
}
