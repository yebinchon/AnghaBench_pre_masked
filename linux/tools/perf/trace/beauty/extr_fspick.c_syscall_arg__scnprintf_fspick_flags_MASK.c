
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {unsigned long val; int show_string_prefix; } ;


 size_t FUNC_0 (unsigned long,char*,size_t,int ) ;

size_t FUNC_1(char *VAR_0, size_t VAR_1, struct syscall_arg *VAR_2)
{
 unsigned long VAR_3 = VAR_2->val;

 return FUNC_0(VAR_3, VAR_0, VAR_1, VAR_2->show_string_prefix);
}
