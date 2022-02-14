
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int * dirty_bitmap; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct kvm_memory_slot *VAR_0)
{
 if (!VAR_0->dirty_bitmap)
  return;

 FUNC_0(VAR_0->dirty_bitmap);
 VAR_0->dirty_bitmap = ((void*)0);
}
