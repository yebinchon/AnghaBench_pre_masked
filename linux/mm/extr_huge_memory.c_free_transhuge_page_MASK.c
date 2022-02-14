
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct deferred_split {int split_queue_lock; int split_queue_len; } ;


 int FUNC_0 (struct page*) ;
 struct deferred_split* FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct page *VAR_0)
{
 struct deferred_split *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 FUNC_5(&VAR_1->split_queue_lock, VAR_2);
 if (!FUNC_3(FUNC_4(VAR_0))) {
  VAR_1->split_queue_len--;
  FUNC_2(FUNC_4(VAR_0));
 }
 FUNC_6(&VAR_1->split_queue_lock, VAR_2);
 FUNC_0(VAR_0);
}
