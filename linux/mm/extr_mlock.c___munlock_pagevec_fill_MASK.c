
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct vm_area_struct {int vm_mm; } ;
struct pagevec {int dummy; } ;
struct page {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int * FUNC_1 (int ,unsigned long,int **) ;
 int FUNC_2 (struct page*) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 struct zone* FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct pagevec*,struct page*) ;
 unsigned long FUNC_6 (unsigned long,unsigned long) ;
 unsigned long FUNC_7 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 unsigned long FUNC_10 (unsigned long,unsigned long) ;
 struct page* FUNC_11 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static unsigned long FUNC_12(struct pagevec *VAR_1,
   struct vm_area_struct *VAR_2, struct zone *VAR_3,
   unsigned long VAR_4, unsigned long VAR_5)
{
 pte_t *VAR_6;
 spinlock_t *VAR_7;






 VAR_6 = FUNC_1(VAR_2->vm_mm, VAR_4, &VAR_7);

 VAR_5 = FUNC_6(VAR_4, VAR_5);
 VAR_5 = FUNC_3(VAR_4, VAR_5);
 VAR_5 = FUNC_10(VAR_4, VAR_5);
 VAR_5 = FUNC_7(VAR_4, VAR_5);


 VAR_4 += VAR_0;
 while (VAR_4 < VAR_5) {
  struct page *VAR_8 = ((void*)0);
  VAR_6++;
  if (FUNC_8(*VAR_6))
   VAR_8 = FUNC_11(VAR_2, VAR_4, *VAR_6);




  if (!VAR_8 || FUNC_4(VAR_8) != VAR_3)
   break;





  if (FUNC_0(VAR_8))
   break;

  FUNC_2(VAR_8);




  VAR_4 += VAR_0;
  if (FUNC_5(VAR_1, VAR_8) == 0)
   break;
 }
 FUNC_9(VAR_6, VAR_7);
 return VAR_4;
}
