
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_2__* sighand; } ;
struct TYPE_3__ {scalar_t__ sa_handler; int sa_mask; int * sa_restorer; scalar_t__ sa_flags; } ;
struct k_sigaction {TYPE_1__ sa; } ;
struct TYPE_4__ {struct k_sigaction* action; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

void
FUNC_1(struct task_struct *VAR_3, int VAR_4)
{
 int VAR_5;
 struct k_sigaction *VAR_6 = &VAR_3->sighand->action[0];
 for (VAR_5 = VAR_2 ; VAR_5 != 0 ; VAR_5--) {
  if (VAR_4 || VAR_6->sa.sa_handler != VAR_1)
   VAR_6->sa.sa_handler = VAR_0;
  VAR_6->sa.sa_flags = 0;



  FUNC_0(&VAR_6->sa.sa_mask);
  VAR_6++;
 }
}
