
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_queue_head {int lock; } ;
struct wait_queue_entry {int entry; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct wait_queue_head*,struct wait_queue_entry*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void
FUNC_5(struct wait_queue_head *VAR_1, struct wait_queue_entry *VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 VAR_2->flags |= VAR_0;
 FUNC_3(&VAR_1->lock, VAR_4);
 if (FUNC_1(&VAR_2->entry))
  FUNC_0(VAR_1, VAR_2);
 FUNC_2(VAR_3);
 FUNC_4(&VAR_1->lock, VAR_4);
}
