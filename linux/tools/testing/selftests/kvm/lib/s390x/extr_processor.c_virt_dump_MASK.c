
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct kvm_vm {int pgd; int pgd_created; } ;
typedef int FILE ;


 int FUNC_0 (int *,struct kvm_vm*,int ,int ) ;

void FUNC_1(FILE *VAR_0, struct kvm_vm *VAR_1, uint8_t VAR_2)
{
 if (!VAR_1->pgd_created)
  return;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_1->pgd);
}
