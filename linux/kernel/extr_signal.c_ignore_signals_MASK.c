
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {TYPE_3__* sighand; } ;
struct TYPE_6__ {TYPE_2__* action; } ;
struct TYPE_4__ {int sa_handler; } ;
struct TYPE_5__ {TYPE_1__ sa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*) ;

void FUNC_1(struct task_struct *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
  VAR_2->sighand->action[VAR_3].sa.sa_handler = VAR_0;

 FUNC_0(VAR_2);
}
