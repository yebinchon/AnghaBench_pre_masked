
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int * pid_links; } ;
struct pid {int * tasks; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 int VAR_0 ;
 int FUNC_0 (struct pid*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct pid** FUNC_3 (struct task_struct*,int) ;

__attribute__((used)) static void FUNC_4(struct task_struct *VAR_1, enum pid_type VAR_2,
   struct pid *VAR_3)
{
 struct pid **VAR_4 = FUNC_3(VAR_1, VAR_2);
 struct pid *VAR_5;
 int VAR_6;

 VAR_5 = *VAR_4;

 FUNC_1(&VAR_1->pid_links[VAR_2]);
 *VAR_4 = VAR_3;

 for (VAR_6 = VAR_0; --VAR_6 >= 0; )
  if (!FUNC_2(&VAR_5->tasks[VAR_6]))
   return;

 FUNC_0(VAR_5);
}
