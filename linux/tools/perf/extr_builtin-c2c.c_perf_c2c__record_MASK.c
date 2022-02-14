
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {int dummy; } ;
struct TYPE_2__ {int record; int name; int supported; } ;


 struct option FUNC_0 (char,char*,int*,char*) ;
 struct option FUNC_1 (char,char*,int*,char*,char*,int ) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (int ) ;
 struct option FUNC_4 (char,char*,int *,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 char** FUNC_5 (int,int) ;
 int FUNC_6 (int,char const**) ;
 int FUNC_7 (char const**) ;
 int FUNC_8 (int,char const**,struct option*,int ,int ) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_9 () ;
 int VAR_7 ;
 char* FUNC_10 (int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,...) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_13(int VAR_10, const char **VAR_11)
{
 int VAR_12, VAR_13 = 0, VAR_14;
 const char **VAR_15;
 int VAR_16;
 bool VAR_17 = 0, VAR_18 = 0;
 bool VAR_19 = 0;
 struct option VAR_20[] = {
 FUNC_1('e', "event", &VAR_19, "event",
       "event selector. Use 'perf mem record -e list' to list available events",
       VAR_5),
 FUNC_0('u', "all-user", &VAR_17, "collect only user level data"),
 FUNC_0('k', "all-kernel", &VAR_18, "collect only kernel level data"),
 FUNC_4('l', "ldlat", &VAR_7, "setup mem-loads latency"),
 FUNC_3(VAR_4),
 FUNC_2()
 };

 if (FUNC_9()) {
  FUNC_12("failed: memory events not supported\n");
  return -1;
 }

 VAR_10 = FUNC_8(VAR_10, VAR_11, VAR_20, VAR_8,
        VAR_0);

 VAR_12 = VAR_10 + 11;
 VAR_15 = FUNC_5(VAR_12 + 1, sizeof(char *));
 if (!VAR_15)
  return -1;

 VAR_15[VAR_13++] = "record";

 if (!VAR_19) {
  VAR_6[VAR_1].record = 1;
  VAR_6[VAR_3].record = 1;
 }

 if (VAR_6[VAR_1].record)
  VAR_15[VAR_13++] = "-W";

 VAR_15[VAR_13++] = "-d";
 VAR_15[VAR_13++] = "--phys-data";
 VAR_15[VAR_13++] = "--sample-cpu";

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  if (!VAR_6[VAR_14].record)
   continue;

  if (!VAR_6[VAR_14].supported) {
   FUNC_12("failed: event '%s' not supported\n",
          VAR_6[VAR_14].name);
   FUNC_7(VAR_15);
   return -1;
  }

  VAR_15[VAR_13++] = "-e";
  VAR_15[VAR_13++] = FUNC_10(VAR_14);
 };

 if (VAR_17)
  VAR_15[VAR_13++] = "--all-user";

 if (VAR_18)
  VAR_15[VAR_13++] = "--all-kernel";

 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++, VAR_13++)
  VAR_15[VAR_13] = VAR_11[VAR_14];

 if (VAR_9 > 0) {
  FUNC_11("calling: ");

  VAR_14 = 0;

  while (VAR_15[VAR_14]) {
   FUNC_11("%s ", VAR_15[VAR_14]);
   VAR_14++;
  }
  FUNC_11("\n");
 }

 VAR_16 = FUNC_6(VAR_13, VAR_15);
 FUNC_7(VAR_15);
 return VAR_16;
}
