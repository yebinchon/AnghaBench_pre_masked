
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {size_t pid; int tgid; } ;


 size_t VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct task_struct *VAR_2)
{

 if (!VAR_2->pid)
  return 1;

 if (FUNC_0(!VAR_1 || VAR_2->pid > VAR_0))
  return 0;

 VAR_1[VAR_2->pid] = VAR_2->tgid;
 return 1;
}
