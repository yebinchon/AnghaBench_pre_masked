
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_2__* sighand; TYPE_1__* signal; } ;
struct TYPE_4__ {int siglock; } ;
struct TYPE_3__ {int stats; } ;


 int FUNC_0 (int ,struct task_struct*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct task_struct *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->sighand->siglock, VAR_1);
 if (!VAR_0->signal->stats)
  goto ret;







 FUNC_0(VAR_0->signal->stats, VAR_0);
ret:
 FUNC_2(&VAR_0->sighand->siglock, VAR_1);
 return;
}
