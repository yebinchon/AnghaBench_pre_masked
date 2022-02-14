
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_paddr_t ;
typedef int uint32_t ;
struct userspace_mem_region {int unused_phy_pages; } ;
struct kvm_vm {size_t page_size; size_t page_shift; } ;
typedef size_t sparsebit_idx_t ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,size_t,size_t,int ) ;
 int FUNC_3 (char*,int ) ;
 struct userspace_mem_region* FUNC_4 (struct kvm_vm*,int ) ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 (int ,size_t) ;
 size_t FUNC_7 (int ,size_t) ;
 int VAR_0 ;
 int FUNC_8 (int ,struct kvm_vm*,int) ;

vm_paddr_t FUNC_9(struct kvm_vm *VAR_1, size_t VAR_2,
         vm_paddr_t VAR_3, uint32_t VAR_4)
{
 struct userspace_mem_region *VAR_5;
 sparsebit_idx_t VAR_6, VAR_7;

 FUNC_0(VAR_2 > 0, "Must allocate at least one page");

 FUNC_0((VAR_3 % VAR_1->page_size) == 0, "Min physical address "
  "not divisible by page size.\n"
  "  paddr_min: 0x%lx page_size: 0x%x",
  VAR_3, VAR_1->page_size);

 VAR_5 = FUNC_4(VAR_1, VAR_4);
 VAR_7 = VAR_6 = VAR_3 >> VAR_1->page_shift;

 do {
  for (; VAR_6 < VAR_7 + VAR_2; ++VAR_6) {
   if (!FUNC_6(VAR_5->unused_phy_pages, VAR_6)) {
    VAR_7 = VAR_6 = FUNC_7(VAR_5->unused_phy_pages, VAR_6);
    break;
   }
  }
 } while (VAR_6 && VAR_6 != VAR_7 + VAR_2);

 if (VAR_6 == 0) {
  FUNC_2(VAR_0, "No guest physical page available, "
   "paddr_min: 0x%lx page_size: 0x%zx memslot: %u\n",
   VAR_3, VAR_1->page_size, VAR_4);
  FUNC_3("---- vm dump ----\n", VAR_0);
  FUNC_8(VAR_0, VAR_1, 2);
  FUNC_1();
 }

 for (VAR_6 = VAR_7; VAR_6 < VAR_7 + VAR_2; ++VAR_6)
  FUNC_5(VAR_5->unused_phy_pages, VAR_6);

 return VAR_7 * VAR_1->page_size;
}
