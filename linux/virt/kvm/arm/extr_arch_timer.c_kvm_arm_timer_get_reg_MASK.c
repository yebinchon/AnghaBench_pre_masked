
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

u64 FUNC_3(struct kvm_vcpu *VAR_3, u64 VAR_4)
{
 switch (VAR_4) {
 case 129:
  return FUNC_0(VAR_3,
       FUNC_2(VAR_3), VAR_1);
 case 130:
  return FUNC_0(VAR_3,
       FUNC_2(VAR_3), VAR_0);
 case 128:
  return FUNC_0(VAR_3,
       FUNC_2(VAR_3), VAR_2);
 case 132:
  return FUNC_0(VAR_3,
       FUNC_1(VAR_3), VAR_1);
 case 133:
  return FUNC_0(VAR_3,
       FUNC_2(VAR_3), VAR_0);
 case 131:
  return FUNC_0(VAR_3,
       FUNC_1(VAR_3), VAR_2);
 }
 return (u64)-1;
}
