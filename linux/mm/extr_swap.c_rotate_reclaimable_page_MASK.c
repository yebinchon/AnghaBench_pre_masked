
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {int dummy; } ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int VAR_0 ;
 int FUNC_8 (struct pagevec*,struct page*) ;
 int FUNC_9 (struct pagevec*) ;
 struct pagevec* FUNC_10 (int *) ;

void FUNC_11(struct page *VAR_1)
{
 if (!FUNC_3(VAR_1) && !FUNC_1(VAR_1) &&
     !FUNC_4(VAR_1) && FUNC_2(VAR_1)) {
  struct pagevec *VAR_2;
  unsigned long VAR_3;

  FUNC_5(VAR_1);
  FUNC_7(VAR_3);
  VAR_2 = FUNC_10(&VAR_0);
  if (!FUNC_8(VAR_2, VAR_1) || FUNC_0(VAR_1))
   FUNC_9(VAR_2);
  FUNC_6(VAR_3);
 }
}
