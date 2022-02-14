
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swait_queue_head {int task_list; } ;
struct swait_queue {int task_list; int task; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct swait_queue_head *VAR_1, struct swait_queue *VAR_2)
{
 VAR_2->task = VAR_0;
 if (FUNC_1(&VAR_2->task_list))
  FUNC_0(&VAR_2->task_list, &VAR_1->task_list);
}
