
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kvm_vm {int dummy; } ;


 int FUNC_0 (int,char*,int,int ) ;
 int FUNC_1 (struct kvm_vm*,int ) ;
 int VAR_0 ;

void FUNC_2(struct kvm_vm *VAR_1, uint32_t VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_3 == 0, "KVM_RUN IOCTL failed, "
  "rc: %i errno: %i", VAR_3, VAR_0);
}
