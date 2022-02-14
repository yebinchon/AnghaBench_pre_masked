
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct page* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct mm_struct *VAR_0, pte_t *VAR_1,
    spinlock_t *VAR_2)
{
 pte_t VAR_3;
 swp_entry_t VAR_4;
 struct page *VAR_5;

 FUNC_7(VAR_2);
 VAR_3 = *VAR_1;
 if (!FUNC_2(VAR_3))
  goto out;

 VAR_4 = FUNC_4(VAR_3);
 if (!FUNC_1(VAR_4))
  goto out;

 VAR_5 = FUNC_3(VAR_4);






 if (!FUNC_0(VAR_5))
  goto out;
 FUNC_5(VAR_1, VAR_2);
 FUNC_6(VAR_5);
 return;
out:
 FUNC_5(VAR_1, VAR_2);
}
