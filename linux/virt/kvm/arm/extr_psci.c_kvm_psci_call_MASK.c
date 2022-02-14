
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int kvm; } ;


 int VAR_0 ;



 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_1)
{
 switch (FUNC_3(VAR_1, VAR_1->kvm)) {
 case 128:
  return FUNC_2(VAR_1);
 case 129:
  return FUNC_1(VAR_1);
 case 130:
  return FUNC_0(VAR_1);
 default:
  return -VAR_0;
 };
}
