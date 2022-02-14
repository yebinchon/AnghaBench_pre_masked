
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {unsigned long val; int mask; int show_string_prefix; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 size_t FUNC_0 (unsigned long,char*,size_t,int ) ;

size_t FUNC_1(char *VAR_4, size_t VAR_5, struct syscall_arg *VAR_6)
{
 unsigned long VAR_7 = VAR_6->val;
 enum syscall_clone_args {
  SCC_FLAGS = (1 << 0),
  SCC_CHILD_STACK = (1 << 1),
  SCC_PARENT_TIDPTR = (1 << 2),
  SCC_CHILD_TIDPTR = (1 << 3),
  SCC_TLS = (1 << 4),
 };
 if (!(VAR_7 & VAR_2))
  VAR_6->mask |= SCC_PARENT_TIDPTR;

 if (!(VAR_7 & (VAR_1 | VAR_0)))
  VAR_6->mask |= SCC_CHILD_TIDPTR;

 if (!(VAR_7 & VAR_3))
  VAR_6->mask |= SCC_TLS;

 return FUNC_0(VAR_7, VAR_4, VAR_5, VAR_6->show_string_prefix);
}
