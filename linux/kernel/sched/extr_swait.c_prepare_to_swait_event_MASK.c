
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swait_queue_head {int lock; } ;
struct swait_queue {int task_list; } ;


 long VAR_0 ;
 int FUNC_0 (struct swait_queue_head*,struct swait_queue*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int ) ;

long FUNC_6(struct swait_queue_head *VAR_2, struct swait_queue *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 long VAR_6 = 0;

 FUNC_2(&VAR_2->lock, VAR_5);
 if (FUNC_5(VAR_4, VAR_1)) {




  FUNC_1(&VAR_3->task_list);
  VAR_6 = -VAR_0;
 } else {
  FUNC_0(VAR_2, VAR_3);
  FUNC_4(VAR_4);
 }
 FUNC_3(&VAR_2->lock, VAR_5);

 return VAR_6;
}
