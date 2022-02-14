
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 struct option const FUNC_0 (char,char*,int*,char*) ;
 struct option const FUNC_1 () ;
 struct option const FUNC_2 (char,char*,int *,char*) ;
 struct option const FUNC_3 (char,char*,int *,char*,char*) ;
 int VAR_0 ;
 int FUNC_4 (int,char const**,struct option const*,char const* const*,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 () ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_2 ;

int FUNC_8(int VAR_3, const char **VAR_4)
{
 bool VAR_5 = 0;
 bool VAR_6 = 0;
 bool VAR_7 = 0;
 const struct option VAR_8[] = {
 FUNC_0('H', "with-hits", &VAR_6, "Show only DSOs with hits"),
 FUNC_3('i', "input", &VAR_0, "file", "input file name"),
 FUNC_0('f', "force", &VAR_7, "don't complain, do it"),
 FUNC_0('k', "kernel", &VAR_5, "Show current kernel build id"),
 FUNC_2('v', "verbose", &VAR_2, "be more verbose"),
 FUNC_1()
 };
 const char * const VAR_9[] = {
  "perf buildid-list [<options>]",
  ((void*)0)
 };

 VAR_3 = FUNC_4(VAR_3, VAR_4, VAR_8, VAR_9, 0);
 FUNC_6();

 if (VAR_5)
  return !(FUNC_7(VAR_1) > 0);

 return FUNC_5(VAR_7, VAR_6);
}
