
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int mmap_sem; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

int FUNC_5(struct page *VAR_3, struct mm_struct *VAR_4,
    unsigned int VAR_5)
{
 if (VAR_5 & VAR_0) {




  if (VAR_5 & VAR_2)
   return 0;

  FUNC_2(&VAR_4->mmap_sem);
  if (VAR_5 & VAR_1)
   FUNC_4(VAR_3);
  else
   FUNC_3(VAR_3);
  return 0;
 } else {
  if (VAR_5 & VAR_1) {
   int VAR_6;

   VAR_6 = FUNC_1(VAR_3);
   if (VAR_6) {
    FUNC_2(&VAR_4->mmap_sem);
    return 0;
   }
  } else
   FUNC_0(VAR_3);
  return 1;
 }
}
