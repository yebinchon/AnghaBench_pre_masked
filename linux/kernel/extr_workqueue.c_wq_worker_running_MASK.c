
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct worker {int flags; scalar_t__ sleeping; TYPE_1__* pool; } ;
struct task_struct {int dummy; } ;
struct TYPE_2__ {int nr_running; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct worker* FUNC_1 (struct task_struct*) ;

void FUNC_2(struct task_struct *VAR_1)
{
 struct worker *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2->sleeping)
  return;
 if (!(VAR_2->flags & VAR_0))
  FUNC_0(&VAR_2->pool->nr_running);
 VAR_2->sleeping = 0;
}
