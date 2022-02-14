
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_mem {int operation; scalar_t__ phys_addr; } ;
struct option {int dummy; } ;
struct TYPE_2__ {int record; int supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct option FUNC_0 (char,char*,int*,char*) ;
 struct option FUNC_1 (char,char*,struct perf_mem**,char*,char*,int ) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (char,char*,scalar_t__*,char*) ;
 struct option FUNC_4 (int ,char*,int *,char*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 char** FUNC_5 (int,int) ;
 int FUNC_6 (int,char const**) ;
 int FUNC_7 (char const**) ;
 int FUNC_8 (int,char const**,struct option*,int ,int ) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,char*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_12(int VAR_11, const char **VAR_12, struct perf_mem *VAR_13)
{
 int VAR_14, VAR_15 = 0, VAR_16;
 const char **VAR_17;
 int VAR_18;
 bool VAR_19 = 0, VAR_20 = 0;
 struct option VAR_21[] = {
 FUNC_1('e', "event", &VAR_13, "event",
       "event selector. use 'perf mem record -e list' to list available events",
       VAR_6),
 FUNC_4(0, "ldlat", &VAR_8, "mem-loads latency"),
 FUNC_3('v', "verbose", &VAR_10,
   "be more verbose (show counter open errors, etc)"),
 FUNC_0('U', "all-user", &VAR_19, "collect only user level data"),
 FUNC_0('K', "all-kernel", &VAR_20, "collect only kernel level data"),
 FUNC_2()
 };

 VAR_11 = FUNC_8(VAR_11, VAR_12, VAR_21, VAR_9,
        VAR_2);

 VAR_14 = VAR_11 + 9;
 VAR_17 = FUNC_5(VAR_14 + 1, sizeof(char *));
 if (!VAR_17)
  return -1;

 VAR_17[VAR_15++] = "record";

 if (VAR_13->operation & VAR_0)
  VAR_7[VAR_3].record = 1;

 if (VAR_13->operation & VAR_1)
  VAR_7[VAR_5].record = 1;

 if (VAR_7[VAR_3].record)
  VAR_17[VAR_15++] = "-W";

 VAR_17[VAR_15++] = "-d";

 if (VAR_13->phys_addr)
  VAR_17[VAR_15++] = "--phys-data";

 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
  if (!VAR_7[VAR_16].record)
   continue;

  if (!VAR_7[VAR_16].supported) {
   FUNC_11("failed: event '%s' not supported\n",
          FUNC_9(VAR_16));
   FUNC_7(VAR_17);
   return -1;
  }

  VAR_17[VAR_15++] = "-e";
  VAR_17[VAR_15++] = FUNC_9(VAR_16);
 };

 if (VAR_19)
  VAR_17[VAR_15++] = "--all-user";

 if (VAR_20)
  VAR_17[VAR_15++] = "--all-kernel";

 for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++, VAR_15++)
  VAR_17[VAR_15] = VAR_12[VAR_16];

 if (VAR_10 > 0) {
  FUNC_10("calling: record ");

  while (VAR_17[VAR_16]) {
   FUNC_10("%s ", VAR_17[VAR_16]);
   VAR_16++;
  }
  FUNC_10("\n");
 }

 VAR_18 = FUNC_6(VAR_15, VAR_17);
 FUNC_7(VAR_17);
 return VAR_18;
}
