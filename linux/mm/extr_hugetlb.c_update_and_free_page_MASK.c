
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
struct hstate {int * nr_huge_pages_node; int nr_huge_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct page*) ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (struct page*,int ) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct hstate*) ;
 int FUNC_6 (struct hstate*) ;
 int FUNC_7 (struct page*) ;
 size_t FUNC_8 (struct page*) ;
 int FUNC_9 (struct hstate*) ;
 int FUNC_10 (struct page*,int ) ;
 int FUNC_11 (struct page*) ;

__attribute__((used)) static void FUNC_12(struct hstate *VAR_8, struct page *VAR_9)
{
 int VAR_10;

 if (FUNC_5(VAR_8) && !FUNC_4())
  return;

 VAR_8->nr_huge_pages--;
 VAR_8->nr_huge_pages_node[FUNC_8(VAR_9)]--;
 for (VAR_10 = 0; VAR_10 < FUNC_9(VAR_8); VAR_10++) {
  VAR_9[VAR_10].flags &= ~(1 << VAR_4 | 1 << VAR_3 |
    1 << VAR_6 | 1 << VAR_2 |
    1 << VAR_1 | 1 << VAR_5 |
    1 << VAR_7);
 }
 FUNC_0(FUNC_7(VAR_9), VAR_9);
 FUNC_10(VAR_9, VAR_0);
 FUNC_11(VAR_9);
 if (FUNC_5(VAR_8)) {
  FUNC_2(VAR_9, FUNC_6(VAR_8));
  FUNC_3(VAR_9, FUNC_6(VAR_8));
 } else {
  FUNC_1(VAR_9, FUNC_6(VAR_8));
 }
}
