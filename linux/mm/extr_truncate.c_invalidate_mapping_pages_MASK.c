
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct address_space*,scalar_t__,struct page*) ;
 unsigned long FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (struct pagevec*) ;
 int FUNC_11 (struct pagevec*) ;
 scalar_t__ FUNC_12 (struct pagevec*,struct address_space*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_13 (struct pagevec*) ;
 int FUNC_14 (struct pagevec*) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;
 scalar_t__ FUNC_18 (struct page*) ;

unsigned long FUNC_19(struct address_space *VAR_2,
  pgoff_t VAR_3, pgoff_t VAR_4)
{
 pgoff_t VAR_5[VAR_1];
 struct pagevec VAR_6;
 pgoff_t VAR_7 = VAR_3;
 unsigned long VAR_8;
 unsigned long VAR_9 = 0;
 int VAR_10;

 FUNC_11(&VAR_6);
 while (VAR_7 <= VAR_4 && FUNC_12(&VAR_6, VAR_2, VAR_7,
   FUNC_8(VAR_4 - VAR_7, (pgoff_t)VAR_1 - 1) + 1,
   VAR_5)) {
  for (VAR_10 = 0; VAR_10 < FUNC_10(&VAR_6); VAR_10++) {
   struct page *VAR_11 = VAR_6.pages[VAR_10];


   VAR_7 = VAR_5[VAR_10];
   if (VAR_7 > VAR_4)
    break;

   if (FUNC_18(VAR_11)) {
    FUNC_6(VAR_2, VAR_7,
            VAR_11);
    continue;
   }

   if (!FUNC_16(VAR_11))
    continue;

   FUNC_2(FUNC_9(VAR_11) != VAR_7);


   if (FUNC_1(VAR_11)) {
    FUNC_17(VAR_11);
    continue;
   } else if (FUNC_0(VAR_11)) {
    VAR_7 += VAR_0 - 1;
    VAR_10 += VAR_0 - 1;





    if (VAR_7 > VAR_4) {
     FUNC_17(VAR_11);
     continue;
    }


    FUNC_5(VAR_11);





    FUNC_14(&VAR_6);
    FUNC_13(&VAR_6);
   }

   VAR_8 = FUNC_7(VAR_11);
   FUNC_17(VAR_11);




   if (!VAR_8)
    FUNC_4(VAR_11);
   if (FUNC_0(VAR_11))
    FUNC_15(VAR_11);
   VAR_9 += VAR_8;
  }
  FUNC_14(&VAR_6);
  FUNC_13(&VAR_6);
  FUNC_3();
  VAR_7++;
 }
 return VAR_9;
}
