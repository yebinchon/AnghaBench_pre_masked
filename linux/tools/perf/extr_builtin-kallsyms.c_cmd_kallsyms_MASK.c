
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {int dummy; } ;
struct TYPE_2__ {int sort_by_name; int * vmlinux_name; int try_vmlinux_path; } ;


 struct option const FUNC_0 () ;
 struct option const FUNC_1 (char,char*,int *,char*) ;
 int FUNC_2 (int,char const**) ;
 int FUNC_3 (int,char const**,struct option const*,char const* const*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_5 (char const* const*,struct option const*) ;
 int VAR_1 ;

int FUNC_6(int VAR_2, const char **VAR_3)
{
 const struct option VAR_4[] = {
 FUNC_1('v', "verbose", &VAR_1, "be more verbose (show counter open errors, etc)"),
 FUNC_0()
 };
 const char * const VAR_5[] = {
  "perf kallsyms [<options>] symbol_name",
  ((void*)0)
 };

 VAR_2 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, 0);
 if (VAR_2 < 1)
  FUNC_5(VAR_5, VAR_4);

 VAR_0.sort_by_name = 1;
 VAR_0.try_vmlinux_path = (VAR_0.vmlinux_name == ((void*)0));
 if (FUNC_4(((void*)0)) < 0)
  return -1;

 return FUNC_2(VAR_2, VAR_3);
}
