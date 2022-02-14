
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {unsigned long flags; int * mapping; } ;
struct dev_pagemap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (int,struct page*) ;
 int FUNC_11 (unsigned long,int ,int ) ;
 struct page* FUNC_12 (struct page*) ;
 struct dev_pagemap* FUNC_13 (unsigned long,int *) ;
 int FUNC_14 (struct page*) ;
 scalar_t__ FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*,unsigned long,int,struct page**) ;
 int FUNC_17 (unsigned long,struct page*,unsigned long) ;
 scalar_t__ FUNC_18 (struct page*) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (unsigned long,int,struct dev_pagemap*) ;
 int FUNC_21 (unsigned long,int) ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 (struct page*) ;
 int FUNC_25 (char*,unsigned long) ;
 struct page* FUNC_26 (unsigned long) ;
 scalar_t__ FUNC_27 (unsigned long) ;
 int FUNC_28 (char*,unsigned long) ;
 int FUNC_29 (struct page*) ;
 int FUNC_30 (struct page*,int ) ;
 int FUNC_31 (struct page*) ;
 int VAR_11 ;
 scalar_t__ FUNC_32 (int ) ;
 int FUNC_33 (struct page*) ;
 int FUNC_34 (struct page*) ;

int FUNC_35(unsigned long VAR_12, int VAR_13)
{
 struct page *VAR_14;
 struct page *VAR_15;
 struct page *VAR_16;
 struct dev_pagemap *VAR_17;
 int VAR_18;
 unsigned long VAR_19;

 if (!VAR_11)
  FUNC_25("Memory failure on page %lx", VAR_12);

 VAR_14 = FUNC_26(VAR_12);
 if (!VAR_14) {
  if (FUNC_27(VAR_12)) {
   VAR_17 = FUNC_13(VAR_12, ((void*)0));
   if (VAR_17)
    return FUNC_20(VAR_12, VAR_13,
          VAR_17);
  }
  FUNC_28("Memory failure: %#lx: memory outside kernel control\n",
   VAR_12);
  return -VAR_1;
 }

 if (FUNC_3(VAR_14))
  return FUNC_21(VAR_12, VAR_13);
 if (FUNC_9(VAR_14)) {
  FUNC_28("Memory failure: %#lx: already hardware poisoned\n",
   VAR_12);
  return 0;
 }

 VAR_16 = VAR_15 = FUNC_12(VAR_14);
 FUNC_23();
 if (!(VAR_13 & VAR_2) && !FUNC_14(VAR_14)) {
  if (FUNC_18(VAR_14)) {
   FUNC_11(VAR_12, VAR_5, VAR_3);
   return 0;
  } else {
   FUNC_11(VAR_12, VAR_8, VAR_4);
   return -VAR_0;
  }
 }

 if (FUNC_6(VAR_15)) {
  FUNC_19(VAR_14);
  if (!FUNC_0(VAR_14) || FUNC_32(FUNC_31(VAR_14))) {
   FUNC_33(VAR_14);
   if (!FUNC_0(VAR_14))
    FUNC_28("Memory failure: %#lx: non anonymous thp\n",
     VAR_12);
   else
    FUNC_28("Memory failure: %#lx: thp split failed\n",
     VAR_12);
   if (FUNC_8(VAR_14))
    FUNC_22();
   FUNC_29(VAR_14);
   return -VAR_0;
  }
  FUNC_33(VAR_14);
  FUNC_10(!FUNC_24(VAR_14), VAR_14);
  VAR_15 = FUNC_12(VAR_14);
 }
 FUNC_30(VAR_14, 0);

 if (!FUNC_4(VAR_14) && FUNC_18(VAR_14)) {
  if (VAR_13 & VAR_2)
   FUNC_11(VAR_12, VAR_5, VAR_3);
  else
   FUNC_11(VAR_12, VAR_6, VAR_3);
  return 0;
 }

 FUNC_19(VAR_14);





 if (FUNC_1(VAR_14) && FUNC_12(VAR_14) != VAR_16) {
  FUNC_11(VAR_12, VAR_7, VAR_4);
  VAR_18 = -VAR_0;
  goto out;
 }
 if (FUNC_3(VAR_14))
  VAR_19 = VAR_15->flags;
 else
  VAR_19 = VAR_14->flags;




 if (!FUNC_2(VAR_14)) {
  FUNC_28("Memory failure: %#lx: just unpoisoned\n", VAR_12);
  FUNC_22();
  FUNC_33(VAR_14);
  FUNC_29(VAR_14);
  return 0;
 }
 if (FUNC_15(VAR_14)) {
  if (FUNC_8(VAR_14))
   FUNC_22();
  FUNC_33(VAR_14);
  FUNC_29(VAR_14);
  return 0;
 }

 if (!FUNC_7(VAR_14) && !FUNC_4(VAR_14))
  goto identify_page_state;





 FUNC_34(VAR_14);
 if (!FUNC_16(VAR_14, VAR_12, VAR_13, &VAR_15)) {
  FUNC_11(VAR_12, VAR_10, VAR_4);
  VAR_18 = -VAR_0;
  goto out;
 }




 if (FUNC_4(VAR_14) && !FUNC_5(VAR_14) && VAR_14->mapping == ((void*)0)) {
  FUNC_11(VAR_12, VAR_9, VAR_4);
  VAR_18 = -VAR_0;
  goto out;
 }

identify_page_state:
 VAR_18 = FUNC_17(VAR_12, VAR_14, VAR_19);
out:
 FUNC_33(VAR_14);
 return VAR_18;
}
