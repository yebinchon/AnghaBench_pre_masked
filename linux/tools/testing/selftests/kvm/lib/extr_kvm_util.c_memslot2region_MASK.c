
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ slot; } ;
struct userspace_mem_region {TYPE_1__ region; struct userspace_mem_region* next; } ;
struct kvm_vm {struct userspace_mem_region* userspace_mem_region_head; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct kvm_vm*,int) ;

struct userspace_mem_region *
FUNC_4(struct kvm_vm *VAR_1, uint32_t VAR_2)
{
 struct userspace_mem_region *VAR_3;

 for (VAR_3 = VAR_1->userspace_mem_region_head; VAR_3;
  VAR_3 = VAR_3->next) {
  if (VAR_3->region.slot == VAR_2)
   break;
 }
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_0, "No mem region with the requested slot found,\n"
   "  requested slot: %ld\n", VAR_2);
  FUNC_2("---- vm dump ----\n", VAR_0);
  FUNC_3(VAR_0, VAR_1, 2);
  FUNC_0(0, "Mem region not found");
 }

 return VAR_3;
}
