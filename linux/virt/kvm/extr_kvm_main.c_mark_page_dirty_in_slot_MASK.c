
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {unsigned long base_gfn; scalar_t__ dirty_bitmap; } ;
typedef unsigned long gfn_t ;


 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct kvm_memory_slot *VAR_0,
        gfn_t VAR_1)
{
 if (VAR_0 && VAR_0->dirty_bitmap) {
  unsigned long VAR_2 = VAR_1 - VAR_0->base_gfn;

  FUNC_0(VAR_2, VAR_0->dirty_bitmap);
 }
}
