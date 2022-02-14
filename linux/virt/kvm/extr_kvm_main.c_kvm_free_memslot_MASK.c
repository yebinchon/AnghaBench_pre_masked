
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {scalar_t__ dirty_bitmap; scalar_t__ npages; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (struct kvm*,struct kvm_memory_slot*,struct kvm_memory_slot*) ;
 int FUNC_1 (struct kvm_memory_slot*) ;

__attribute__((used)) static void FUNC_2(struct kvm *VAR_0, struct kvm_memory_slot *VAR_1,
         struct kvm_memory_slot *VAR_2)
{
 if (!VAR_2 || VAR_1->dirty_bitmap != VAR_2->dirty_bitmap)
  FUNC_1(VAR_1);

 FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_1->npages = 0;
}
