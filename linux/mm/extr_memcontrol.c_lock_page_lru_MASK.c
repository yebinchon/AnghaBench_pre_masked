
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
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,struct lruvec*,int ) ;
 struct lruvec* FUNC_3 (struct page*,TYPE_1__*) ;
 int FUNC_4 (struct page*) ;
 TYPE_1__* FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct page *VAR_0, int *VAR_1)
{
 pg_data_t *VAR_2 = FUNC_5(VAR_0);

 FUNC_6(&VAR_2->lru_lock);
 if (FUNC_1(VAR_0)) {
  struct lruvec *VAR_3;

  VAR_3 = FUNC_3(VAR_0, VAR_2);
  FUNC_0(VAR_0);
  FUNC_2(VAR_0, VAR_3, FUNC_4(VAR_0));
  *VAR_1 = 1;
 } else
  *VAR_1 = 0;
}
