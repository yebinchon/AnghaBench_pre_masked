
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {int val; int mask; int idx; int show_string_prefix; } ;


 int VAR_0 ;
 size_t FUNC_0 (int,char*,size_t,int ) ;

size_t FUNC_1(char *VAR_1, size_t VAR_2, struct syscall_arg *VAR_3)
{
 int VAR_4 = VAR_3->val;

 if (!(VAR_4 & VAR_0))
  VAR_3->mask |= 1 << (VAR_3->idx + 1);

 return FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3->show_string_prefix);
}
