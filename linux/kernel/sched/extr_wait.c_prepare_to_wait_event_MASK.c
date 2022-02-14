
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_queue_head {int lock; } ;
struct wait_queue_entry {int flags; int entry; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wait_queue_head*,struct wait_queue_entry*) ;
 int FUNC_1 (struct wait_queue_head*,struct wait_queue_entry*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

long FUNC_8(struct wait_queue_head *VAR_3, struct wait_queue_entry *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 long VAR_7 = 0;

 FUNC_6(&VAR_3->lock, VAR_6);
 if (FUNC_5(VAR_5, VAR_2)) {
  FUNC_2(&VAR_4->entry);
  VAR_7 = -VAR_0;
 } else {
  if (FUNC_3(&VAR_4->entry)) {
   if (VAR_4->flags & VAR_1)
    FUNC_1(VAR_3, VAR_4);
   else
    FUNC_0(VAR_3, VAR_4);
  }
  FUNC_4(VAR_5);
 }
 FUNC_7(&VAR_3->lock, VAR_6);

 return VAR_7;
}
