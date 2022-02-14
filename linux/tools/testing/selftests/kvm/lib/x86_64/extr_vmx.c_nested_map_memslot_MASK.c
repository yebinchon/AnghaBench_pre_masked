
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct vmx_pages {int dummy; } ;
struct TYPE_2__ {int guest_phys_addr; int memory_size; } ;
struct userspace_mem_region {int unused_phy_pages; TYPE_1__ region; } ;
struct kvm_vm {int page_shift; } ;
typedef int sparsebit_idx_t ;


 struct userspace_mem_region* FUNC_0 (struct kvm_vm*,int ) ;
 int FUNC_1 (struct vmx_pages*,struct kvm_vm*,int,int,int,int ) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct vmx_pages *VAR_0, struct kvm_vm *VAR_1,
   uint32_t VAR_2, uint32_t VAR_3)
{
 sparsebit_idx_t VAR_4, VAR_5;
 struct userspace_mem_region *VAR_6 =
  FUNC_0(VAR_1, VAR_2);

 VAR_4 = (VAR_6->region.guest_phys_addr >> VAR_1->page_shift) - 1;
 VAR_5 = VAR_4 + (VAR_6->region.memory_size >> VAR_1->page_shift);
 for (;;) {
  VAR_4 = FUNC_2(VAR_6->unused_phy_pages, VAR_4);
  if (VAR_4 > VAR_5)
   break;

  FUNC_1(VAR_0, VAR_1,
      (uint64_t)VAR_4 << VAR_1->page_shift,
      (uint64_t)VAR_4 << VAR_1->page_shift,
      1 << VAR_1->page_shift,
      VAR_3);
 }
}
