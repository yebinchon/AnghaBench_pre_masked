
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct workqueue_struct {TYPE_1__* rescuer; int maydays; } ;
struct work_struct {int dummy; } ;
struct pool_workqueue {int mayday_node; struct workqueue_struct* wq; } ;
struct TYPE_2__ {int task; } ;


 int FUNC_0 (struct pool_workqueue*) ;
 struct pool_workqueue* FUNC_1 (struct work_struct*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct work_struct *VAR_1)
{
 struct pool_workqueue *VAR_2 = FUNC_1(VAR_1);
 struct workqueue_struct *VAR_3 = VAR_2->wq;

 FUNC_4(&VAR_0);

 if (!VAR_3->rescuer)
  return;


 if (FUNC_3(&VAR_2->mayday_node)) {





  FUNC_0(VAR_2);
  FUNC_2(&VAR_2->mayday_node, &VAR_3->maydays);
  FUNC_5(VAR_3->rescuer->task);
 }
}
