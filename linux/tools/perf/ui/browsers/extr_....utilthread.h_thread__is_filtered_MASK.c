
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int tid; int pid_; } ;
struct TYPE_2__ {scalar_t__ tid_list; scalar_t__ pid_list; scalar_t__ comm_list; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct thread*) ;

__attribute__((used)) static inline bool FUNC_3(struct thread *VAR_1)
{
 if (VAR_0.comm_list &&
     !FUNC_1(VAR_0.comm_list, FUNC_2(VAR_1))) {
  return 1;
 }

 if (VAR_0.pid_list &&
     !FUNC_0(VAR_0.pid_list, VAR_1->pid_)) {
  return 1;
 }

 if (VAR_0.tid_list &&
     !FUNC_0(VAR_0.tid_list, VAR_1->tid)) {
  return 1;
 }

 return 0;
}
