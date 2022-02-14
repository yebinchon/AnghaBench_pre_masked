
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_exit_args {int syscall_nr; } ;
typedef int exit_args ;


 int FUNC_0 (struct syscall_exit_args*,int *,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct syscall_exit_args*,int,struct syscall_exit_args*) ;
 int VAR_1 ;

int FUNC_4(struct syscall_exit_args *VAR_2)
{
 struct syscall_exit_args VAR_3;

 if (FUNC_2(&VAR_0, FUNC_1()))
  return 0;

 FUNC_3(&VAR_3, sizeof(VAR_3), VAR_2);





 FUNC_0(VAR_2, &VAR_1, VAR_3.syscall_nr);



 return 0;
}
