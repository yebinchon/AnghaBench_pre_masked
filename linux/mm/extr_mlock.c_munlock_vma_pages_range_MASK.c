
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct vm_area_struct {int vm_flags; } ;
struct pagevec {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 unsigned long VAR_2 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (int ,struct page*) ;
 int VAR_3 ;
 int FUNC_5 (struct pagevec*,struct zone*) ;
 unsigned long FUNC_6 (struct pagevec*,struct vm_area_struct*,struct zone*,unsigned long,unsigned long) ;
 int FUNC_7 () ;
 struct page* FUNC_8 (struct vm_area_struct*,unsigned long,int) ;
 int FUNC_9 (struct page*) ;
 unsigned int FUNC_10 (struct page*) ;
 struct zone* FUNC_11 (struct page*) ;
 int FUNC_12 (struct pagevec*,struct page*) ;
 int FUNC_13 (struct pagevec*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*) ;

void FUNC_16(struct vm_area_struct *VAR_4,
        unsigned long VAR_5, unsigned long VAR_6)
{
 VAR_4->vm_flags &= VAR_3;

 while (VAR_5 < VAR_6) {
  struct page *VAR_7;
  unsigned int VAR_8 = 0;
  unsigned long VAR_9;
  struct pagevec VAR_10;
  struct zone *VAR_11;

  FUNC_13(&VAR_10);







  VAR_7 = FUNC_8(VAR_4, VAR_5, VAR_1 | VAR_0);

  if (VAR_7 && !FUNC_0(VAR_7)) {
   if (FUNC_3(VAR_7)) {
    FUNC_4(FUNC_1(VAR_7), VAR_7);
    FUNC_14(VAR_7);
   } else if (FUNC_2(VAR_7)) {
    FUNC_9(VAR_7);






    VAR_8 = FUNC_10(VAR_7);
    FUNC_15(VAR_7);
    FUNC_14(VAR_7);
   } else {





    FUNC_12(&VAR_10, VAR_7);
    VAR_11 = FUNC_11(VAR_7);







    VAR_5 = FUNC_6(&VAR_10, VAR_4,
      VAR_11, VAR_5, VAR_6);
    FUNC_5(&VAR_10, VAR_11);
    goto next;
   }
  }
  VAR_9 = 1 + VAR_8;
  VAR_5 += VAR_9 * VAR_2;
next:
  FUNC_7();
 }
}
