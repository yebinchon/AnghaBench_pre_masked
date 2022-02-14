
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {unsigned long val; int idx; int trace; } ;
typedef void* pid_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ,void*,unsigned long,char*,size_t) ;
 size_t FUNC_1 (char*,size_t,struct syscall_arg*) ;
 void* FUNC_2 (struct syscall_arg*,int) ;

size_t FUNC_3(char *VAR_1, size_t VAR_2, struct syscall_arg *VAR_3)
{
 unsigned long VAR_4 = VAR_3->val;
 int VAR_5 = FUNC_2(VAR_3, 2);
 pid_t VAR_6;

 if (VAR_5 != VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 VAR_6 = FUNC_2(VAR_3, VAR_3->idx == 3 ? 0 : 1);
 return FUNC_0(VAR_3->trace, VAR_6, VAR_4, VAR_1, VAR_2);
}
