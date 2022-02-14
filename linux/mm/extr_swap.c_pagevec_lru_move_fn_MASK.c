
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pglist_data {int lru_lock; } ;
struct pagevec {struct page** pages; int nr; } ;
typedef struct page page ;
typedef struct lruvec lruvec ;


 struct lruvec* FUNC_0 (struct page*,struct pglist_data*) ;
 struct pglist_data* FUNC_1 (struct page*) ;
 int FUNC_2 (struct pagevec*) ;
 int FUNC_3 (struct pagevec*) ;
 int FUNC_4 (struct page**,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 void FUNC_7 (struct page*,struct lruvec*,void*) ;

__attribute__((used)) static void FUNC_8(struct pagevec *VAR_0,
 void (*VAR_1)(struct page *VAR_2, struct lruvec *VAR_3, void *VAR_4),
 void *VAR_5)
{
 int VAR_6;
 struct pglist_data *VAR_7 = ((void*)0);
 struct lruvec *VAR_8;
 unsigned long VAR_9 = 0;

 for (VAR_6 = 0; VAR_6 < FUNC_2(VAR_0); VAR_6++) {
  struct page *VAR_10 = VAR_0->pages[VAR_6];
  struct pglist_data *VAR_11 = FUNC_1(VAR_10);

  if (VAR_11 != VAR_7) {
   if (VAR_7)
    FUNC_6(&VAR_7->lru_lock, VAR_9);
   VAR_7 = VAR_11;
   FUNC_5(&VAR_7->lru_lock, VAR_9);
  }

  VAR_8 = FUNC_0(VAR_10, VAR_7);
  (*VAR_1)(VAR_10, VAR_8, VAR_5);
 }
 if (VAR_7)
  FUNC_6(&VAR_7->lru_lock, VAR_9);
 FUNC_4(VAR_0->pages, VAR_0->nr);
 FUNC_3(VAR_0);
}
