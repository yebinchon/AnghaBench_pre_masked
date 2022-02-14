
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_queue_head {int head; int lock; } ;
struct lock_class_key {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct lock_class_key*,char const*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct wait_queue_head *VAR_0, const char *VAR_1, struct lock_class_key *VAR_2)
{
 FUNC_2(&VAR_0->lock);
 FUNC_1(&VAR_0->lock, VAR_2, VAR_1);
 FUNC_0(&VAR_0->head);
}
