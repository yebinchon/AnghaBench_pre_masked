
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {struct address_space* mapping; } ;
struct address_space {scalar_t__ nrpages; scalar_t__ nrexceptional; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct address_space*) ;
 int FUNC_3 (struct address_space*,struct page*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct address_space*,struct pagevec*) ;
 int FUNC_6 (struct page*,unsigned int,unsigned int) ;
 struct page* FUNC_7 (struct address_space*,int) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct pagevec*,struct page*) ;
 int FUNC_13 (struct pagevec*) ;
 int FUNC_14 (struct pagevec*) ;
 scalar_t__ FUNC_15 (struct pagevec*,struct address_space*,int,int ,int*) ;
 int FUNC_16 (struct pagevec*) ;
 int FUNC_17 (struct pagevec*) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (struct address_space*,struct page*) ;
 int FUNC_20 (struct address_space*,struct pagevec*,int*,int) ;
 int FUNC_21 (struct address_space*,struct page*) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (struct page*) ;
 scalar_t__ FUNC_25 (struct page*) ;
 int FUNC_26 (struct page*,unsigned int,unsigned int) ;

void FUNC_27(struct address_space *VAR_3,
    loff_t VAR_4, loff_t VAR_5)
{
 pgoff_t VAR_6;
 pgoff_t VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 struct pagevec VAR_10;
 pgoff_t VAR_11[VAR_0];
 pgoff_t VAR_12;
 int VAR_13;

 if (VAR_3->nrpages == 0 && VAR_3->nrexceptional == 0)
  goto out;


 VAR_8 = VAR_4 & (VAR_2 - 1);
 VAR_9 = (VAR_5 + 1) & (VAR_2 - 1);







 VAR_6 = (VAR_4 + VAR_2 - 1) >> VAR_1;
 if (VAR_5 == -1)





  VAR_7 = -1;
 else
  VAR_7 = (VAR_5 + 1) >> VAR_1;

 FUNC_14(&VAR_10);
 VAR_12 = VAR_6;
 while (VAR_12 < VAR_7 && FUNC_15(&VAR_10, VAR_3, VAR_12,
   FUNC_9(VAR_7 - VAR_12, (pgoff_t)VAR_0),
   VAR_11)) {





  struct pagevec VAR_14;

  FUNC_14(&VAR_14);
  for (VAR_13 = 0; VAR_13 < FUNC_13(&VAR_10); VAR_13++) {
   struct page *VAR_15 = VAR_10.pages[VAR_13];


   VAR_12 = VAR_11[VAR_13];
   if (VAR_12 >= VAR_7)
    break;

   if (FUNC_25(VAR_15))
    continue;

   if (!FUNC_22(VAR_15))
    continue;
   FUNC_1(FUNC_11(VAR_15) != VAR_12);
   if (FUNC_0(VAR_15)) {
    FUNC_23(VAR_15);
    continue;
   }
   if (VAR_15->mapping != VAR_3) {
    FUNC_23(VAR_15);
    continue;
   }
   FUNC_12(&VAR_14, VAR_15);
  }
  for (VAR_13 = 0; VAR_13 < FUNC_13(&VAR_14); VAR_13++)
   FUNC_19(VAR_3, VAR_14.pages[VAR_13]);
  FUNC_5(VAR_3, &VAR_14);
  for (VAR_13 = 0; VAR_13 < FUNC_13(&VAR_14); VAR_13++)
   FUNC_23(VAR_14.pages[VAR_13]);
  FUNC_20(VAR_3, &VAR_10, VAR_11, VAR_7);
  FUNC_16(&VAR_10);
  FUNC_4();
  VAR_12++;
 }
 if (VAR_8) {
  struct page *VAR_16 = FUNC_7(VAR_3, VAR_6 - 1);
  if (VAR_16) {
   unsigned int VAR_17 = VAR_2;
   if (VAR_6 > VAR_7) {

    VAR_17 = VAR_9;
    VAR_9 = 0;
   }
   FUNC_24(VAR_16);
   FUNC_26(VAR_16, VAR_8, VAR_17);
   FUNC_3(VAR_3, VAR_16);
   if (FUNC_10(VAR_16))
    FUNC_6(VAR_16, VAR_8,
        VAR_17 - VAR_8);
   FUNC_23(VAR_16);
   FUNC_18(VAR_16);
  }
 }
 if (VAR_9) {
  struct page *VAR_18 = FUNC_7(VAR_3, VAR_7);
  if (VAR_18) {
   FUNC_24(VAR_18);
   FUNC_26(VAR_18, 0, VAR_9);
   FUNC_3(VAR_3, VAR_18);
   if (FUNC_10(VAR_18))
    FUNC_6(VAR_18, 0,
        VAR_9);
   FUNC_23(VAR_18);
   FUNC_18(VAR_18);
  }
 }




 if (VAR_6 >= VAR_7)
  goto out;

 VAR_12 = VAR_6;
 for ( ; ; ) {
  FUNC_4();
  if (!FUNC_15(&VAR_10, VAR_3, VAR_12,
   FUNC_9(VAR_7 - VAR_12, (pgoff_t)VAR_0), VAR_11)) {

   if (VAR_12 == VAR_6)
    break;

   VAR_12 = VAR_6;
   continue;
  }
  if (VAR_12 == VAR_6 && VAR_11[0] >= VAR_7) {

   FUNC_17(&VAR_10);
   FUNC_16(&VAR_10);
   break;
  }

  for (VAR_13 = 0; VAR_13 < FUNC_13(&VAR_10); VAR_13++) {
   struct page *VAR_19 = VAR_10.pages[VAR_13];


   VAR_12 = VAR_11[VAR_13];
   if (VAR_12 >= VAR_7) {

    VAR_12 = VAR_6 - 1;
    break;
   }

   if (FUNC_25(VAR_19))
    continue;

   FUNC_8(VAR_19);
   FUNC_1(FUNC_11(VAR_19) != VAR_12);
   FUNC_24(VAR_19);
   FUNC_21(VAR_3, VAR_19);
   FUNC_23(VAR_19);
  }
  FUNC_20(VAR_3, &VAR_10, VAR_11, VAR_7);
  FUNC_16(&VAR_10);
  VAR_12++;
 }

out:
 FUNC_2(VAR_3);
}
