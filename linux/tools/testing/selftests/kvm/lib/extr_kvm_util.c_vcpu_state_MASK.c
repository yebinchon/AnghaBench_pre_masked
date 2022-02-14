
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vcpu {struct kvm_run* state; } ;
struct kvm_vm {int dummy; } ;
struct kvm_run {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct vcpu* FUNC_1 (struct kvm_vm*,int ) ;

struct kvm_run *FUNC_2(struct kvm_vm *VAR_0, uint32_t VAR_1)
{
 struct vcpu *VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_2 != ((void*)0), "vcpu not found, vcpuid: %u", VAR_1);

 return VAR_2->state;
}
