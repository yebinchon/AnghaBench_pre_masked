
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_vaddr_t ;
typedef int vm_paddr_t ;
typedef int uint64_t ;
struct kvm_vm {int page_size; int pgd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int* FUNC_1 (struct kvm_vm*,int) ;

vm_paddr_t FUNC_2(struct kvm_vm *VAR_3, vm_vaddr_t VAR_4)
{
 int VAR_5, VAR_6;
 uint64_t *VAR_7;

 FUNC_0(VAR_3->page_size == 4096, "Unsupported page size: 0x%x",
      VAR_3->page_size);

 VAR_7 = FUNC_1(VAR_3, VAR_3->pgd);
 for (VAR_5 = 1; VAR_5 <= 4; VAR_5++) {
  VAR_6 = (VAR_4 >> (64 - 11 * VAR_5)) & 0x7ffu;
  FUNC_0(!(VAR_7[VAR_6] & VAR_1),
       "No region mapping for vm virtual address 0x%lx",
       VAR_4);
  VAR_7 = FUNC_1(VAR_3, VAR_7[VAR_6] & VAR_2);
 }

 VAR_6 = (VAR_4 >> 12) & 0x0ffu;

 FUNC_0(!(VAR_7[VAR_6] & VAR_0),
      "No page mapping for vm virtual address 0x%lx", VAR_4);

 return (VAR_7[VAR_6] & ~0xffful) + (VAR_4 & 0xffful);
}
