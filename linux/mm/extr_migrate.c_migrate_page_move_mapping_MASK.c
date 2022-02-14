
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int zone_pgdat; } ;
struct page {int mapping; int index; } ;
struct address_space {int i_pages; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (scalar_t__,struct page*) ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct zone*,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct zone*,int ) ;
 int FUNC_14 (struct address_space*,struct page*) ;
 scalar_t__ FUNC_15 (struct page*) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (struct address_space*) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (struct page*,scalar_t__) ;
 int FUNC_22 (struct page*,int) ;
 int FUNC_23 (struct page*,scalar_t__) ;
 struct zone* FUNC_24 (struct page*) ;
 int FUNC_25 (struct page*,int ) ;
 int VAR_7 ;
 struct page* FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,struct page*) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;

int FUNC_32(struct address_space *VAR_8,
  struct page *VAR_9, struct page *VAR_10, int VAR_11)
{
 FUNC_8(VAR_7, &VAR_8->i_pages, FUNC_19(VAR_10));
 struct zone *VAR_12, *VAR_13;
 int VAR_14;
 int VAR_15 = FUNC_14(VAR_8, VAR_10) + VAR_11;

 if (!VAR_8) {

  if (FUNC_18(VAR_10) != VAR_15)
   return -VAR_0;


  VAR_9->index = VAR_10->index;
  VAR_9->mapping = VAR_10->mapping;
  if (FUNC_2(VAR_10))
   FUNC_9(VAR_9);

  return VAR_2;
 }

 VAR_12 = FUNC_24(VAR_10);
 VAR_13 = FUNC_24(VAR_9);

 FUNC_27(&VAR_7);
 if (FUNC_18(VAR_10) != VAR_15 || FUNC_26(&VAR_7) != VAR_10) {
  FUNC_31(&VAR_7);
  return -VAR_0;
 }

 if (!FUNC_22(VAR_10, VAR_15)) {
  FUNC_31(&VAR_7);
  return -VAR_0;
 }





 VAR_9->index = VAR_10->index;
 VAR_9->mapping = VAR_10->mapping;
 FUNC_21(VAR_9, FUNC_15(VAR_10));
 if (FUNC_2(VAR_10)) {
  FUNC_9(VAR_9);
  if (FUNC_3(VAR_10)) {
   FUNC_6(VAR_9);
   FUNC_25(VAR_9, FUNC_20(VAR_10));
  }
 } else {
  FUNC_7(FUNC_3(VAR_10), VAR_10);
 }


 VAR_14 = FUNC_1(VAR_10);
 if (VAR_14) {
  FUNC_0(VAR_10);
  FUNC_5(VAR_9);
 }

 FUNC_29(&VAR_7, VAR_9);
 if (FUNC_4(VAR_10)) {
  int VAR_16;

  for (VAR_16 = 1; VAR_16 < VAR_1; VAR_16++) {
   FUNC_28(&VAR_7);
   FUNC_29(&VAR_7, VAR_9);
  }
 }






 FUNC_23(VAR_10, VAR_15 - FUNC_15(VAR_10));

 FUNC_30(&VAR_7);
 if (VAR_13 != VAR_12) {
  FUNC_10(VAR_12->zone_pgdat, VAR_4);
  FUNC_12(VAR_13->zone_pgdat, VAR_4);
  if (FUNC_2(VAR_10) && !FUNC_3(VAR_10)) {
   FUNC_10(VAR_12->zone_pgdat, VAR_5);
   FUNC_12(VAR_13->zone_pgdat, VAR_5);
  }
  if (VAR_14 && FUNC_17(VAR_8)) {
   FUNC_10(VAR_12->zone_pgdat, VAR_3);
   FUNC_11(VAR_12, VAR_6);
   FUNC_12(VAR_13->zone_pgdat, VAR_3);
   FUNC_13(VAR_13, VAR_6);
  }
 }
 FUNC_16();

 return VAR_2;
}
