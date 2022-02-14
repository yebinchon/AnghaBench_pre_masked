
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct lruvec {int dummy; } ;
struct TYPE_4__ {int lru_lock; } ;
typedef TYPE_1__ pg_data_t ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int,struct page*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct page*,struct lruvec*,int) ;
 int FUNC_6 (struct page*) ;
 struct lruvec* FUNC_7 (struct page*,TYPE_1__*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 TYPE_1__* FUNC_10 (struct page*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct page *VAR_1)
{
 int VAR_2 = -VAR_0;

 FUNC_3(!FUNC_8(VAR_1), VAR_1);
 FUNC_4(FUNC_2(VAR_1), "trying to isolate tail page");

 if (FUNC_1(VAR_1)) {
  pg_data_t *VAR_3 = FUNC_10(VAR_1);
  struct lruvec *VAR_4;

  FUNC_11(&VAR_3->lru_lock);
  VAR_4 = FUNC_7(VAR_1, VAR_3);
  if (FUNC_1(VAR_1)) {
   int VAR_5 = FUNC_9(VAR_1);
   FUNC_6(VAR_1);
   FUNC_0(VAR_1);
   FUNC_5(VAR_1, VAR_4, VAR_5);
   VAR_2 = 0;
  }
  FUNC_12(&VAR_3->lru_lock);
 }
 return VAR_2;
}
