
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {int val; int show_string_prefix; int parm; } ;


 size_t FUNC_0 (int ,char*,size_t,char*,int ,int ) ;

size_t FUNC_1(char *VAR_0, size_t VAR_1,
     struct syscall_arg *VAR_2)
{
 return FUNC_0(VAR_2->parm, VAR_0, VAR_1, "%d", VAR_2->show_string_prefix, VAR_2->val);
}
