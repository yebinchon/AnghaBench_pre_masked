
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int jobctl; TYPE_1__* sighand; int state; } ;
struct TYPE_2__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;

__attribute__((used)) static bool FUNC_4(struct task_struct *VAR_2)
{
 bool VAR_3 = 0;


 if (VAR_2->jobctl & VAR_0)
  return VAR_3;

 FUNC_1(&VAR_2->sighand->siglock);
 if (FUNC_3(VAR_2) && !FUNC_0(VAR_2)) {
  VAR_2->state = VAR_1;
  VAR_3 = 1;
 }
 FUNC_2(&VAR_2->sighand->siglock);

 return VAR_3;
}
