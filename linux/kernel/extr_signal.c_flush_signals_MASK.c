
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_2__* sighand; TYPE_1__* signal; int pending; } ;
struct TYPE_4__ {int siglock; } ;
struct TYPE_3__ {int shared_pending; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct task_struct *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_1->sighand->siglock, VAR_2);
 FUNC_0(VAR_1, VAR_0);
 FUNC_1(&VAR_1->pending);
 FUNC_1(&VAR_1->signal->shared_pending);
 FUNC_3(&VAR_1->sighand->siglock, VAR_2);
}
