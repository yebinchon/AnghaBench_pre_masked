
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_vaddr_t ;
struct kvm_vm {uintptr_t page_shift; uintptr_t page_size; } ;


 scalar_t__ FUNC_0 (struct kvm_vm*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,void*,size_t) ;

int FUNC_3(void *VAR_0, struct kvm_vm *VAR_1, vm_vaddr_t VAR_2, size_t VAR_3)
{
 size_t VAR_4;





 for (uintptr_t VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += VAR_4) {
  uintptr_t VAR_6 = (uintptr_t)VAR_0 + VAR_5;





  uintptr_t VAR_7 = (uintptr_t)FUNC_0(VAR_1, VAR_2 + VAR_5);





  VAR_4 = VAR_3 - VAR_5;
  if ((VAR_6 >> VAR_1->page_shift) != ((VAR_6 + VAR_4) >> VAR_1->page_shift))
   VAR_4 = VAR_1->page_size - (VAR_6 % VAR_1->page_size);
  if ((VAR_7 >> VAR_1->page_shift) != ((VAR_7 + VAR_4) >> VAR_1->page_shift))
   VAR_4 = VAR_1->page_size - (VAR_7 % VAR_1->page_size);

  FUNC_1((VAR_6 >> VAR_1->page_shift) == ((VAR_6 + VAR_4 - 1) >> VAR_1->page_shift));
  FUNC_1((VAR_7 >> VAR_1->page_shift) == ((VAR_7 + VAR_4 - 1) >> VAR_1->page_shift));






  int VAR_8 = FUNC_2((void *)VAR_6, (void *)VAR_7, VAR_4);
  if (VAR_8 != 0)
   return VAR_8;
 }





 return 0;
}
