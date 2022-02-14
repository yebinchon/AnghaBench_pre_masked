
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pgd_phys; int * pgd; } ;
struct kvm {int mmu_lock; TYPE_1__ arch; } ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct kvm*) ;
 int FUNC_6 (struct kvm*,int ,int ) ;

void FUNC_7(struct kvm *VAR_0)
{
 void *VAR_1 = ((void*)0);

 FUNC_3(&VAR_0->mmu_lock);
 if (VAR_0->arch.pgd) {
  FUNC_6(VAR_0, 0, FUNC_2(VAR_0));
  VAR_1 = FUNC_0(VAR_0->arch.pgd);
  VAR_0->arch.pgd = ((void*)0);
  VAR_0->arch.pgd_phys = 0;
 }
 FUNC_4(&VAR_0->mmu_lock);


 if (VAR_1)
  FUNC_1(VAR_1, FUNC_5(VAR_0));
}
