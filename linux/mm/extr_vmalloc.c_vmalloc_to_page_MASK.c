
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (void const*) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int *,unsigned long) ;
 int * FUNC_10 (int *,unsigned long) ;
 struct page* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int * FUNC_16 (int *,unsigned long) ;

struct page *FUNC_17(const void *VAR_0)
{
 unsigned long VAR_1 = (unsigned long) VAR_0;
 struct page *VAR_2 = ((void*)0);
 pgd_t *VAR_3 = FUNC_6(VAR_1);
 p4d_t *VAR_4;
 pud_t *VAR_5;
 pmd_t *VAR_6;
 pte_t *VAR_7, VAR_8;





 FUNC_0(!FUNC_2(VAR_0));

 if (FUNC_5(*VAR_3))
  return ((void*)0);
 VAR_4 = FUNC_4(VAR_3, VAR_1);
 if (FUNC_3(*VAR_4))
  return ((void*)0);
 VAR_5 = FUNC_16(VAR_4, VAR_1);
 FUNC_1(FUNC_14(*VAR_5));
 if (FUNC_15(*VAR_5) || FUNC_14(*VAR_5))
  return ((void*)0);
 VAR_6 = FUNC_9(VAR_5, VAR_1);
 FUNC_1(FUNC_7(*VAR_6));
 if (FUNC_8(*VAR_6) || FUNC_7(*VAR_6))
  return ((void*)0);

 VAR_7 = FUNC_10(VAR_6, VAR_1);
 VAR_8 = *VAR_7;
 if (FUNC_12(VAR_8))
  VAR_2 = FUNC_11(VAR_8);
 FUNC_13(VAR_7);
 return VAR_2;
}
