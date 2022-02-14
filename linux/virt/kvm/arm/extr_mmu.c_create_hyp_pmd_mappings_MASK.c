
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprot_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (int *,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(pud_t *VAR_2, unsigned long VAR_3,
       unsigned long VAR_4, unsigned long VAR_5,
       pgprot_t VAR_6)
{
 pmd_t *VAR_7;
 pte_t *VAR_8;
 unsigned long VAR_9, VAR_10;

 VAR_9 = VAR_3;
 do {
  VAR_7 = FUNC_7(VAR_2, VAR_9);

  FUNC_0(FUNC_8(*VAR_7));

  if (FUNC_6(*VAR_7)) {
   VAR_8 = FUNC_9(((void*)0));
   if (!VAR_8) {
    FUNC_3("Cannot allocate Hyp pte\n");
    return -VAR_0;
   }
   FUNC_4(VAR_7, VAR_8);
   FUNC_2(FUNC_10(VAR_7));
  }

  VAR_10 = FUNC_5(VAR_9, VAR_4);

  FUNC_1(VAR_7, VAR_9, VAR_10, VAR_5, VAR_6);
  VAR_5 += (VAR_10 - VAR_9) >> VAR_1;
 } while (VAR_9 = VAR_10, VAR_9 != VAR_4);

 return 0;
}
