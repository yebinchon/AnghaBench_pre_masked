
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int vm_vaddr_t ;
typedef unsigned int uint64_t ;
struct kvm_vm {int page_shift; int pgtable_levels; int mode; } ;


 int FUNC_0 (int,char*,int ) ;

__attribute__((used)) static uint64_t FUNC_1(struct kvm_vm *VAR_0, vm_vaddr_t VAR_1)
{
 unsigned int VAR_2 = (VAR_0->page_shift - 3) + VAR_0->page_shift;
 uint64_t VAR_3 = (1UL << (VAR_0->page_shift - 3)) - 1;

 FUNC_0(VAR_0->pgtable_levels >= 3,
  "Mode %d does not have >= 3 page table levels", VAR_0->mode);

 return (VAR_1 >> VAR_2) & VAR_3;
}
