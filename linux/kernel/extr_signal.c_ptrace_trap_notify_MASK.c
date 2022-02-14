
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int ptrace; int jobctl; TYPE_1__* sighand; } ;
struct TYPE_2__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct task_struct*,int) ;
 int FUNC_3 (struct task_struct*,int ) ;

__attribute__((used)) static void FUNC_4(struct task_struct *VAR_3)
{
 FUNC_0(!(VAR_3->ptrace & VAR_2));
 FUNC_1(&VAR_3->sighand->siglock);

 FUNC_3(VAR_3, VAR_1);
 FUNC_2(VAR_3, VAR_3->jobctl & VAR_0);
}
