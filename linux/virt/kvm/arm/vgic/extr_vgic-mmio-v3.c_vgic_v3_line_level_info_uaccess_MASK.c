
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;
 int FUNC_1 (struct kvm_vcpu*,int,int ) ;

int FUNC_2(struct kvm_vcpu *VAR_1, bool VAR_2,
        u32 VAR_3, u64 *VAR_4)
{
 if (VAR_3 % 32)
  return -VAR_0;

 if (VAR_2)
  FUNC_1(VAR_1, VAR_3, *VAR_4);
 else
  *VAR_4 = FUNC_0(VAR_1, VAR_3);

 return 0;
}
