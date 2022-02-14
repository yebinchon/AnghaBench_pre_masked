
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pmd_t ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_5(pud_t *VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 pmd_t *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 do {
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  if (FUNC_1(VAR_3))
   continue;
  if (FUNC_2(VAR_3))
   continue;
  FUNC_4(VAR_3, VAR_1, VAR_4);
 } while (VAR_3++, VAR_1 = VAR_4, VAR_1 != VAR_2);
}
