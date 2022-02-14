
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vcpu {scalar_t__ id; struct vcpu* next; } ;
struct kvm_vm {struct vcpu* vcpu_head; } ;



struct vcpu *FUNC_0(struct kvm_vm *VAR_0, uint32_t VAR_1)
{
 struct vcpu *VAR_2;

 for (VAR_2 = VAR_0->vcpu_head; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->id == VAR_1)
   return VAR_2;
 }

 return ((void*)0);
}
