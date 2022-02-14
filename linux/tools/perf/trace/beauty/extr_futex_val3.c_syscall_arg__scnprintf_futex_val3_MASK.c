
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {unsigned int val; scalar_t__ show_string_prefix; } ;


 unsigned int VAR_0 ;
 size_t FUNC_0 (char*,size_t,char*,...) ;

__attribute__((used)) static size_t FUNC_1(char *VAR_1, size_t VAR_2, struct syscall_arg *VAR_3)
{
 const char *VAR_4 = "FUTEX_BITSET_";
 unsigned int VAR_5 = VAR_3->val;

 if (VAR_5 == VAR_0)
  return FUNC_0(VAR_1, VAR_2, "%s%s", VAR_3->show_string_prefix ? VAR_4 : "", "MATCH_ANY");

 return FUNC_0(VAR_1, VAR_2, "%#xd", VAR_5);
}
