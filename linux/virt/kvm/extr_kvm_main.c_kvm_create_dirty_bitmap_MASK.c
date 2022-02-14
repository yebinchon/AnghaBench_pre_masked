
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dirty_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_memory_slot*) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_memory_slot *VAR_2)
{
 unsigned long VAR_3 = 2 * FUNC_0(VAR_2);

 VAR_2->dirty_bitmap = FUNC_1(VAR_3, VAR_1);
 if (!VAR_2->dirty_bitmap)
  return -VAR_0;

 return 0;
}
