
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int memory_size; int guest_phys_addr; int flags; int slot; } ;
struct userspace_mem_region {TYPE_1__ region; struct userspace_mem_region* next; } ;
struct kvm_vm {int fd; struct userspace_mem_region* userspace_mem_region_head; scalar_t__ has_irqchip; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (struct kvm_vm*) ;
 int FUNC_3 (struct kvm_vm*,int) ;

void FUNC_4(struct kvm_vm *VAR_2, int VAR_3)
{
 struct userspace_mem_region *VAR_4;

 FUNC_3(VAR_2, VAR_3);
 if (VAR_2->has_irqchip)
  FUNC_2(VAR_2);

 for (VAR_4 = VAR_2->userspace_mem_region_head; VAR_4;
  VAR_4 = VAR_4->next) {
  int VAR_5 = FUNC_1(VAR_2->fd, VAR_0, &VAR_4->region);
  FUNC_0(VAR_5 == 0, "KVM_SET_USER_MEMORY_REGION IOCTL failed,\n"
       "  rc: %i errno: %i\n"
       "  slot: %u flags: 0x%x\n"
       "  guest_phys_addr: 0x%lx size: 0x%lx",
       VAR_5, VAR_1, VAR_4->region.slot,
       VAR_4->region.flags,
       VAR_4->region.guest_phys_addr,
       VAR_4->region.memory_size);
 }
}
