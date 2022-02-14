
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {int val; scalar_t__ show_string_prefix; } ;


 int VAR_0 ;
 size_t FUNC_0 (char*,size_t,char*,char const*,char*) ;
 size_t FUNC_1 (char*,size_t,struct syscall_arg*) ;

__attribute__((used)) static size_t FUNC_2(char *VAR_1, size_t VAR_2,
        struct syscall_arg *VAR_3)
{
 int VAR_4 = VAR_3->val;
 const char *VAR_5 = "AT_FD";

 if (VAR_4 == VAR_0)
  return FUNC_0(VAR_1, VAR_2, "%s%s", VAR_3->show_string_prefix ? VAR_5 : "", "CWD");

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
