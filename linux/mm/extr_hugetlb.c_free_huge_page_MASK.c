
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; int * mapping; } ;
struct hugepage_subpool {int dummy; } ;
struct hstate {scalar_t__* surplus_huge_pages_node; int surplus_huge_pages; int resv_huge_pages; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ,struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct hstate*,struct page*) ;
 int FUNC_8 (struct hstate*) ;
 scalar_t__ FUNC_9 (struct hugepage_subpool*,int) ;
 int FUNC_10 (int ,int ,struct page*) ;
 int VAR_0 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct page*) ;
 struct hstate* FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 scalar_t__ FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct hstate*) ;
 int FUNC_18 (struct page*,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct hstate*,struct page*) ;

void FUNC_22(struct page *VAR_1)
{




 struct hstate *VAR_2 = FUNC_13(VAR_1);
 int VAR_3 = FUNC_16(VAR_1);
 struct hugepage_subpool *VAR_4 =
  (struct hugepage_subpool *)FUNC_15(VAR_1);
 bool VAR_5;

 FUNC_4(FUNC_12(VAR_1), VAR_1);
 FUNC_4(FUNC_14(VAR_1), VAR_1);

 FUNC_18(VAR_1, 0);
 VAR_1->mapping = ((void*)0);
 VAR_5 = FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 if (!VAR_5) {






  if (FUNC_9(VAR_4, 1) == 0)
   VAR_5 = 1;
 }

 FUNC_19(&VAR_0);
 FUNC_6(VAR_1);
 FUNC_10(FUNC_8(VAR_2),
         FUNC_17(VAR_2), VAR_1);
 if (VAR_5)
  VAR_2->resv_huge_pages++;

 if (FUNC_2(VAR_1)) {
  FUNC_11(&VAR_1->lru);
  FUNC_0(VAR_1);
  FUNC_21(VAR_2, VAR_1);
 } else if (VAR_2->surplus_huge_pages_node[VAR_3]) {

  FUNC_11(&VAR_1->lru);
  FUNC_21(VAR_2, VAR_1);
  VAR_2->surplus_huge_pages--;
  VAR_2->surplus_huge_pages_node[VAR_3]--;
 } else {
  FUNC_5(VAR_1);
  FUNC_7(VAR_2, VAR_1);
 }
 FUNC_20(&VAR_0);
}
