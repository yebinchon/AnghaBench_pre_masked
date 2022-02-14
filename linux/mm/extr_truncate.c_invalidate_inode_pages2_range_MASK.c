
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {struct address_space* mapping; } ;
struct address_space {scalar_t__ nrpages; scalar_t__ nrexceptional; } ;
typedef scalar_t__ pgoff_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct address_space*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct address_space*) ;
 int FUNC_5 (struct address_space*,struct page*) ;
 int FUNC_6 (struct address_space*,struct page*) ;
 int FUNC_7 (struct address_space*,scalar_t__,struct page*) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (struct page*) ;
 scalar_t__ FUNC_11 (struct page*) ;
 int FUNC_12 (struct pagevec*) ;
 int FUNC_13 (struct pagevec*) ;
 scalar_t__ FUNC_14 (struct pagevec*,struct address_space*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_15 (struct pagevec*) ;
 int FUNC_16 (struct pagevec*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct address_space*,scalar_t__,scalar_t__,int) ;
 int FUNC_19 (struct page*) ;
 scalar_t__ FUNC_20 (struct page*) ;

int FUNC_21(struct address_space *VAR_2,
      pgoff_t VAR_3, pgoff_t VAR_4)
{
 pgoff_t VAR_5[VAR_1];
 struct pagevec VAR_6;
 pgoff_t VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 0;

 if (VAR_2->nrpages == 0 && VAR_2->nrexceptional == 0)
  goto out;

 FUNC_13(&VAR_6);
 VAR_7 = VAR_3;
 while (VAR_7 <= VAR_4 && FUNC_14(&VAR_6, VAR_2, VAR_7,
   FUNC_9(VAR_4 - VAR_7, (pgoff_t)VAR_1 - 1) + 1,
   VAR_5)) {
  for (VAR_8 = 0; VAR_8 < FUNC_12(&VAR_6); VAR_8++) {
   struct page *VAR_12 = VAR_6.pages[VAR_8];


   VAR_7 = VAR_5[VAR_8];
   if (VAR_7 > VAR_4)
    break;

   if (FUNC_20(VAR_12)) {
    if (!FUNC_7(VAR_2,
           VAR_7, VAR_12))
     VAR_9 = -VAR_0;
    continue;
   }

   FUNC_8(VAR_12);
   FUNC_1(FUNC_11(VAR_12) != VAR_7);
   if (VAR_12->mapping != VAR_2) {
    FUNC_17(VAR_12);
    continue;
   }
   FUNC_19(VAR_12);
   if (FUNC_10(VAR_12)) {
    if (!VAR_11) {



     FUNC_18(VAR_2, VAR_7,
      (1 + VAR_4 - VAR_7), 0);
     VAR_11 = 1;
    } else {



     FUNC_18(VAR_2, VAR_7,
        1, 0);
    }
   }
   FUNC_0(FUNC_10(VAR_12));
   VAR_10 = FUNC_5(VAR_2, VAR_12);
   if (VAR_10 == 0) {
    if (!FUNC_6(VAR_2, VAR_12))
     VAR_10 = -VAR_0;
   }
   if (VAR_10 < 0)
    VAR_9 = VAR_10;
   FUNC_17(VAR_12);
  }
  FUNC_16(&VAR_6);
  FUNC_15(&VAR_6);
  FUNC_3();
  VAR_7++;
 }







 if (FUNC_4(VAR_2)) {
  FUNC_18(VAR_2, VAR_3, VAR_4 - VAR_3 + 1, 0);
 }
out:
 FUNC_2(VAR_2);
 return VAR_9;
}
