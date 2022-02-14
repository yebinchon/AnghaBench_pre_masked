
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 struct option FUNC_0 (char,char*,int*,char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (int ,char*,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (char**,char*,char const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int,char*,int,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int,char const**,struct option*,char const* const*,int ) ;
 int FUNC_8 (char const*,int,int,int,int) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,int,int,int,int) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,int ,int ,int ,int) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct option*,int ,char*,int ) ;
 int FUNC_17 () ;
 char* FUNC_18 (char const*,char) ;
 scalar_t__ FUNC_19 (char const*,char*) ;
 char* FUNC_20 (char const*) ;
 int VAR_10 ;

int FUNC_21(int VAR_11, const char **VAR_12)
{
 int VAR_13;
 bool VAR_14 = 0;
 bool VAR_15 = 0;
 struct option VAR_16[] = {
  FUNC_0(0, "raw-dump", &VAR_14, "Dump raw events"),
  FUNC_0('d', "desc", &VAR_6,
       "Print extra event descriptions. --no-desc to not print."),
  FUNC_0('v', "long-desc", &VAR_15,
       "Print longer event descriptions."),
  FUNC_0(0, "details", &VAR_7,
       "Print information on the perf event names and expressions used internally by events."),
  FUNC_2(0, "debug", &VAR_10,
        "Enable debugging output"),
  FUNC_1()
 };
 const char * const VAR_17[] = {
  "perf list [<options>] [hw|sw|cache|tracepoint|pmu|sdt|event_glob]",
  ((void*)0)
 };

 FUNC_16(VAR_16, 0, "raw-dump", VAR_0);

 VAR_11 = FUNC_7(VAR_11, VAR_12, VAR_16, VAR_17,
        VAR_1);

 FUNC_17();

 if (!VAR_14 && FUNC_6())
  FUNC_15("\nList of pre-defined events (to be used in -e):\n\n");

 if (VAR_11 == 0) {
  FUNC_8(((void*)0), VAR_14, !VAR_6, VAR_15,
    VAR_7);
  return 0;
 }

 for (VAR_13 = 0; VAR_13 < VAR_11; ++VAR_13) {
  char *VAR_18, *VAR_19;

  if (FUNC_19(VAR_12[VAR_13], "tracepoint") == 0)
   FUNC_14(((void*)0), ((void*)0), VAR_14);
  else if (FUNC_19(VAR_12[VAR_13], "hw") == 0 ||
    FUNC_19(VAR_12[VAR_13], "hardware") == 0)
   FUNC_12(((void*)0), VAR_4,
     VAR_8, VAR_2, VAR_14);
  else if (FUNC_19(VAR_12[VAR_13], "sw") == 0 ||
    FUNC_19(VAR_12[VAR_13], "software") == 0) {
   FUNC_12(((void*)0), VAR_5,
     VAR_9, VAR_3, VAR_14);
   FUNC_13(((void*)0), VAR_14);
  } else if (FUNC_19(VAR_12[VAR_13], "cache") == 0 ||
    FUNC_19(VAR_12[VAR_13], "hwcache") == 0)
   FUNC_9(((void*)0), VAR_14);
  else if (FUNC_19(VAR_12[VAR_13], "pmu") == 0)
   FUNC_10(((void*)0), VAR_14, !VAR_6,
      VAR_15, VAR_7);
  else if (FUNC_19(VAR_12[VAR_13], "sdt") == 0)
   FUNC_11(((void*)0), ((void*)0), VAR_14);
  else if (FUNC_19(VAR_12[VAR_13], "metric") == 0 || FUNC_19(VAR_12[VAR_13], "metrics") == 0)
   FUNC_5(1, 0, ((void*)0), VAR_14, VAR_7);
  else if (FUNC_19(VAR_12[VAR_13], "metricgroup") == 0 || FUNC_19(VAR_12[VAR_13], "metricgroups") == 0)
   FUNC_5(0, 1, ((void*)0), VAR_14, VAR_7);
  else if ((VAR_18 = FUNC_18(VAR_12[VAR_13], ':')) != ((void*)0)) {
   int VAR_20;

   if (VAR_18 == ((void*)0)) {
    FUNC_8(VAR_12[VAR_13], VAR_14, !VAR_6,
       VAR_15,
       VAR_7);
    continue;
   }
   VAR_20 = VAR_18 - VAR_12[VAR_13];
   VAR_19 = FUNC_20(VAR_12[VAR_13]);
   if (VAR_19 == ((void*)0))
    return -1;

   VAR_19[VAR_20] = '\0';
   FUNC_14(VAR_19, VAR_19 + VAR_20 + 1, VAR_14);
   FUNC_11(VAR_19, VAR_19 + VAR_20 + 1, VAR_14);
   FUNC_5(1, 1, VAR_19, VAR_14, VAR_7);
   FUNC_4(VAR_19);
  } else {
   if (FUNC_3(&VAR_19, "*%s*", VAR_12[VAR_13]) < 0) {
    FUNC_15("Critical: Not enough memory! Trying to continue...\n");
    continue;
   }
   FUNC_12(VAR_19, VAR_4,
         VAR_8, VAR_2, VAR_14);
   FUNC_12(VAR_19, VAR_5,
         VAR_9, VAR_3, VAR_14);
   FUNC_13(VAR_19, VAR_14);
   FUNC_9(VAR_19, VAR_14);
   FUNC_10(VAR_19, VAR_14, !VAR_6,
      VAR_15,
      VAR_7);
   FUNC_14(((void*)0), VAR_19, VAR_14);
   FUNC_11(((void*)0), VAR_19, VAR_14);
   FUNC_5(1, 1, VAR_19, VAR_14, VAR_7);
   FUNC_4(VAR_19);
  }
 }
 return 0;
}
