
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pgprot_t ;
typedef int pgd_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int *,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned long FUNC_8 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(pgd_t *VAR_4, unsigned long VAR_5,
     unsigned long VAR_6, unsigned long VAR_7,
     unsigned long VAR_8, pgprot_t VAR_9)
{
 pgd_t *VAR_10;
 pud_t *VAR_11;
 unsigned long VAR_12, VAR_13;
 int VAR_14 = 0;

 FUNC_6(&VAR_3);
 VAR_12 = VAR_6 & VAR_1;
 VAR_7 = FUNC_0(VAR_7);
 do {
  VAR_10 = VAR_4 + FUNC_4(VAR_12, VAR_5);

  if (FUNC_9(*VAR_10)) {
   VAR_11 = FUNC_10(((void*)0), VAR_12);
   if (!VAR_11) {
    FUNC_3("Cannot allocate Hyp pud\n");
    VAR_14 = -VAR_0;
    goto out;
   }
   FUNC_5(VAR_10, VAR_11);
   FUNC_2(FUNC_11(VAR_10));
  }

  VAR_13 = FUNC_8(VAR_12, VAR_7);
  VAR_14 = FUNC_1(VAR_10, VAR_12, VAR_13, VAR_8, VAR_9);
  if (VAR_14)
   goto out;
  VAR_8 += (VAR_13 - VAR_12) >> VAR_2;
 } while (VAR_12 = VAR_13, VAR_12 != VAR_7);
out:
 FUNC_7(&VAR_3);
 return VAR_14;
}
