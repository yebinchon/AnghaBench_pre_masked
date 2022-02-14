
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int pid_; int tid; } ;
struct machine {int dummy; } ;


 struct thread* FUNC_0 (struct machine*,int,int) ;
 struct thread* FUNC_1 (struct thread*) ;

struct thread *FUNC_2(struct machine *VAR_0, struct thread *VAR_1)
{
 if (VAR_1->pid_ == VAR_1->tid)
  return FUNC_1(VAR_1);

 if (VAR_1->pid_ == -1)
  return ((void*)0);

 return FUNC_0(VAR_0, VAR_1->pid_, VAR_1->pid_);
}
