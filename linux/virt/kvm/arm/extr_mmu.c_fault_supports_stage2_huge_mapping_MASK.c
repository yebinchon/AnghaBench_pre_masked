
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {size_t npages; unsigned long base_gfn; size_t userspace_addr; } ;
typedef size_t hva_t ;
typedef unsigned long gpa_t ;


 unsigned long VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct kvm_memory_slot *VAR_2,
            unsigned long VAR_3,
            unsigned long VAR_4)
{
 gpa_t VAR_5;
 hva_t VAR_6, VAR_7;
 size_t VAR_8;

 VAR_8 = VAR_2->npages * VAR_1;

 VAR_5 = VAR_2->base_gfn << VAR_0;

 VAR_6 = VAR_2->userspace_addr;
 VAR_7 = VAR_6 + VAR_8;
 if ((VAR_5 & (VAR_4 - 1)) != (VAR_6 & (VAR_4 - 1)))
  return 0;
 return (VAR_3 & ~(VAR_4 - 1)) >= VAR_6 &&
        (VAR_3 & ~(VAR_4 - 1)) + VAR_4 <= VAR_7;
}
