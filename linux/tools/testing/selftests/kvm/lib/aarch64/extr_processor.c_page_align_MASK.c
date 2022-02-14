
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kvm_vm {int page_size; } ;



__attribute__((used)) static uint64_t FUNC_0(struct kvm_vm *VAR_0, uint64_t VAR_1)
{
 return (VAR_1 + VAR_0->page_size) & ~(VAR_0->page_size - 1);
}
