
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct syscall_enter_args {int dummy; } ;
struct syscall {int dummy; } ;
struct TYPE_2__ {int syscall_nr; } ;
struct augmented_args_payload {TYPE_1__ args; } ;


 struct augmented_args_payload* FUNC_0 () ;
 int FUNC_1 (struct syscall_enter_args*,int *,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,int,struct syscall_enter_args*) ;
 int VAR_1 ;

int FUNC_5(struct syscall_enter_args *VAR_2)
{
 struct augmented_args_payload *VAR_3;
 unsigned int VAR_4 = sizeof(VAR_3->args);
 struct syscall *VAR_5;

 if (FUNC_3(&VAR_0, FUNC_2()))
  return 0;

 VAR_3 = FUNC_0();
 if (VAR_3 == ((void*)0))
  return 1;

 FUNC_4(&VAR_3->args, sizeof(VAR_3->args), VAR_2);






 FUNC_1(VAR_2, &VAR_1, VAR_3->args.syscall_nr);


 return 0;
}
