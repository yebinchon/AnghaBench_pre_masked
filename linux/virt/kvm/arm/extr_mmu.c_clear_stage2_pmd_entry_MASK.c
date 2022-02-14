
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int phys_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct kvm*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct kvm *VAR_0, pmd_t *VAR_1, phys_addr_t VAR_2)
{
 pte_t *VAR_3 = FUNC_5(VAR_1, 0);
 FUNC_0(FUNC_4(*VAR_1));
 FUNC_3(VAR_1);
 FUNC_2(VAR_0, VAR_2);
 FUNC_1((unsigned long)VAR_3);
 FUNC_6(FUNC_7(VAR_1));
}
