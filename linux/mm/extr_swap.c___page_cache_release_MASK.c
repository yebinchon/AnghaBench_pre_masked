
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct lruvec {int dummy; } ;
struct TYPE_4__ {int lru_lock; } ;
typedef TYPE_1__ pg_data_t ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (int,struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,struct lruvec*,int ) ;
 struct lruvec* FUNC_5 (struct page*,TYPE_1__*) ;
 int FUNC_6 (struct page*) ;
 TYPE_1__* FUNC_7 (struct page*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct page *VAR_0)
{
 if (FUNC_0(VAR_0)) {
  pg_data_t *VAR_1 = FUNC_7(VAR_0);
  struct lruvec *VAR_2;
  unsigned long VAR_3;

  FUNC_8(&VAR_1->lru_lock, VAR_3);
  VAR_2 = FUNC_5(VAR_0, VAR_1);
  FUNC_1(!FUNC_0(VAR_0), VAR_0);
  FUNC_2(VAR_0);
  FUNC_4(VAR_0, VAR_2, FUNC_6(VAR_0));
  FUNC_9(&VAR_1->lru_lock, VAR_3);
 }
 FUNC_3(VAR_0);
}
