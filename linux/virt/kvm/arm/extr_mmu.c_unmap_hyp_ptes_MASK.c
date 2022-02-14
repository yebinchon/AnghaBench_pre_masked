
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;
typedef scalar_t__ phys_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(pmd_t *VAR_1, phys_addr_t VAR_2, phys_addr_t VAR_3)
{
 pte_t *VAR_4, *VAR_5;

 VAR_5 = VAR_4 = FUNC_5(VAR_1, VAR_2);
 do {
  if (!FUNC_4(*VAR_4)) {
   FUNC_3(VAR_4, FUNC_0(0));
   FUNC_6(FUNC_7(VAR_4));
  }
 } while (VAR_4++, VAR_2 += VAR_0, VAR_2 != VAR_3);

 if (FUNC_2(VAR_5))
  FUNC_1(VAR_1);
}
