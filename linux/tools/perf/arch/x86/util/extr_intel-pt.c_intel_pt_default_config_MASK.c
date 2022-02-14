
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_pmu {int format; int name; } ;
typedef int buf ;


 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct perf_pmu*,char*,char*,...) ;
 int FUNC_3 (char*,int ,char*) ;
 scalar_t__ FUNC_4 (char*,int,char*,...) ;

__attribute__((used)) static u64 FUNC_5(struct perf_pmu *VAR_0)
{
 char VAR_1[256];
 int VAR_2, VAR_3 = 0, VAR_4;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0;
 u64 VAR_9;
 char VAR_10;

 VAR_8 += FUNC_4(VAR_1 + VAR_8, sizeof(VAR_1) - VAR_8, "tsc");

 if (FUNC_2(VAR_0, "caps/mtc", "%d",
    &VAR_2) != 1)
  VAR_2 = 1;

 if (VAR_2) {
  if (FUNC_2(VAR_0, "caps/mtc_periods", "%x",
     &VAR_3) != 1)
   VAR_3 = 0;
  if (VAR_3) {
   VAR_4 = FUNC_1(VAR_3, 3);
   VAR_8 += FUNC_4(VAR_1 + VAR_8, sizeof(VAR_1) - VAR_8,
      ",mtc,mtc_period=%d", VAR_4);
  }
 }

 if (FUNC_2(VAR_0, "caps/psb_cyc", "%d",
    &VAR_5) != 1)
  VAR_5 = 1;

 if (VAR_5 && VAR_3) {
  if (FUNC_2(VAR_0, "caps/psb_periods", "%x",
     &VAR_6) != 1)
   VAR_6 = 0;
  if (VAR_6) {
   VAR_7 = FUNC_1(VAR_6, 3);
   VAR_8 += FUNC_4(VAR_1 + VAR_8, sizeof(VAR_1) - VAR_8,
      ",psb_period=%d", VAR_7);
  }
 }

 if (FUNC_2(VAR_0, "format/pt", "%c", &VAR_10) == 1 &&
     FUNC_2(VAR_0, "format/branch", "%c", &VAR_10) == 1)
  VAR_8 += FUNC_4(VAR_1 + VAR_8, sizeof(VAR_1) - VAR_8, ",pt,branch");

 FUNC_3("%s default config: %s\n", VAR_0->name, VAR_1);

 FUNC_0(&VAR_0->format, VAR_1, &VAR_9);

 return VAR_9;
}
