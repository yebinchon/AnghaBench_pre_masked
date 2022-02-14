
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef scalar_t__ phys_addr_t ;
typedef int pgd_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_6(pgd_t *VAR_0, phys_addr_t VAR_1, phys_addr_t VAR_2)
{
 phys_addr_t VAR_3;
 pud_t *VAR_4, *VAR_5;

 VAR_5 = VAR_4 = FUNC_4(VAR_0, VAR_1);
 do {
  VAR_3 = FUNC_2(VAR_1, VAR_2);

  if (!FUNC_3(*VAR_4))
   FUNC_5(VAR_4, VAR_1, VAR_3);
 } while (VAR_4++, VAR_1 = VAR_3, VAR_1 != VAR_2);

 if (FUNC_1(VAR_5))
  FUNC_0(VAR_0);
}
