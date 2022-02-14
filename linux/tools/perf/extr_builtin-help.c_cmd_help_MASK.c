
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;
typedef enum help_format { ____Placeholder_help_format } help_format ;






 struct option FUNC_0 (char,char*,int*,char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (char,char*,int*,char*,int) ;
 int FUNC_3 (char*,int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int,char const**,struct option*,char const* const*,char const**,int ) ;
 int FUNC_7 (int ,int*) ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char const*) ;

int FUNC_12(int VAR_5, const char **VAR_6)
{
 bool VAR_7 = 0;
 enum help_format VAR_8 = 130;
 struct option VAR_9[] = {
 FUNC_0('a', "all", &VAR_7, "print all available commands"),
 FUNC_2('m', "man", &VAR_8, "show man page", 130),
 FUNC_2('w', "web", &VAR_8, "show manual in web browser",
   128),
 FUNC_2('i', "info", &VAR_8, "show info page",
   131),
 FUNC_1(),
 };
 const char * const VAR_10[] = {
  "buildid-cache", "buildid-list", "diff", "evlist", "help", "list",
  "record", "report", "bench", "stat", "timechart", "top", "annotate",
  "script", "sched", "kallsyms", "kmem", "lock", "kvm", "test", "inject", "mem", "data",






 ((void*)0) };
 const char *VAR_11[] = {
  "perf help [--all] [--man|--web|--info] [command]",
  ((void*)0)
 };
 int VAR_12;

 FUNC_5("perf-", &VAR_0, &VAR_1);

 VAR_12 = FUNC_7(VAR_2, &VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_5 = FUNC_6(VAR_5, VAR_6, VAR_9,
   VAR_10, VAR_11, 0);

 if (VAR_7) {
  FUNC_8("\n Usage: %s\n\n", VAR_4);
  FUNC_3("perf commands", &VAR_0, &VAR_1);
  FUNC_8(" %s\n\n", VAR_3);
  return 0;
 }

 if (!VAR_6[0]) {
  FUNC_8("\n usage: %s\n\n", VAR_4);
  FUNC_4();
  FUNC_8("\n %s\n\n", VAR_3);
  return 0;
 }

 switch (VAR_8) {
 case 130:
  VAR_12 = FUNC_11(VAR_6[0]);
  break;
 case 131:
  VAR_12 = FUNC_10(VAR_6[0]);
  break;
 case 128:
  VAR_12 = FUNC_9(VAR_6[0]);
  break;
 case 129:

 default:
  VAR_12 = -1;
  break;
 }

 return VAR_12;
}
