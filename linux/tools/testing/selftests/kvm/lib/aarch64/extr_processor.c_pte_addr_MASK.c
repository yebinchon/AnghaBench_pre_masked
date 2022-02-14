
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kvm_vm {unsigned long va_bits; unsigned long page_shift; } ;



__attribute__((used)) static uint64_t FUNC_0(struct kvm_vm *VAR_0, uint64_t VAR_1)
{
 uint64_t VAR_2 = ((1UL << (VAR_0->va_bits - VAR_0->page_shift)) - 1) << VAR_0->page_shift;
 return VAR_1 & VAR_2;
}
