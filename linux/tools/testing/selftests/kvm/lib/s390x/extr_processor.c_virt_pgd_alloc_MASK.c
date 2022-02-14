
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int uint32_t ;
struct kvm_vm {int page_size; int pgd_created; int pgd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct kvm_vm*,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct kvm_vm*,int,int ,int ) ;

void FUNC_4(struct kvm_vm *VAR_2, uint32_t VAR_3)
{
 vm_paddr_t VAR_4;

 FUNC_0(VAR_2->page_size == 4096, "Unsupported page size: 0x%x",
      VAR_2->page_size);

 if (VAR_2->pgd_created)
  return;

 VAR_4 = FUNC_3(VAR_2, VAR_1,
       VAR_0, VAR_3);
 FUNC_2(FUNC_1(VAR_2, VAR_4), 0xff, VAR_1 * VAR_2->page_size);

 VAR_2->pgd = VAR_4;
 VAR_2->pgd_created = 1;
}
