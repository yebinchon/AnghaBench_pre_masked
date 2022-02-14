
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int pid_; int tid; scalar_t__ mg; } ;
struct machine {int dummy; } ;
typedef int pid_t ;


 struct thread* FUNC_0 (struct machine*,int,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct machine*) ;
 int FUNC_3 (struct thread*) ;

int FUNC_4(struct thread *VAR_0, struct machine *VAR_1)
{
 pid_t VAR_2 = VAR_0->pid_;

 if (VAR_2 == VAR_0->tid || VAR_2 == -1) {
  VAR_0->mg = FUNC_2(VAR_1);
 } else {
  struct thread *VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_2);
  if (VAR_3) {
   VAR_0->mg = FUNC_1(VAR_3->mg);
   FUNC_3(VAR_3);
  }
 }

 return VAR_0->mg ? 0 : -1;
}
