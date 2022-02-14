
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {int show_string_prefix; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,char*,size_t,int ) ;
 size_t FUNC_1 (char*,size_t,struct syscall_arg*) ;
 int FUNC_2 (struct syscall_arg*,int ) ;

size_t FUNC_3(char *VAR_2, size_t VAR_3, struct syscall_arg *VAR_4)
{
 int VAR_5 = FUNC_2(VAR_4, 0);

 if (VAR_5 == VAR_0 || VAR_5 == VAR_1)
  return FUNC_0(VAR_4->val, VAR_2, VAR_3, VAR_4->show_string_prefix);

 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
