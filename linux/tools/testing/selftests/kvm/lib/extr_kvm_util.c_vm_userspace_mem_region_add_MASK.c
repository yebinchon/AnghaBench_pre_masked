
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int guest_phys_addr; int memory_size; int slot; int flags; uintptr_t userspace_addr; } ;
struct userspace_mem_region {int mmap_size; struct userspace_mem_region* next; struct userspace_mem_region* prev; TYPE_1__ region; scalar_t__ host_mem; int unused_phy_pages; int mmap_start; } ;
struct kvm_vm {size_t page_size; int page_shift; int max_gfn; struct userspace_mem_region* userspace_mem_region_head; int fd; } ;
typedef enum vm_mem_backing_src_type { ____Placeholder_vm_mem_backing_src_type } vm_mem_backing_src_type ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int ,size_t) ;
 struct userspace_mem_region* FUNC_2 (int,int) ;
 int VAR_13 ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int,int ) ;
 size_t FUNC_5 (size_t,size_t) ;
 int FUNC_6 (int *,size_t,int,int,int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int,int) ;
 scalar_t__ FUNC_9 (struct kvm_vm*,int,int) ;

void FUNC_10(struct kvm_vm *VAR_14,
 enum vm_mem_backing_src_type VAR_15,
 uint64_t VAR_16, uint32_t VAR_17, uint64_t VAR_18,
 uint32_t VAR_19)
{
 int VAR_20;
 struct userspace_mem_region *VAR_21;
 size_t VAR_22 = VAR_1 * VAR_14->page_size;
 size_t VAR_23;

 FUNC_0((VAR_16 % VAR_14->page_size) == 0, "Guest physical "
  "address not on a page boundary.\n"
  "  guest_paddr: 0x%lx vm->page_size: 0x%x",
  VAR_16, VAR_14->page_size);
 FUNC_0((((VAR_16 >> VAR_14->page_shift) + VAR_18) - 1)
  <= VAR_14->max_gfn, "Physical range beyond maximum "
  "supported physical address,\n"
  "  guest_paddr: 0x%lx npages: 0x%lx\n"
  "  vm->max_gfn: 0x%lx vm->page_size: 0x%x",
  VAR_16, VAR_18, VAR_14->max_gfn, VAR_14->page_size);





 VAR_21 = (struct userspace_mem_region *) FUNC_9(
  VAR_14, VAR_16, (VAR_16 + VAR_18 * VAR_14->page_size) - 1);
 if (VAR_21 != ((void*)0))
  FUNC_0(0, "overlapping userspace_mem_region already "
   "exists\n"
   "  requested guest_paddr: 0x%lx npages: 0x%lx "
   "page_size: 0x%x\n"
   "  existing guest_paddr: 0x%lx size: 0x%lx",
   VAR_16, VAR_18, VAR_14->page_size,
   (uint64_t) VAR_21->region.guest_phys_addr,
   (uint64_t) VAR_21->region.memory_size);


 for (VAR_21 = VAR_14->userspace_mem_region_head; VAR_21;
  VAR_21 = VAR_21->next) {
  if (VAR_21->region.slot == VAR_17)
   break;
 }
 if (VAR_21 != ((void*)0))
  FUNC_0(0, "A mem region with the requested slot "
   "already exists.\n"
   "  requested slot: %u paddr: 0x%lx npages: 0x%lx\n"
   "  existing slot: %u paddr: 0x%lx size: 0x%lx",
   VAR_17, VAR_16, VAR_18,
   VAR_21->region.slot,
   (uint64_t) VAR_21->region.guest_phys_addr,
   (uint64_t) VAR_21->region.memory_size);


 VAR_21 = FUNC_2(1, sizeof(*VAR_21));
 FUNC_0(VAR_21 != ((void*)0), "Insufficient Memory");
 VAR_21->mmap_size = VAR_18 * VAR_14->page_size;





 VAR_23 = 1;


 if (VAR_15 == VAR_12)
  VAR_23 = FUNC_5(VAR_22, VAR_23);


 if (VAR_23 > 1)
  VAR_21->mmap_size += VAR_23;

 VAR_21->mmap_start = FUNC_6(((void*)0), VAR_21->mmap_size,
      VAR_8 | VAR_9,
      VAR_7 | VAR_4
      | (VAR_15 == VAR_11 ? VAR_6 : 0),
      -1, 0);
 FUNC_0(VAR_21->mmap_start != VAR_5,
      "test_malloc failed, mmap_start: %p errno: %i",
      VAR_21->mmap_start, VAR_13);


 VAR_21->host_mem = FUNC_1(VAR_21->mmap_start, VAR_23);


 if (VAR_15 == VAR_10 || VAR_15 == VAR_12) {
  VAR_20 = FUNC_4(VAR_21->host_mem, VAR_18 * VAR_14->page_size,
        VAR_15 == VAR_10 ? VAR_3 : VAR_2);
  FUNC_0(VAR_20 == 0, "madvise failed,\n"
       "  addr: %p\n"
       "  length: 0x%lx\n"
       "  src_type: %x",
       VAR_21->host_mem, VAR_18 * VAR_14->page_size, VAR_15);
 }

 VAR_21->unused_phy_pages = FUNC_7();
 FUNC_8(VAR_21->unused_phy_pages,
  VAR_16 >> VAR_14->page_shift, VAR_18);
 VAR_21->region.slot = VAR_17;
 VAR_21->region.flags = VAR_19;
 VAR_21->region.guest_phys_addr = VAR_16;
 VAR_21->region.memory_size = VAR_18 * VAR_14->page_size;
 VAR_21->region.userspace_addr = (uintptr_t) VAR_21->host_mem;
 VAR_20 = FUNC_3(VAR_14->fd, VAR_0, &VAR_21->region);
 FUNC_0(VAR_20 == 0, "KVM_SET_USER_MEMORY_REGION IOCTL failed,\n"
  "  rc: %i errno: %i\n"
  "  slot: %u flags: 0x%x\n"
  "  guest_phys_addr: 0x%lx size: 0x%lx",
  VAR_20, VAR_13, VAR_17, VAR_19,
  VAR_16, (uint64_t) VAR_21->region.memory_size);


 if (VAR_14->userspace_mem_region_head)
  VAR_14->userspace_mem_region_head->prev = VAR_21;
 VAR_21->next = VAR_14->userspace_mem_region_head;
 VAR_14->userspace_mem_region_head = VAR_21;
}
