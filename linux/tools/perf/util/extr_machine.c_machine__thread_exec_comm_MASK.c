
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct machine {scalar_t__ comm_exec; } ;
struct comm {int dummy; } ;


 struct comm* FUNC_0 (struct thread*) ;
 struct comm* FUNC_1 (struct thread*) ;

struct comm *FUNC_2(struct machine *VAR_0,
           struct thread *VAR_1)
{
 if (VAR_0->comm_exec)
  return FUNC_1(VAR_1);
 else
  return FUNC_0(VAR_1);
}
