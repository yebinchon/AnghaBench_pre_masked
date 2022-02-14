
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;
typedef scalar_t__ phys_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct kvm*,int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct kvm*,scalar_t__,scalar_t__) ;
 int * FUNC_5 (struct kvm*,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct kvm *VAR_0, pud_t *VAR_1,
         phys_addr_t VAR_2, phys_addr_t VAR_3)
{
 pmd_t *VAR_4;
 phys_addr_t VAR_5;

 VAR_4 = FUNC_5(VAR_0, VAR_1, VAR_2);
 do {
  VAR_5 = FUNC_4(VAR_0, VAR_2, VAR_3);
  if (!FUNC_1(*VAR_4)) {
   if (FUNC_2(*VAR_4))
    FUNC_0(*VAR_4);
   else
    FUNC_3(VAR_0, VAR_4, VAR_2, VAR_5);
  }
 } while (VAR_4++, VAR_2 = VAR_5, VAR_2 != VAR_3);
}
