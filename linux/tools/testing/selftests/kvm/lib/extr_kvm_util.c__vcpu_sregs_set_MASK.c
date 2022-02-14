
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vcpu {int fd; } ;
struct kvm_vm {int dummy; } ;
struct kvm_sregs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,struct kvm_sregs*) ;
 struct vcpu* FUNC_2 (struct kvm_vm*,int ) ;

int FUNC_3(struct kvm_vm *VAR_1, uint32_t VAR_2, struct kvm_sregs *VAR_3)
{
 struct vcpu *VAR_4 = FUNC_2(VAR_1, VAR_2);

 FUNC_0(VAR_4 != ((void*)0), "vcpu not found, vcpuid: %u", VAR_2);

 return FUNC_1(VAR_4->fd, VAR_0, VAR_3);
}
