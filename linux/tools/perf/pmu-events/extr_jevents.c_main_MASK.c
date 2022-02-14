
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 char* VAR_4 ;
 int FUNC_8 (char*,int ,int,int ) ;
 int FUNC_9 (char*,int ,...) ;
 int FUNC_10 (char*,int ,...) ;
 int VAR_5 ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_14 (char*,struct stat*) ;
 int FUNC_15 (int ) ;
 scalar_t__ VAR_8 ;

int FUNC_16(int VAR_9, char *VAR_10[])
{
 int VAR_11;
 int VAR_12;
 char VAR_13[VAR_0];

 const char *VAR_14;
 const char *VAR_15;
 const char *VAR_16;
 struct stat VAR_17;

 VAR_7 = FUNC_1(VAR_10[0]);
 if (VAR_9 < 4) {
  FUNC_9("Usage: %s <arch> <starting_dir> <output_file>\n", VAR_7);
  return 1;
 }

 VAR_14 = VAR_10[1];
 VAR_16 = VAR_10[2];
 VAR_15 = VAR_10[3];

 if (VAR_9 > 4)
  VAR_8 = FUNC_0(VAR_10[4]);

 VAR_3 = FUNC_4(VAR_15, "w");
 if (!VAR_3) {
  FUNC_9("%s Unable to create required file %s (%s)\n",
    VAR_7, VAR_15, FUNC_15(VAR_2));
  return 2;
 }

 FUNC_13(VAR_13, "%s/%s", VAR_16, VAR_14);


 if (FUNC_14(VAR_13, &VAR_17) < 0) {
  FUNC_10("%s: Arch %s has no PMU event lists\n", VAR_7, VAR_14);
  goto empty_map;
 }


 FUNC_5(VAR_3, "#include \"pmu-events/pmu-events.h\"\n");
 VAR_12 = FUNC_7();
 VAR_4 = ((void*)0);
 VAR_11 = FUNC_8(VAR_13, VAR_5, VAR_12, 0);
 if (VAR_11 && VAR_8) {
  FUNC_10("%s: Error preprocessing arch standard files %s\n",
   VAR_7, VAR_13);
  goto empty_map;
 } else if (VAR_11 < 0) {

  FUNC_6();
  return 1;
 } else if (VAR_11) {
  goto empty_map;
 }

 VAR_11 = FUNC_8(VAR_13, VAR_6, VAR_12, 0);
 if (VAR_11 && VAR_8) {
  FUNC_10("%s: Error walking file tree %s\n", VAR_7, VAR_13);
  goto empty_map;
 } else if (VAR_11 < 0) {

  FUNC_6();
  return 1;
 } else if (VAR_11) {
  goto empty_map;
 }

 if (VAR_1)
  FUNC_11(VAR_3);

 if (!VAR_4) {
  FUNC_10("%s: No CPU->JSON mapping?\n", VAR_7);
  goto empty_map;
 }

 if (FUNC_12(VAR_3, VAR_4)) {
  FUNC_10("%s: Error processing mapfile %s\n", VAR_7, VAR_4);

  return 1;
 }

 return 0;

empty_map:
 FUNC_3(VAR_3);
 FUNC_2(VAR_15);
 FUNC_6();
 return 0;
}
