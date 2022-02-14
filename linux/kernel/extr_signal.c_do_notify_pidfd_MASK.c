
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ exit_state; } ;
struct pid {int wait_pidfd; } ;


 int FUNC_0 (int) ;
 struct pid* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct task_struct *VAR_0)
{
 struct pid *VAR_1;

 FUNC_0(VAR_0->exit_state == 0);
 VAR_1 = FUNC_1(VAR_0);
 FUNC_2(&VAR_1->wait_pidfd);
}
