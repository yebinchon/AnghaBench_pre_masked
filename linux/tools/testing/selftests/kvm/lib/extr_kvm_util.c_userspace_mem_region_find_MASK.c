
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ guest_phys_addr; scalar_t__ memory_size; } ;
struct userspace_mem_region {TYPE_1__ region; struct userspace_mem_region* next; } ;
struct kvm_vm {struct userspace_mem_region* userspace_mem_region_head; } ;



__attribute__((used)) static struct userspace_mem_region *
FUNC_0(struct kvm_vm *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 struct userspace_mem_region *VAR_3;

 for (VAR_3 = VAR_0->userspace_mem_region_head; VAR_3;
  VAR_3 = VAR_3->next) {
  uint64_t VAR_4 = VAR_3->region.guest_phys_addr;
  uint64_t VAR_5 = VAR_3->region.guest_phys_addr
   + VAR_3->region.memory_size - 1;
  if (VAR_1 <= VAR_5 && VAR_2 >= VAR_4)
   return VAR_3;
 }

 return ((void*)0);
}
