
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(pmd_t *VAR_1, unsigned long VAR_2,
        unsigned long VAR_3, unsigned long VAR_4,
        pgprot_t VAR_5)
{
 pte_t *VAR_6;
 unsigned long VAR_7;

 VAR_7 = VAR_2;
 do {
  VAR_6 = FUNC_3(VAR_1, VAR_7);
  FUNC_2(VAR_6, FUNC_1(VAR_4, VAR_5));
  FUNC_0(FUNC_4(VAR_6));
  VAR_4++;
 } while (VAR_7 += VAR_0, VAR_7 != VAR_3);
}
