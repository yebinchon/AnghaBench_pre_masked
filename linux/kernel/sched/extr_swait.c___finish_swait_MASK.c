
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swait_queue_head {int dummy; } ;
struct swait_queue {int task_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct swait_queue_head *VAR_1, struct swait_queue *VAR_2)
{
 FUNC_0(VAR_0);
 if (!FUNC_2(&VAR_2->task_list))
  FUNC_1(&VAR_2->task_list);
}
