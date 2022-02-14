
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_vaddr_t ;
typedef int vm_paddr_t ;
typedef size_t uint16_t ;
struct pageTableEntry {int address; int present; } ;
struct pageMapL4Entry {int address; int present; } ;
struct pageDirectoryPointerEntry {int address; int present; } ;
struct pageDirectoryEntry {int address; int present; } ;
struct kvm_vm {scalar_t__ mode; int pgd; int page_size; int pgd_created; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (struct kvm_vm*,int) ;
 int FUNC_2 (int ) ;

vm_paddr_t FUNC_3(struct kvm_vm *VAR_2, vm_vaddr_t VAR_3)
{
 uint16_t VAR_4[4];
 struct pageMapL4Entry *VAR_5;
 struct pageDirectoryPointerEntry *VAR_6;
 struct pageDirectoryEntry *VAR_7;
 struct pageTableEntry *VAR_8;

 FUNC_0(VAR_2->mode == VAR_1, "Attempt to use "
  "unknown or unsupported guest mode, mode: 0x%x", VAR_2->mode);

 VAR_4[0] = (VAR_3 >> 12) & 0x1ffu;
 VAR_4[1] = (VAR_3 >> 21) & 0x1ffu;
 VAR_4[2] = (VAR_3 >> 30) & 0x1ffu;
 VAR_4[3] = (VAR_3 >> 39) & 0x1ffu;

 if (!VAR_2->pgd_created)
  goto unmapped_gva;
 VAR_5 = FUNC_1(VAR_2, VAR_2->pgd);
 if (!VAR_5[VAR_4[3]].present)
  goto unmapped_gva;

 VAR_6 = FUNC_1(VAR_2, VAR_5[VAR_4[3]].address * VAR_2->page_size);
 if (!VAR_6[VAR_4[2]].present)
  goto unmapped_gva;

 VAR_7 = FUNC_1(VAR_2, VAR_6[VAR_4[2]].address * VAR_2->page_size);
 if (!VAR_7[VAR_4[1]].present)
  goto unmapped_gva;

 VAR_8 = FUNC_1(VAR_2, VAR_7[VAR_4[1]].address * VAR_2->page_size);
 if (!VAR_8[VAR_4[0]].present)
  goto unmapped_gva;

 return (VAR_8[VAR_4[0]].address * VAR_2->page_size) + (VAR_3 & 0xfffu);

unmapped_gva:
 FUNC_0(0, "No mapping for vm virtual address, "
      "gva: 0x%lx", VAR_3);
 FUNC_2(VAR_0);
}
