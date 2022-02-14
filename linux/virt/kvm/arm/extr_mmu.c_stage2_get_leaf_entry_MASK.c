
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int phys_addr_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (struct kvm*,int *,int ) ;
 int * FUNC_7 (struct kvm*,int *,int ) ;
 scalar_t__ FUNC_8 (struct kvm*,int ) ;
 scalar_t__ FUNC_9 (struct kvm*,int ) ;
 int FUNC_10 (struct kvm*,int ) ;

__attribute__((used)) static bool FUNC_11(struct kvm *VAR_0, phys_addr_t VAR_1,
      pud_t **VAR_2, pmd_t **VAR_3, pte_t **VAR_4)
{
 pud_t *VAR_5;
 pmd_t *VAR_6;
 pte_t *VAR_7;

 *VAR_2 = ((void*)0);
 *VAR_3 = ((void*)0);
 *VAR_4 = ((void*)0);

 VAR_5 = FUNC_6(VAR_0, ((void*)0), VAR_1);
 if (!VAR_5 || FUNC_9(VAR_0, *VAR_5) || !FUNC_10(VAR_0, *VAR_5))
  return 0;

 if (FUNC_8(VAR_0, *VAR_5)) {
  *VAR_2 = VAR_5;
  return 1;
 }

 VAR_6 = FUNC_7(VAR_0, VAR_5, VAR_1);
 if (!VAR_6 || FUNC_0(*VAR_6) || !FUNC_1(*VAR_6))
  return 0;

 if (FUNC_2(*VAR_6)) {
  *VAR_3 = VAR_6;
  return 1;
 }

 VAR_7 = FUNC_4(VAR_6, VAR_1);
 if (!VAR_7 || FUNC_3(*VAR_7) || !FUNC_5(*VAR_7))
  return 0;

 *VAR_4 = VAR_7;
 return 1;
}
