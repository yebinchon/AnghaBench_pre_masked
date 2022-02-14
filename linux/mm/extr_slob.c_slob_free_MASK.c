
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int units; void* freelist; } ;
struct list_head {int dummy; } ;
typedef int slobidx_t ;
typedef void slob_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 struct list_head VAR_4 ;
 struct list_head VAR_5 ;
 struct list_head VAR_6 ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (void*,int,void*) ;
 int FUNC_7 (struct page*,struct list_head*) ;
 int FUNC_8 (void*,int ) ;
 int FUNC_9 (void*) ;
 int VAR_7 ;
 void* FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (struct page*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (int ) ;
 struct page* FUNC_16 (void*) ;

__attribute__((used)) static void FUNC_17(void *VAR_8, int VAR_9)
{
 struct page *VAR_10;
 slob_t *VAR_11, *VAR_12, *VAR_13 = (slob_t *)VAR_8;
 slobidx_t VAR_14;
 unsigned long VAR_15;
 struct list_head *VAR_16;

 if (FUNC_15(FUNC_2(VAR_8)))
  return;
 FUNC_0(!VAR_9);

 VAR_10 = FUNC_16(VAR_8);
 VAR_14 = FUNC_1(VAR_9);

 FUNC_13(&VAR_7, VAR_15);

 if (VAR_10->units + VAR_14 == FUNC_1(VAR_1)) {

  if (FUNC_11(VAR_10))
   FUNC_4(VAR_10);
  FUNC_14(&VAR_7, VAR_15);
  FUNC_3(VAR_10);
  FUNC_5(VAR_10);
  FUNC_8(VAR_13, 0);
  return;
 }

 if (!FUNC_11(VAR_10)) {

  VAR_10->units = VAR_14;
  VAR_10->freelist = VAR_13;
  FUNC_6(VAR_13, VAR_14,
   (void *)((unsigned long)(VAR_13 +
     FUNC_1(VAR_1)) & VAR_0));
  if (VAR_9 < VAR_2)
   VAR_16 = &VAR_6;
  else if (VAR_9 < VAR_3)
   VAR_16 = &VAR_5;
  else
   VAR_16 = &VAR_4;
  FUNC_7(VAR_10, VAR_16);
  goto out;
 }





 VAR_10->units += VAR_14;

 if (VAR_13 < (slob_t *)VAR_10->freelist) {
  if (VAR_13 + VAR_14 == VAR_10->freelist) {
   VAR_14 += FUNC_12(VAR_10->freelist);
   VAR_10->freelist = FUNC_10(VAR_10->freelist);
  }
  FUNC_6(VAR_13, VAR_14, VAR_10->freelist);
  VAR_10->freelist = VAR_13;
 } else {
  VAR_11 = VAR_10->freelist;
  VAR_12 = FUNC_10(VAR_11);
  while (VAR_13 > VAR_12) {
   VAR_11 = VAR_12;
   VAR_12 = FUNC_10(VAR_11);
  }

  if (!FUNC_9(VAR_11) && VAR_13 + VAR_14 == VAR_12) {
   VAR_14 += FUNC_12(VAR_12);
   FUNC_6(VAR_13, VAR_14, FUNC_10(VAR_12));
  } else
   FUNC_6(VAR_13, VAR_14, VAR_12);

  if (VAR_11 + FUNC_12(VAR_11) == VAR_13) {
   VAR_14 = FUNC_12(VAR_13) + FUNC_12(VAR_11);
   FUNC_6(VAR_11, VAR_14, FUNC_10(VAR_13));
  } else
   FUNC_6(VAR_11, FUNC_12(VAR_11), VAR_13);
 }
out:
 FUNC_14(&VAR_7, VAR_15);
}
