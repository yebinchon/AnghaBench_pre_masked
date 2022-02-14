
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (char*,size_t,struct syscall_arg*) ;
 size_t FUNC_1 (char*,size_t,struct syscall_arg*) ;
 int FUNC_2 (struct syscall_arg*,int ) ;

size_t FUNC_3(char *VAR_1, size_t VAR_2, struct syscall_arg *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_3, 0);

 if (VAR_4 == VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3);

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
