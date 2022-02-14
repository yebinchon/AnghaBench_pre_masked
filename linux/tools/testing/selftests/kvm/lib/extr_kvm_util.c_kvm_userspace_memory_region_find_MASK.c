
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kvm_userspace_memory_region {int dummy; } ;
struct userspace_mem_region {struct kvm_userspace_memory_region region; } ;
struct kvm_vm {int dummy; } ;


 struct userspace_mem_region* FUNC_0 (struct kvm_vm*,int ,int ) ;

struct kvm_userspace_memory_region *
FUNC_1(struct kvm_vm *VAR_0, uint64_t VAR_1,
     uint64_t VAR_2)
{
 struct userspace_mem_region *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 return &VAR_3->region;
}
