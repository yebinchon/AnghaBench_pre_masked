
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {unsigned long val; int mask; int show_string_prefix; } ;


 unsigned long VAR_0 ;
 size_t FUNC_0 (unsigned long,char*,size_t,int ) ;

size_t FUNC_1(char *VAR_1, size_t VAR_2, struct syscall_arg *VAR_3)
{
 unsigned long VAR_4 = VAR_3->val;

 if (VAR_4 != VAR_0)
  VAR_3->mask |= (1 << 3) | (1 << 4);

 return FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3->show_string_prefix);
}
