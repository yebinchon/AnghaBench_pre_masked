
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct queue_pages {unsigned long flags; int pagelist; } ;
struct page {int dummy; } ;
struct mm_walk {int mm; struct queue_pages* private; struct vm_area_struct* vma; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct page*,int ,unsigned long) ;
 int * FUNC_3 (int *,struct vm_area_struct*) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int ,int *,unsigned long,int **) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,unsigned long,unsigned long,struct mm_walk*) ;
 int FUNC_9 (struct page*,struct queue_pages*) ;
 struct page* FUNC_10 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_11 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_12(pmd_t *VAR_4, unsigned long VAR_5,
   unsigned long VAR_6, struct mm_walk *VAR_7)
{
 struct vm_area_struct *VAR_8 = VAR_7->vma;
 struct page *VAR_9;
 struct queue_pages *VAR_10 = VAR_7->private;
 unsigned long VAR_11 = VAR_10->flags;
 int VAR_12;
 bool VAR_13 = 0;
 pte_t *VAR_14;
 spinlock_t *VAR_15;

 VAR_15 = FUNC_3(VAR_4, VAR_8);
 if (VAR_15) {
  VAR_12 = FUNC_8(VAR_4, VAR_15, VAR_5, VAR_6, VAR_7);
  if (VAR_12 != 2)
   return VAR_12;
 }


 if (FUNC_4(VAR_4))
  return 0;

 VAR_14 = FUNC_5(VAR_7->mm, VAR_4, VAR_5, &VAR_15);
 for (; VAR_5 != VAR_6; VAR_14++, VAR_5 += VAR_3) {
  if (!FUNC_6(*VAR_14))
   continue;
  VAR_9 = FUNC_10(VAR_8, VAR_5, *VAR_14);
  if (!VAR_9)
   continue;




  if (FUNC_0(VAR_9))
   continue;
  if (!FUNC_9(VAR_9, VAR_10))
   continue;
  if (VAR_11 & (VAR_1 | VAR_2)) {

   if (!FUNC_11(VAR_8)) {
    VAR_13 = 1;
    break;
   }






   if (FUNC_2(VAR_9, VAR_10->pagelist, VAR_11))
    VAR_13 = 1;
  } else
   break;
 }
 FUNC_7(VAR_14 - 1, VAR_15);
 FUNC_1();

 if (VAR_13)
  return 1;

 return VAR_5 != VAR_6 ? -VAR_0 : 0;
}
