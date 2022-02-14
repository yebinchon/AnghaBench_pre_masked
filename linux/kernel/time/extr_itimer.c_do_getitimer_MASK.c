
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_1__* sighand; TYPE_2__* signal; } ;
struct itimerval {int it_interval; int it_value; } ;
struct TYPE_4__ {int it_real_incr; int real_timer; } ;
struct TYPE_3__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 struct task_struct* VAR_3 ;
 int FUNC_0 (struct task_struct*,int ,struct itimerval*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(int VAR_4, struct itimerval *VAR_5)
{
 struct task_struct *VAR_6 = VAR_3;

 switch (VAR_4) {
 case 129:
  FUNC_3(&VAR_6->sighand->siglock);
  VAR_5->it_value = FUNC_1(&VAR_6->signal->real_timer);
  VAR_5->it_interval =
   FUNC_2(VAR_6->signal->it_real_incr);
  FUNC_4(&VAR_6->sighand->siglock);
  break;
 case 128:
  FUNC_0(VAR_6, VAR_1, VAR_5);
  break;
 case 130:
  FUNC_0(VAR_6, VAR_0, VAR_5);
  break;
 default:
  return(-VAR_2);
 }
 return 0;
}
