
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int child_callback_user; int (* child_callback ) (int ) ;} ;
struct TYPE_6__ {TYPE_1__ fork; } ;
struct TYPE_7__ {scalar_t__ fork_result; TYPE_2__ request; } ;
typedef TYPE_3__ ptrace_wrap_instance ;
typedef scalar_t__ pid_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(ptrace_wrap_instance *VAR_0) {
 pid_t VAR_1 = FUNC_0();
 if (VAR_1 == 0) {
  VAR_0->request.fork.child_callback (VAR_0->request.fork.child_callback_user);
 } else {
  VAR_0->fork_result = VAR_1;
 }
}
