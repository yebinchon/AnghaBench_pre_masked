
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_pages {unsigned long flags; int pagelist; } ;
struct page {int dummy; } ;
struct mm_walk {int mm; int vma; struct queue_pages* private; } ;
typedef int spinlock_t ;
typedef int pte_t ;


 int FUNC_0 () ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct page*,int ) ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct page*,struct queue_pages*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(pte_t *VAR_2, unsigned long VAR_3,
          unsigned long VAR_4, unsigned long VAR_5,
          struct mm_walk *VAR_6)
{
 FUNC_0();

 return 0;
}
