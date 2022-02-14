
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
struct TYPE_2__ {int guest_phys_addr; int memory_size; } ;
struct userspace_mem_region {TYPE_1__ region; scalar_t__ host_mem; struct userspace_mem_region* next; } ;
struct kvm_vm {struct userspace_mem_region* userspace_mem_region_head; } ;


 int FUNC_0 (int,char*,int) ;

void *FUNC_1(struct kvm_vm *VAR_0, vm_paddr_t VAR_1)
{
 struct userspace_mem_region *VAR_2;
 for (VAR_2 = VAR_0->userspace_mem_region_head; VAR_2;
      VAR_2 = VAR_2->next) {
  if ((VAR_1 >= VAR_2->region.guest_phys_addr)
   && (VAR_1 <= (VAR_2->region.guest_phys_addr
    + VAR_2->region.memory_size - 1)))
   return (void *) ((uintptr_t) VAR_2->host_mem
    + (VAR_1 - VAR_2->region.guest_phys_addr));
 }

 FUNC_0(0, "No vm physical memory at 0x%lx", VAR_1);
 return ((void*)0);
}
