
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vcpu {int fd; } ;
struct kvm_vm {int dummy; } ;
struct kvm_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct kvm_regs*) ;
 struct vcpu* FUNC_2 (struct kvm_vm*,int ) ;

void FUNC_3(struct kvm_vm *VAR_2, uint32_t VAR_3, struct kvm_regs *VAR_4)
{
 struct vcpu *VAR_5 = FUNC_2(VAR_2, VAR_3);
 int VAR_6;

 FUNC_0(VAR_5 != ((void*)0), "vcpu not found, vcpuid: %u", VAR_3);

 VAR_6 = FUNC_1(VAR_5->fd, VAR_0, VAR_4);
 FUNC_0(VAR_6 == 0, "KVM_SET_REGS failed, rc: %i errno: %i",
  VAR_6, VAR_1);
}
