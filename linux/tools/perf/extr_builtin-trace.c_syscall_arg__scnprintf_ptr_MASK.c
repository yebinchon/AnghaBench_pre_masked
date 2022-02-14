
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {scalar_t__ val; } ;


 size_t FUNC_0 (char*,size_t,char*) ;
 size_t FUNC_1 (char*,size_t,struct syscall_arg*) ;

size_t FUNC_2(char *VAR_0, size_t VAR_1, struct syscall_arg *VAR_2)
{
 if (VAR_2->val == 0)
  return FUNC_0(VAR_0, VAR_1, "NULL");
 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
