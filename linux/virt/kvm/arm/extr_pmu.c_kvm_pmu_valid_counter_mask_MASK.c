
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;

u64 FUNC_3(struct kvm_vcpu *VAR_4)
{
 u64 VAR_5 = FUNC_2(VAR_4, VAR_3) >> VAR_2;

 VAR_5 &= VAR_1;
 if (VAR_5 == 0)
  return FUNC_0(VAR_0);
 else
  return FUNC_1(VAR_5 - 1, 0) | FUNC_0(VAR_0);
}
