
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memslots {int dummy; } ;
struct kvm_memory_slot {int base_gfn; int npages; } ;
struct kvm {int mmu_lock; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 struct kvm_memory_slot* FUNC_0 (struct kvm_memslots*,int) ;
 int FUNC_1 (struct kvm*) ;
 struct kvm_memslots* FUNC_2 (struct kvm*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct kvm*,int,int) ;

void FUNC_6(struct kvm *VAR_1, int VAR_2)
{
 struct kvm_memslots *VAR_3 = FUNC_2(VAR_1);
 struct kvm_memory_slot *VAR_4 = FUNC_0(VAR_3, VAR_2);
 phys_addr_t VAR_5 = VAR_4->base_gfn << VAR_0;
 phys_addr_t VAR_6 = (VAR_4->base_gfn + VAR_4->npages) << VAR_0;

 FUNC_3(&VAR_1->mmu_lock);
 FUNC_5(VAR_1, VAR_5, VAR_6);
 FUNC_4(&VAR_1->mmu_lock);
 FUNC_1(VAR_1);
}
