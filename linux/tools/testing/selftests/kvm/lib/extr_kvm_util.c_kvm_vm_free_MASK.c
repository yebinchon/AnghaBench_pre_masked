
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ memory_size; } ;
struct userspace_mem_region {int vpages_mapped; int vpages_valid; int mmap_size; int mmap_start; int unused_phy_pages; struct userspace_mem_region* next; struct userspace_mem_region* userspace_mem_region_head; TYPE_1__ region; int fd; } ;
struct kvm_vm {int vpages_mapped; int vpages_valid; int mmap_size; int mmap_start; int unused_phy_pages; struct kvm_vm* next; struct kvm_vm* userspace_mem_region_head; TYPE_1__ region; int fd; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct userspace_mem_region*) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (struct userspace_mem_region*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct kvm_vm *VAR_2)
{
 int VAR_3;

 if (VAR_2 == ((void*)0))
  return;


 while (VAR_2->userspace_mem_region_head) {
  struct userspace_mem_region *VAR_4
   = VAR_2->userspace_mem_region_head;

  VAR_4->region.memory_size = 0;
  VAR_3 = FUNC_2(VAR_2->fd, VAR_0,
   &VAR_4->region);
  FUNC_0(VAR_3 == 0, "KVM_SET_USER_MEMORY_REGION IOCTL failed, "
   "rc: %i errno: %i", VAR_3, VAR_1);

  VAR_2->userspace_mem_region_head = VAR_4->next;
  FUNC_5(&VAR_4->unused_phy_pages);
  VAR_3 = FUNC_4(VAR_4->mmap_start, VAR_4->mmap_size);
  FUNC_0(VAR_3 == 0, "munmap failed, rc: %i errno: %i",
       VAR_3, VAR_1);

  FUNC_1(VAR_4);
 }


 FUNC_5(&VAR_2->vpages_valid);
 FUNC_5(&VAR_2->vpages_mapped);

 FUNC_3(VAR_2);


 FUNC_1(VAR_2);
}
