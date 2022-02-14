
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_vaddr_t ;
typedef scalar_t__ vm_paddr_t ;
struct kvm_vm {int dummy; } ;


 scalar_t__ FUNC_0 (struct kvm_vm*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct kvm_vm*,int *) ;
 int * VAR_0 ;
 int FUNC_2 (struct kvm_vm*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vm *VAR_1, vm_paddr_t VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2, VAR_2 + 1))
  return 0;

 FUNC_2(VAR_1, VAR_2, VAR_2, 0);

 VAR_0 = (vm_vaddr_t *)VAR_2;
 FUNC_1(VAR_1, VAR_0);

 return 1;
}
