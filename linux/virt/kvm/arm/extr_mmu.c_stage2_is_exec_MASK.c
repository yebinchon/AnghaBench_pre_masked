
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int phys_addr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kvm*,int ,int **,int **,int **) ;

__attribute__((used)) static bool FUNC_4(struct kvm *VAR_0, phys_addr_t VAR_1)
{
 pud_t *VAR_2;
 pmd_t *VAR_3;
 pte_t *VAR_4;
 bool VAR_5;

 VAR_5 = FUNC_3(VAR_0, VAR_1, &VAR_2, &VAR_3, &VAR_4);
 if (!VAR_5)
  return 0;

 if (VAR_2)
  return FUNC_2(VAR_2);
 else if (VAR_3)
  return FUNC_0(VAR_3);
 else
  return FUNC_1(VAR_4);
}
