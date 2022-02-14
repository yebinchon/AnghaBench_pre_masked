
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int uint32_t ;
struct kvm_vm {scalar_t__ mode; int pgd_created; int pgd; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct kvm_vm*,int ,int ) ;

void FUNC_2(struct kvm_vm *VAR_2, uint32_t VAR_3)
{
 FUNC_0(VAR_2->mode == VAR_1, "Attempt to use "
  "unknown or unsupported guest mode, mode: 0x%x", VAR_2->mode);


 if (!VAR_2->pgd_created) {
  vm_paddr_t VAR_4 = FUNC_1(VAR_2,
   VAR_0, VAR_3);
  VAR_2->pgd = VAR_4;
  VAR_2->pgd_created = 1;
 }
}
