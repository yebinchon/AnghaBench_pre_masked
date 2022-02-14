
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {unsigned long flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (unsigned long,int ,int ) ;
 struct page* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*,unsigned long,int,struct page**) ;
 int FUNC_10 (unsigned long,struct page*,unsigned long) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct page*) ;
 struct page* FUNC_15 (unsigned long) ;
 int FUNC_16 (char*,unsigned long) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*) ;

__attribute__((used)) static int FUNC_19(unsigned long VAR_8, int VAR_9)
{
 struct page *VAR_10 = FUNC_15(VAR_8);
 struct page *VAR_11 = FUNC_4(VAR_10);
 int VAR_12;
 unsigned long VAR_13;

 if (FUNC_2(VAR_11)) {
  FUNC_16("Memory failure: %#lx: already hardware poisoned\n",
         VAR_8);
  return 0;
 }

 FUNC_13();

 if (!(VAR_9 & VAR_1) && !FUNC_6(VAR_10)) {



  FUNC_11(VAR_11);
  if (FUNC_0(VAR_11)) {
   if ((FUNC_8(VAR_10) && FUNC_1(VAR_10))
       || (VAR_10 != VAR_11 && FUNC_2(VAR_11))) {
    FUNC_12();
    FUNC_18(VAR_11);
    return 0;
   }
  }
  FUNC_18(VAR_11);
  FUNC_5(VAR_10);
  FUNC_3(VAR_8, VAR_4, VAR_2);
  return 0;
 }

 FUNC_11(VAR_11);
 VAR_13 = VAR_11->flags;

 if (!FUNC_0(VAR_11)) {
  FUNC_16("Memory failure: %#lx: just unpoisoned\n", VAR_8);
  FUNC_12();
  FUNC_18(VAR_11);
  FUNC_17(VAR_11);
  return 0;
 }
 if (FUNC_7(FUNC_14(VAR_11)) > VAR_7) {
  FUNC_3(VAR_8, VAR_5, VAR_3);
  VAR_12 = -VAR_0;
  goto out;
 }

 if (!FUNC_9(VAR_10, VAR_8, VAR_9, &VAR_11)) {
  FUNC_3(VAR_8, VAR_6, VAR_3);
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_10(VAR_8, VAR_10, VAR_13);
out:
 FUNC_18(VAR_11);
 return VAR_12;
}
