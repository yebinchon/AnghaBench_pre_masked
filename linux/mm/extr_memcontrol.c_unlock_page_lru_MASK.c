
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
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,struct page*) ;
 int FUNC_3 (struct page*,struct lruvec*,int ) ;
 struct lruvec* FUNC_4 (struct page*,TYPE_1__*) ;
 int FUNC_5 (struct page*) ;
 TYPE_1__* FUNC_6 (struct page*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct page *VAR_0, int VAR_1)
{
 pg_data_t *VAR_2 = FUNC_6(VAR_0);

 if (VAR_1) {
  struct lruvec *VAR_3;

  VAR_3 = FUNC_4(VAR_0, VAR_2);
  FUNC_2(FUNC_0(VAR_0), VAR_0);
  FUNC_1(VAR_0);
  FUNC_3(VAR_0, VAR_3, FUNC_5(VAR_0));
 }
 FUNC_7(&VAR_2->lru_lock);
}
