
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_attr_details {int verbose; int freq; int event_group; int force; int trace_fields; } ;
struct option {int dummy; } ;


 struct option const FUNC_0 (float,char*,int*,char*) ;
 struct option const FUNC_1 () ;
 struct option const FUNC_2 (char,char*,int *,char*,char*) ;
 int FUNC_3 (int ,struct perf_attr_details*) ;
 int VAR_0 ;
 int FUNC_4 (int,char const**,struct option const*,char const* const*,int ) ;
 int FUNC_5 (char const* const*,struct option const*) ;
 int FUNC_6 (char const* const*,struct option const*,char*) ;

int FUNC_7(int VAR_1, const char **VAR_2)
{
 struct perf_attr_details VAR_3 = { .verbose = 0, };
 const struct option VAR_4[] = {
 FUNC_2('i', "input", &VAR_0, "file", "Input file name"),
 FUNC_0('F', "freq", &VAR_3.freq, "Show the sample frequency"),
 FUNC_0('v', "verbose", &VAR_3.verbose,
      "Show all event attr details"),
 FUNC_0('g', "group", &VAR_3.event_group,
      "Show event group information"),
 FUNC_0('f', "force", &VAR_3.force, "don't complain, do it"),
 FUNC_0(0, "trace-fields", &VAR_3.trace_fields, "Show tracepoint fields"),
 FUNC_1()
 };
 const char * const VAR_5[] = {
  "perf evlist [<options>]",
  ((void*)0)
 };

 VAR_1 = FUNC_4(VAR_1, VAR_2, VAR_4, VAR_5, 0);
 if (VAR_1)
  FUNC_5(VAR_5, VAR_4);

 if (VAR_3.event_group && (VAR_3.verbose || VAR_3.freq)) {
  FUNC_6(VAR_5, VAR_4,
   "--group option is not compatible with other options\n");
 }

 return FUNC_3(VAR_0, &VAR_3);
}
