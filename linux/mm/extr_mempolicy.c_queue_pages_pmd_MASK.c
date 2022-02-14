
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_pages {unsigned long flags; int pagelist; } ;
struct page {int dummy; } ;
struct mm_walk {int vma; struct queue_pages* private; } ;
typedef int spinlock_t ;
typedef int pmd_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,int *,unsigned long,int,int *) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct page*,int ,unsigned long) ;
 struct page* FUNC_4 (int ) ;
 int FUNC_5 (struct page*,struct queue_pages*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(pmd_t *VAR_3, spinlock_t *VAR_4, unsigned long VAR_5,
    unsigned long VAR_6, struct mm_walk *VAR_7)
{
 int VAR_8 = 0;
 struct page *VAR_9;
 struct queue_pages *VAR_10 = VAR_7->private;
 unsigned long VAR_11;

 if (FUNC_7(FUNC_2(*VAR_3))) {
  VAR_8 = -VAR_0;
  goto unlock;
 }
 VAR_9 = FUNC_4(*VAR_3);
 if (FUNC_1(VAR_9)) {
  FUNC_6(VAR_4);
  FUNC_0(VAR_7->vma, VAR_3, VAR_5, 0, ((void*)0));
  VAR_8 = 2;
  goto out;
 }
 if (!FUNC_5(VAR_9, VAR_10))
  goto unlock;

 VAR_11 = VAR_10->flags;

 if (VAR_11 & (VAR_1 | VAR_2)) {
  if (!FUNC_8(VAR_7->vma) ||
      FUNC_3(VAR_9, VAR_10->pagelist, VAR_11)) {
   VAR_8 = 1;
   goto unlock;
  }
 } else
  VAR_8 = -VAR_0;
unlock:
 FUNC_6(VAR_4);
out:
 return VAR_8;
}
