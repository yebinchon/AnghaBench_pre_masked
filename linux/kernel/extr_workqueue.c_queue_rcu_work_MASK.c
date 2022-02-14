
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct work_struct {int dummy; } ;
struct rcu_work {int rcu; struct workqueue_struct* wq; struct work_struct work; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct work_struct*) ;

bool FUNC_3(struct workqueue_struct *VAR_2, struct rcu_work *VAR_3)
{
 struct work_struct *VAR_4 = &VAR_3->work;

 if (!FUNC_1(VAR_0, FUNC_2(VAR_4))) {
  VAR_3->wq = VAR_2;
  FUNC_0(&VAR_3->rcu, VAR_1);
  return 1;
 }

 return 0;
}
