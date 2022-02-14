
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pmd_t ;
typedef int pgprot_t ;
typedef int pgd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,unsigned long) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(pgd_t *VAR_2, unsigned long VAR_3,
       unsigned long VAR_4, unsigned long VAR_5,
       pgprot_t VAR_6)
{
 pud_t *VAR_7;
 pmd_t *VAR_8;
 unsigned long VAR_9, VAR_10;
 int VAR_11;

 VAR_9 = VAR_3;
 do {
  VAR_7 = FUNC_7(VAR_2, VAR_9);

  if (FUNC_6(VAR_7)) {
   VAR_8 = FUNC_4(((void*)0), VAR_9);
   if (!VAR_8) {
    FUNC_2("Cannot allocate Hyp pmd\n");
    return -VAR_0;
   }
   FUNC_3(VAR_7, VAR_8);
   FUNC_1(FUNC_8(VAR_7));
  }

  VAR_10 = FUNC_5(VAR_9, VAR_4);
  VAR_11 = FUNC_0(VAR_7, VAR_9, VAR_10, VAR_5, VAR_6);
  if (VAR_11)
   return VAR_11;
  VAR_5 += (VAR_10 - VAR_9) >> VAR_1;
 } while (VAR_9 = VAR_10, VAR_9 != VAR_4);

 return 0;
}
