
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long,int *) ;

__attribute__((used)) static void FUNC_5(pmd_t *VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 pte_t *VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 do {
  pte_t VAR_6 = FUNC_4(&VAR_1, VAR_3, VAR_5);
  FUNC_0(!FUNC_1(VAR_6) && !FUNC_3(VAR_6));
 } while (VAR_5++, VAR_3 += VAR_0, VAR_3 != VAR_4);
}
