
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {TYPE_2__* sighand; TYPE_1__* signal; } ;
struct itimerval {void* it_interval; void* it_value; } ;
struct cpu_itimer {scalar_t__ expires; scalar_t__ incr; } ;
struct TYPE_4__ {int siglock; } ;
struct TYPE_3__ {struct cpu_itimer* it; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct task_struct*,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(struct task_struct *VAR_2, unsigned int VAR_3,
      struct itimerval *const VAR_4)
{
 u64 VAR_5, VAR_6;
 struct cpu_itimer *VAR_7 = &VAR_2->signal->it[VAR_3];

 FUNC_1(&VAR_2->sighand->siglock);

 VAR_5 = VAR_7->expires;
 VAR_6 = VAR_7->incr;
 if (VAR_5) {
  u64 VAR_8, VAR_9[VAR_0];

  FUNC_3(VAR_2, VAR_9);
  VAR_8 = VAR_9[VAR_3];

  if (VAR_5 < VAR_8)

   VAR_5 = VAR_1;
  else
   VAR_5 -= VAR_8;
 }

 FUNC_2(&VAR_2->sighand->siglock);

 VAR_4->it_value = FUNC_0(VAR_5);
 VAR_4->it_interval = FUNC_0(VAR_6);
}
