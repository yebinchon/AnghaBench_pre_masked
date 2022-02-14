
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int * FUNC_3 (struct mm_struct*,unsigned long,int **) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct mm_struct*,int ) ;
 int FUNC_6 (struct page*,int ) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*,int) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (struct mm_struct*,unsigned long,int *,int ) ;

__attribute__((used)) static int FUNC_13(struct vm_area_struct *VAR_3, unsigned long VAR_4,
   struct page *VAR_5, pgprot_t VAR_6)
{
 struct mm_struct *VAR_7 = VAR_3->vm_mm;
 int VAR_8;
 pte_t *VAR_9;
 spinlock_t *VAR_10;

 VAR_8 = -VAR_1;
 if (FUNC_0(VAR_5) || FUNC_1(VAR_5) || FUNC_9(VAR_5))
  goto out;
 VAR_8 = -VAR_2;
 FUNC_2(VAR_5);
 VAR_9 = FUNC_3(VAR_7, VAR_4, &VAR_10);
 if (!VAR_9)
  goto out;
 VAR_8 = -VAR_0;
 if (!FUNC_10(*VAR_9))
  goto out_unlock;


 FUNC_4(VAR_5);
 FUNC_5(VAR_7, FUNC_7(VAR_5));
 FUNC_8(VAR_5, 0);
 FUNC_12(VAR_7, VAR_4, VAR_9, FUNC_6(VAR_5, VAR_6));

 VAR_8 = 0;
out_unlock:
 FUNC_11(VAR_9, VAR_10);
out:
 return VAR_8;
}
