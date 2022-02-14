
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static u64 FUNC_2(struct kvm_vcpu *VAR_5)
{
 u64 VAR_6 = 0;

 if ((FUNC_0(VAR_5, VAR_2) & VAR_0)) {
  VAR_6 = FUNC_0(VAR_5, VAR_4);
  VAR_6 &= FUNC_0(VAR_5, VAR_1);
  VAR_6 &= FUNC_0(VAR_5, VAR_3);
  VAR_6 &= FUNC_1(VAR_5);
 }

 return VAR_6;
}
