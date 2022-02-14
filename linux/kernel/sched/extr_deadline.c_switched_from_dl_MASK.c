
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dl_non_contending; scalar_t__ dl_runtime; } ;
struct task_struct {TYPE_1__ dl; } ;
struct TYPE_6__ {scalar_t__ dl_nr_running; } ;
struct rq {TYPE_2__ dl; } ;


 int FUNC_0 (struct rq*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (struct task_struct*) ;

__attribute__((used)) static void FUNC_5(struct rq *VAR_0, struct task_struct *VAR_1)
{
 if (FUNC_4(VAR_1) && VAR_1->dl.dl_runtime)
  FUNC_3(VAR_1);

 if (!FUNC_4(VAR_1)) {






  if (VAR_1->dl.dl_non_contending)
   FUNC_2(&VAR_1->dl, &VAR_0->dl);
  FUNC_1(&VAR_1->dl, &VAR_0->dl);
 }






 if (VAR_1->dl.dl_non_contending)
  VAR_1->dl.dl_non_contending = 0;






 if (!FUNC_4(VAR_1) || VAR_0->dl.dl_nr_running)
  return;

 FUNC_0(VAR_0);
}
