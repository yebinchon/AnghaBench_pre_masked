
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {int dummy; } ;
struct intlist {int dummy; } ;
struct TYPE_2__ {int priv_size; int sort_by_name; int try_vmlinux_path; } ;


 struct option const FUNC_0 (float,char*,int *,char*) ;
 struct option const FUNC_1 () ;
 struct option const FUNC_2 (char,char*,int *,char*) ;
 struct option const FUNC_3 (char,char*,char const**,char*,char*) ;
 int FUNC_4 (int,char const**,struct intlist*) ;
 int VAR_0 ;
 int FUNC_5 () ;
 struct intlist* FUNC_6 (char const*) ;
 int FUNC_7 (int,char const**,struct option const*,char const* const*,char const**,int ) ;
 int FUNC_8 (int,char const**) ;
 int FUNC_9 () ;
 int FUNC_10 (char const*,char*) ;
 scalar_t__ FUNC_11 (int *) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

int FUNC_12(int VAR_3, const char **VAR_4)
{
 const char *VAR_5[] = {
 "perf test [<options>] [{list <test-name-fragment>|[<test-name-fragments>|<test-numbers>]}]",
 ((void*)0),
 };
 const char *VAR_6 = ((void*)0);
 const struct option VAR_7[] = {
 FUNC_3('s', "skip", &VAR_6, "tests", "tests to skip"),
 FUNC_2('v', "verbose", &VAR_2,
      "be more verbose (show symbol address, etc)"),
 FUNC_0('F', "dont-fork", &VAR_0,
      "Do not fork for testcase"),
 FUNC_1()
 };
 const char * const VAR_8[] = { "list", ((void*)0) };
 struct intlist *VAR_9 = ((void*)0);
        int VAR_10 = FUNC_5();

        if (VAR_10 < 0)
                return VAR_10;

 VAR_3 = FUNC_7(VAR_3, VAR_4, VAR_7, VAR_8, VAR_5, 0);
 if (VAR_3 >= 1 && !FUNC_10(VAR_4[0], "list"))
  return FUNC_8(VAR_3 - 1, VAR_4 + 1);

 VAR_1.priv_size = sizeof(int);
 VAR_1.sort_by_name = 1;
 VAR_1.try_vmlinux_path = 1;

 if (FUNC_11(((void*)0)) < 0)
  return -1;

 if (VAR_6 != ((void*)0))
  VAR_9 = FUNC_6(VAR_6);




 FUNC_9();

 return FUNC_4(VAR_3, VAR_4, VAR_9);
}
