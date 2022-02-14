
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct task_struct {TYPE_1__* sighand; } ;
struct TYPE_2__ {int siglock; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct task_struct*,int ,unsigned long*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct task_struct *VAR_2, unsigned long VAR_3)
{
 u64 VAR_4 = VAR_3 * VAR_1;

 FUNC_1(&VAR_2->sighand->siglock);
 FUNC_0(VAR_2, VAR_0, &VAR_4, ((void*)0));
 FUNC_2(&VAR_2->sighand->siglock);
}
