
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ deadline; } ;
struct task_struct {TYPE_2__ dl; } ;
struct rq {TYPE_1__* curr; } ;
struct TYPE_6__ {scalar_t__ deadline; } ;
struct TYPE_4__ {TYPE_3__ dl; } ;


 int FUNC_0 (struct rq*,struct task_struct*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (struct rq*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct rq *VAR_0, struct task_struct *VAR_1,
      int VAR_2)
{
 if (FUNC_1(&VAR_1->dl, &VAR_0->curr->dl)) {
  FUNC_2(VAR_0);
  return;
 }
}
