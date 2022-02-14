
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu_memory_cache {int nobjs; void** objects; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_mmu_memory_cache *VAR_3,
      int VAR_4, int VAR_5)
{
 void *VAR_6;

 FUNC_0(VAR_5 > VAR_2);
 if (VAR_3->nobjs >= VAR_4)
  return 0;
 while (VAR_3->nobjs < VAR_5) {
  VAR_6 = (void *)FUNC_1(VAR_1);
  if (!VAR_6)
   return -VAR_0;
  VAR_3->objects[VAR_3->nobjs++] = VAR_6;
 }
 return 0;
}
