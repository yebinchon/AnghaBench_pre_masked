
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int pud_t ;
typedef scalar_t__ phys_addr_t ;
typedef int pgd_t ;


 int FUNC_0 (struct kvm*,int *,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm*,scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct kvm*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct kvm*,int *) ;
 scalar_t__ FUNC_6 (struct kvm*,int ) ;
 int FUNC_7 (struct kvm*,int ) ;
 int * FUNC_8 (struct kvm*,int *,scalar_t__) ;
 scalar_t__ FUNC_9 (struct kvm*,int *) ;
 int FUNC_10 (struct kvm*,int *,scalar_t__,scalar_t__) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct kvm *VAR_0, pgd_t *VAR_1,
         phys_addr_t VAR_2, phys_addr_t VAR_3)
{
 phys_addr_t VAR_4, VAR_5 = VAR_2;
 pud_t *VAR_6, *VAR_7;

 VAR_7 = VAR_6 = FUNC_8(VAR_0, VAR_1, VAR_2);
 do {
  VAR_4 = FUNC_4(VAR_0, VAR_2, VAR_3);
  if (!FUNC_7(VAR_0, *VAR_6)) {
   if (FUNC_6(VAR_0, *VAR_6)) {
    pud_t VAR_8 = *VAR_6;

    FUNC_5(VAR_0, VAR_6);
    FUNC_2(VAR_0, VAR_2);
    FUNC_1(VAR_8);
    FUNC_3(FUNC_11(VAR_6));
   } else {
    FUNC_10(VAR_0, VAR_6, VAR_2, VAR_4);
   }
  }
 } while (VAR_6++, VAR_2 = VAR_4, VAR_2 != VAR_3);

 if (FUNC_9(VAR_0, VAR_7))
  FUNC_0(VAR_0, VAR_1, VAR_5);
}
