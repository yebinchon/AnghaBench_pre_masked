
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {int val; int show_string_prefix; int parm; } ;


 size_t FUNC_0 (int ,char*,size_t,char const*,int ,int ) ;

__attribute__((used)) static size_t FUNC_1(char *VAR_0, size_t VAR_1,
      const char *VAR_2,
             struct syscall_arg *VAR_3)
{
 return FUNC_0(VAR_3->parm, VAR_0, VAR_1, VAR_2, VAR_3->show_string_prefix, VAR_3->val);
}
