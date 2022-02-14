
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
struct kvm_vm {int va_bits; unsigned int pa_bits; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct kvm_vm*,int) ;

void FUNC_2(struct kvm_vm *VAR_0, void *VAR_1)
{
 vm_paddr_t VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 unsigned int VAR_7;
 bool VAR_8;

 if (VAR_1) {
  VAR_2 = (vm_paddr_t)VAR_1;
  VAR_8 = FUNC_1(VAR_0, VAR_2);
  FUNC_0(VAR_8, "Can't set ucall mmio address to %lx", VAR_2);
  return;
 }
 VAR_7 = VAR_0->va_bits - 1;
 VAR_7 = VAR_0->pa_bits < VAR_7 ? VAR_0->pa_bits : VAR_7;
 VAR_4 = 1ul << VAR_7;
 VAR_3 = VAR_4 * 5 / 8;
 VAR_5 = VAR_4 / 16;
 for (VAR_6 = 0; VAR_6 < VAR_4 - VAR_3; VAR_6 += VAR_5) {
  if (FUNC_1(VAR_0, VAR_3 - VAR_6))
   return;
  if (FUNC_1(VAR_0, VAR_3 + VAR_6))
   return;
 }
 FUNC_0(0, "Can't find a ucall mmio address");
}
