
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_vaddr_t ;
typedef int vm_paddr_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct kvm_vm {size_t page_shift; size_t page_size; int vpages_mapped; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct kvm_vm*,int,int ,int ) ;
 int FUNC_2 (struct kvm_vm*,int ) ;
 int FUNC_3 (struct kvm_vm*,int,int ) ;
 int FUNC_4 (struct kvm_vm*,size_t,int) ;

vm_vaddr_t FUNC_5(struct kvm_vm *VAR_1, size_t VAR_2, vm_vaddr_t VAR_3,
     uint32_t VAR_4, uint32_t VAR_5)
{
 uint64_t VAR_6 = (VAR_2 >> VAR_1->page_shift) + ((VAR_2 % VAR_1->page_size) != 0);

 FUNC_2(VAR_1, VAR_5);





 vm_vaddr_t VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_3);


 for (vm_vaddr_t VAR_8 = VAR_7; VAR_6 > 0;
  VAR_6--, VAR_8 += VAR_1->page_size) {
  vm_paddr_t VAR_9;

  VAR_9 = FUNC_3(VAR_1,
    VAR_0 * VAR_1->page_size, VAR_4);

  FUNC_1(VAR_1, VAR_8, VAR_9, VAR_5);

  FUNC_0(VAR_1->vpages_mapped,
   VAR_8 >> VAR_1->page_shift);
 }

 return VAR_7;
}
