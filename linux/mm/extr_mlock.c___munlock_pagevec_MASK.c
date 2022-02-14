
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zone {TYPE_1__* zone_pgdat; } ;
struct pagevec {struct page** pages; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int lru_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct zone*,int ,int) ;
 scalar_t__ FUNC_2 (struct page*,int) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct pagevec*,int) ;
 int FUNC_6 (struct page*,struct pagevec*,int*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct pagevec*,struct page*) ;
 int FUNC_10 (struct pagevec*) ;
 int FUNC_11 (struct pagevec*) ;
 int FUNC_12 (struct pagevec*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct page*) ;

__attribute__((used)) static void FUNC_17(struct pagevec *VAR_1, struct zone *VAR_2)
{
 int VAR_3;
 int VAR_4 = FUNC_10(VAR_1);
 int VAR_5 = -VAR_4;
 struct pagevec VAR_6;
 int VAR_7 = 0;

 FUNC_11(&VAR_6);


 FUNC_14(&VAR_2->zone_pgdat->lru_lock);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  struct page *VAR_8 = VAR_1->pages[VAR_3];

  if (FUNC_0(VAR_8)) {




   if (FUNC_2(VAR_8, 0))
    continue;
   else
    FUNC_4(VAR_8);
  } else {
   VAR_5++;
  }







  FUNC_9(&VAR_6, VAR_1->pages[VAR_3]);
  VAR_1->pages[VAR_3] = ((void*)0);
 }
 FUNC_1(VAR_2, VAR_0, VAR_5);
 FUNC_15(&VAR_2->zone_pgdat->lru_lock);


 FUNC_12(&VAR_6);


 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  struct page *VAR_9 = VAR_1->pages[VAR_3];

  if (VAR_9) {
   FUNC_8(VAR_9);
   if (!FUNC_6(VAR_9, &VAR_6,
     &VAR_7)) {




    FUNC_7(VAR_9);
    FUNC_3(VAR_9);
    FUNC_16(VAR_9);
    FUNC_13(VAR_9);
   }
  }
 }





 if (FUNC_10(&VAR_6))
  FUNC_5(&VAR_6, VAR_7);
}
