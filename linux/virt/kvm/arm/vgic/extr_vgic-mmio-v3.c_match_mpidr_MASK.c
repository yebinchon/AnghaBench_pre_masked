
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef int u16 ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,int ) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(u64 VAR_1, u16 VAR_2, struct kvm_vcpu *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;





 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = FUNC_1(VAR_4, 0);
 VAR_4 &= ~VAR_0;


 if (VAR_1 != VAR_4)
  return -1;


 if (!(VAR_2 & FUNC_0(VAR_5)))
  return -1;

 return VAR_5;
}
