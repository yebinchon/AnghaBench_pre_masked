
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {int show_string_prefix; int val; } ;


 size_t FUNC_0 (int ,char*,size_t,int ) ;

__attribute__((used)) static size_t FUNC_1(char *VAR_0, size_t VAR_1, struct syscall_arg *VAR_2)
{
 return FUNC_0(VAR_2->val, VAR_0, VAR_1, VAR_2->show_string_prefix);
}
