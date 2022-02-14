
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef scalar_t__ phys_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm*,int *,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct kvm*,scalar_t__) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct kvm*,int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct kvm *VAR_1, pmd_t *VAR_2,
         phys_addr_t VAR_3, phys_addr_t VAR_4)
{
 phys_addr_t VAR_5 = VAR_3;
 pte_t *VAR_6, *VAR_7;

 VAR_7 = VAR_6 = FUNC_7(VAR_2, VAR_3);
 do {
  if (!FUNC_6(*VAR_6)) {
   pte_t VAR_8 = *VAR_6;

   FUNC_4(VAR_6, FUNC_0(0));
   FUNC_5(VAR_1, VAR_3);


   if (!FUNC_3(FUNC_8(VAR_8)))
    FUNC_2(VAR_8);

   FUNC_9(FUNC_11(VAR_6));
  }
 } while (VAR_6++, VAR_3 += VAR_0, VAR_3 != VAR_4);

 if (FUNC_10(VAR_1, VAR_7))
  FUNC_1(VAR_1, VAR_2, VAR_5);
}
