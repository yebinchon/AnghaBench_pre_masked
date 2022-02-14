
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inactive_timer; } ;
struct task_struct {int nr_cpus_allowed; TYPE_1__ dl; } ;
struct TYPE_4__ {scalar_t__ overloaded; } ;
struct rq {struct task_struct* curr; TYPE_2__ dl; } ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (struct rq*,struct task_struct*,int ) ;
 int FUNC_2 (struct rq*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct rq*) ;
 int FUNC_7 (struct task_struct*) ;

__attribute__((used)) static void FUNC_8(struct rq *VAR_0, struct task_struct *VAR_1)
{
 if (FUNC_4(&VAR_1->dl.inactive_timer) == 1)
  FUNC_5(VAR_1);


 if (!FUNC_7(VAR_1)) {
  FUNC_0(&VAR_1->dl, &VAR_0->dl);

  return;
 }

 if (VAR_0->curr != VAR_1) {




  if (FUNC_3(VAR_0->curr))
   FUNC_1(VAR_0, VAR_1, 0);
  else
   FUNC_6(VAR_0);
 }
}
