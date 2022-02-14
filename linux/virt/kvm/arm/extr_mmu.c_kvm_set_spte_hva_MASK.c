
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pgd; } ;
struct kvm {TYPE_1__ arch; } ;
typedef int pte_t ;
typedef int kvm_pfn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (struct kvm*,unsigned long,unsigned long,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;

int FUNC_5(struct kvm *VAR_3, unsigned long VAR_4, pte_t VAR_5)
{
 unsigned long VAR_6 = VAR_4 + VAR_1;
 kvm_pfn_t VAR_7 = FUNC_3(VAR_5);
 pte_t VAR_8;

 if (!VAR_3->arch.pgd)
  return 0;

 FUNC_4(VAR_4);





 FUNC_0(VAR_7, VAR_1);
 VAR_8 = FUNC_2(VAR_7, VAR_0);
 FUNC_1(VAR_3, VAR_4, VAR_6, &VAR_2, &VAR_8);

 return 0;
}
