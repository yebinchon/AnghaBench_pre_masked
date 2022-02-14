
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgd_t ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (unsigned long) ;
 int FUNC_4 (int *,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_0, unsigned long VAR_1)
{
 pgd_t *VAR_2;
 unsigned long VAR_3;

 FUNC_0(VAR_0 >= VAR_1);
 VAR_2 = FUNC_3(VAR_0);
 do {
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  if (FUNC_2(VAR_2))
   continue;
  FUNC_4(VAR_2, VAR_0, VAR_3);
 } while (VAR_2++, VAR_0 = VAR_3, VAR_0 != VAR_1);
}
