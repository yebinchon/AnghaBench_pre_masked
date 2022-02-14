
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 unsigned int VAR_0 ;
 struct option const FUNC_1 (char,char*,int *,char*) ;
 struct option const FUNC_2 () ;
 struct option const FUNC_3 (char,char*,int *,char*) ;
 struct option const FUNC_4 (struct option const*) ;
 struct option const FUNC_5 (char,char*,int *,char*,char*) ;
 int VAR_1 ;
 int FUNC_6 (int,char const**) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char const**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (int,char const**,struct option const*,char const* const*,int ) ;
 int FUNC_10 (int,char const**,struct option const*,char const* const*,char const**,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*,char*,int) ;
 int * VAR_10 ;
 int FUNC_13 (char const**,struct option const*) ;
 int VAR_11 ;

int FUNC_14(int VAR_12, const char **VAR_13)
{
 const struct option VAR_14[] = {
 FUNC_5('i', "input", &VAR_6, "file", "input file name"),
 FUNC_3('v', "verbose", &VAR_11, "be more verbose (show symbol address, etc)"),
 FUNC_1('D', "dump-raw-trace", &VAR_2, "dump raw trace in ASCII"),
 FUNC_1('f', "force", &VAR_3, "don't complain, do it"),
 FUNC_2()
 };

 const struct option VAR_15[] = {
 FUNC_1('t', "threads", &VAR_5,
      "dump thread list in perf.data"),
 FUNC_1('m', "map", &VAR_4,
      "map of lock instances (address:name table)"),
 FUNC_4(VAR_14)
 };

 const struct option VAR_16[] = {
 FUNC_5('k', "key", &VAR_9, "acquired",
      "key for sorting (acquired / contended / avg_wait / wait_total / wait_max / wait_min)"),

 FUNC_4(VAR_14)
 };

 const char * const VAR_17[] = {
  "perf lock info [<options>]",
  ((void*)0)
 };
 const char *const VAR_18[] = { "record", "report", "script",
       "info", ((void*)0) };
 const char *VAR_19[] = {
  ((void*)0),
  ((void*)0)
 };
 const char * const VAR_20[] = {
  "perf lock report [<options>]",
  ((void*)0)
 };
 unsigned int VAR_21;
 int VAR_22 = 0;

 for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++)
  FUNC_0(VAR_7 + VAR_21);

 VAR_12 = FUNC_10(VAR_12, VAR_13, VAR_14, VAR_18,
     VAR_19, VAR_1);
 if (!VAR_12)
  FUNC_13(VAR_19, VAR_14);

 if (!FUNC_12(VAR_13[0], "rec", 3)) {
  return FUNC_6(VAR_12, VAR_13);
 } else if (!FUNC_12(VAR_13[0], "report", 6)) {
  VAR_10 = &VAR_8;
  if (VAR_12) {
   VAR_12 = FUNC_9(VAR_12, VAR_13,
          VAR_16, VAR_20, 0);
   if (VAR_12)
    FUNC_13(VAR_20, VAR_16);
  }
  VAR_22 = FUNC_7(0);
 } else if (!FUNC_11(VAR_13[0], "script")) {

  return FUNC_8(VAR_12, VAR_13);
 } else if (!FUNC_11(VAR_13[0], "info")) {
  if (VAR_12) {
   VAR_12 = FUNC_9(VAR_12, VAR_13,
          VAR_15, VAR_17, 0);
   if (VAR_12)
    FUNC_13(VAR_17, VAR_15);
  }

  VAR_10 = &VAR_8;
  VAR_22 = FUNC_7(1);
 } else {
  FUNC_13(VAR_19, VAR_14);
 }

 return VAR_22;
}
