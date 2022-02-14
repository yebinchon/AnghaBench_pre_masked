
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_queue_head {int lock; } ;
struct wait_queue_entry {int dummy; } ;


 int FUNC_0 (struct wait_queue_head*,struct wait_queue_entry*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct wait_queue_head *VAR_0, struct wait_queue_entry *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->lock, VAR_2);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_2);
}
