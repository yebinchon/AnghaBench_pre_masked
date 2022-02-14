
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct kvm_vm {size_t page_size; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct kvm_vm*,scalar_t__,scalar_t__,int ) ;

void FUNC_2(struct kvm_vm *VAR_0, uint64_t VAR_1, uint64_t VAR_2,
       size_t VAR_3, uint32_t VAR_4)
{
 size_t VAR_5 = VAR_0->page_size;
 size_t VAR_6 = VAR_3 / VAR_5;

 FUNC_0(VAR_1 + VAR_3 > VAR_1, "Vaddr overflow");
 FUNC_0(VAR_2 + VAR_3 > VAR_2, "Paddr overflow");

 while (VAR_6--) {
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
  VAR_1 += VAR_5;
  VAR_2 += VAR_5;
 }
}
