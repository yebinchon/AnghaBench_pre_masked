
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef int uint32_t ;
struct vmx_pages {int dummy; } ;
struct kvm_vm {size_t page_size; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vmx_pages*,struct kvm_vm*,size_t,size_t,int ) ;

void FUNC_2(struct vmx_pages *VAR_0, struct kvm_vm *VAR_1,
  uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4,
  uint32_t VAR_5)
{
 size_t VAR_6 = VAR_1->page_size;
 size_t VAR_7 = VAR_4 / VAR_6;

 FUNC_0(VAR_2 + VAR_4 > VAR_2, "Vaddr overflow");
 FUNC_0(VAR_3 + VAR_4 > VAR_3, "Paddr overflow");

 while (VAR_7--) {
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
  VAR_2 += VAR_6;
  VAR_3 += VAR_6;
 }
}
