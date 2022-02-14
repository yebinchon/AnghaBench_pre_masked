
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
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int,int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;

void FUNC_5(struct kvm_vcpu *VAR_5, u64 VAR_6)
{
 u64 VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_6 & VAR_2) {
  FUNC_2(VAR_5,
         FUNC_0(VAR_5, VAR_4) & VAR_7);
 } else {
  FUNC_1(VAR_5, VAR_7);
 }

 if (VAR_6 & VAR_1)
  FUNC_3(VAR_5, VAR_0, 0);

 if (VAR_6 & VAR_3) {
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   FUNC_3(VAR_5, VAR_8, 0);
 }
}
