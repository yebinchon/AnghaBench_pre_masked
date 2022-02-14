
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_2__* sighand; TYPE_1__* signal; } ;
struct itimerval {int it_interval; int it_value; } ;
struct hrtimer {int dummy; } ;
typedef void* ktime_t ;
struct TYPE_4__ {int siglock; } ;
struct TYPE_3__ {void* it_real_incr; struct hrtimer real_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 struct task_struct* VAR_4 ;
 int FUNC_0 (struct hrtimer*) ;
 int FUNC_1 (struct hrtimer*,void*,int ) ;
 int FUNC_2 (struct hrtimer*) ;
 int FUNC_3 (struct hrtimer*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct task_struct*,int ,struct itimerval*,struct itimerval*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int const,struct itimerval*,int ) ;

int FUNC_11(int VAR_5, struct itimerval *VAR_6, struct itimerval *VAR_7)
{
 struct task_struct *VAR_8 = VAR_4;
 struct hrtimer *VAR_9;
 ktime_t VAR_10;




 if (!FUNC_9(&VAR_6->it_value) ||
     !FUNC_9(&VAR_6->it_interval))
  return -VAR_2;

 switch (VAR_5) {
 case 129:
again:
  FUNC_6(&VAR_8->sighand->siglock);
  VAR_9 = &VAR_8->signal->real_timer;
  if (VAR_7) {
   VAR_7->it_value = FUNC_3(VAR_9);
   VAR_7->it_interval
    = FUNC_4(VAR_8->signal->it_real_incr);
  }

  if (FUNC_2(VAR_9) < 0) {
   FUNC_7(&VAR_8->sighand->siglock);
   FUNC_0(VAR_9);
   goto again;
  }
  VAR_10 = FUNC_8(VAR_6->it_value);
  if (VAR_10 != 0) {
   VAR_8->signal->it_real_incr =
    FUNC_8(VAR_6->it_interval);
   FUNC_1(VAR_9, VAR_10, VAR_3);
  } else
   VAR_8->signal->it_real_incr = 0;

  FUNC_10(129, VAR_6, 0);
  FUNC_7(&VAR_8->sighand->siglock);
  break;
 case 128:
  FUNC_5(VAR_8, VAR_1, VAR_6, VAR_7);
  break;
 case 130:
  FUNC_5(VAR_8, VAR_0, VAR_6, VAR_7);
  break;
 default:
  return -VAR_2;
 }
 return 0;
}
