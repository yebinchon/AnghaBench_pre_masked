
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_2__* signal; } ;
struct oom_control {unsigned long chosen_points; struct task_struct* chosen; int totalpages; } ;
struct TYPE_4__ {TYPE_1__* oom_mm; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct oom_control*) ;
 int FUNC_2 (struct oom_control*) ;
 unsigned long FUNC_3 (struct task_struct*,int ) ;
 int FUNC_4 (struct task_struct*,struct oom_control*) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 scalar_t__ FUNC_6 (struct task_struct*) ;
 int FUNC_7 (struct task_struct*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (struct task_struct*) ;

__attribute__((used)) static int FUNC_10(struct task_struct *VAR_2, void *VAR_3)
{
 struct oom_control *VAR_4 = VAR_3;
 unsigned long VAR_5;

 if (FUNC_6(VAR_2))
  goto next;


 if (!FUNC_1(VAR_4) && !FUNC_4(VAR_2, VAR_4))
  goto next;







 if (!FUNC_2(VAR_4) && FUNC_9(VAR_2)) {
  if (FUNC_8(VAR_0, &VAR_2->signal->oom_mm->flags))
   goto next;
  goto abort;
 }





 if (FUNC_5(VAR_2)) {
  VAR_5 = VAR_1;
  goto select;
 }

 VAR_5 = FUNC_3(VAR_2, VAR_4->totalpages);
 if (!VAR_5 || VAR_5 < VAR_4->chosen_points)
  goto next;

select:
 if (VAR_4->chosen)
  FUNC_7(VAR_4->chosen);
 FUNC_0(VAR_2);
 VAR_4->chosen = VAR_2;
 VAR_4->chosen_points = VAR_5;
next:
 return 0;
abort:
 if (VAR_4->chosen)
  FUNC_7(VAR_4->chosen);
 VAR_4->chosen = (void *)-1UL;
 return 1;
}
