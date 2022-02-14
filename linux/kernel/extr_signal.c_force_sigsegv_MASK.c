
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {TYPE_3__* sighand; } ;
struct TYPE_6__ {int siglock; TYPE_2__* action; } ;
struct TYPE_4__ {int sa_handler; } ;
struct TYPE_5__ {TYPE_1__ sa; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(int VAR_3)
{
 struct task_struct *VAR_4 = VAR_2;

 if (VAR_3 == VAR_0) {
  unsigned long VAR_5;
  FUNC_1(&VAR_4->sighand->siglock, VAR_5);
  VAR_4->sighand->action[VAR_3 - 1].sa.sa_handler = VAR_1;
  FUNC_2(&VAR_4->sighand->siglock, VAR_5);
 }
 FUNC_0(VAR_0);
}
