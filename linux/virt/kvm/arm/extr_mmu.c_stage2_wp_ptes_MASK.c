
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;
typedef scalar_t__ phys_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_4(pmd_t *VAR_1, phys_addr_t VAR_2, phys_addr_t VAR_3)
{
 pte_t *VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 do {
  if (!FUNC_2(*VAR_4)) {
   if (!FUNC_0(VAR_4))
    FUNC_1(VAR_4);
  }
 } while (VAR_4++, VAR_2 += VAR_0, VAR_2 != VAR_3);
}
