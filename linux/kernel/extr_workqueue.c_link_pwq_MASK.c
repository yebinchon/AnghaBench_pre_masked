
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int pwqs; int work_color; int mutex; } ;
struct pool_workqueue {int pwqs_node; int work_color; struct workqueue_struct* wq; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pool_workqueue*) ;

__attribute__((used)) static void FUNC_4(struct pool_workqueue *VAR_0)
{
 struct workqueue_struct *VAR_1 = VAR_0->wq;

 FUNC_2(&VAR_1->mutex);


 if (!FUNC_1(&VAR_0->pwqs_node))
  return;


 VAR_0->work_color = VAR_1->work_color;


 FUNC_3(VAR_0);


 FUNC_0(&VAR_0->pwqs_node, &VAR_1->pwqs);
}
