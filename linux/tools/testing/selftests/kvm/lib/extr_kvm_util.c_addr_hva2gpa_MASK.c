
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
struct TYPE_2__ {int memory_size; scalar_t__ guest_phys_addr; } ;
struct userspace_mem_region {void* host_mem; TYPE_1__ region; struct userspace_mem_region* next; } ;
struct kvm_vm {struct userspace_mem_region* userspace_mem_region_head; } ;


 int FUNC_0 (int,char*,void*) ;

vm_paddr_t FUNC_1(struct kvm_vm *VAR_0, void *VAR_1)
{
 struct userspace_mem_region *VAR_2;
 for (VAR_2 = VAR_0->userspace_mem_region_head; VAR_2;
      VAR_2 = VAR_2->next) {
  if ((VAR_1 >= VAR_2->host_mem)
   && (VAR_1 <= (VAR_2->host_mem
    + VAR_2->region.memory_size - 1)))
   return (vm_paddr_t) ((uintptr_t)
    VAR_2->region.guest_phys_addr
    + (VAR_1 - (uintptr_t) VAR_2->host_mem));
 }

 FUNC_0(0, "No mapping to a guest physical address, "
  "hva: %p", VAR_1);
 return -1;
}
