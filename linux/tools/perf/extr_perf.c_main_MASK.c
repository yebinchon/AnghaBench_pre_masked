
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbuf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char const**) ;
 int FUNC_1 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*,int ,int ,int ) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char const**) ;
 int FUNC_7 (char const***,int*,int *) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (int ) ;
 int VAR_8 ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 () ;
 int VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 () ;
 int FUNC_16 (int*,char const***) ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int VAR_12 ;
 char* FUNC_20 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_21 (char const*,char*) ;
 int FUNC_22 () ;
 int FUNC_23 (int *) ;

int FUNC_24(int VAR_13, const char **VAR_14)
{
 int VAR_15;
 const char *VAR_16;
 char VAR_17[VAR_5];


 FUNC_2("perf", VAR_4, VAR_2, VAR_1);
 FUNC_11(VAR_3);

 FUNC_9(VAR_8);

 VAR_16 = FUNC_3(VAR_14[0]);
 if (!VAR_16)
  VAR_16 = "perf-help";

 FUNC_19(FUNC_23(((void*)0)));


 VAR_6 = FUNC_5("PERF_CONFIG");

 VAR_15 = FUNC_12(VAR_9, ((void*)0));
 if (VAR_15)
  return VAR_15;
 FUNC_17(((void*)0));
 if (FUNC_21(VAR_16, "perf-")) {
  VAR_16 += 5;
  VAR_14[0] = VAR_16;
  FUNC_6(VAR_13, VAR_14);




  VAR_16 -= 5;
  VAR_14[0] = VAR_16;
 }
 if (FUNC_21(VAR_16, "trace")) {





  FUNC_4(VAR_12,
   "trace command not available: missing audit-libs devel package at build time.\n");
  goto out;

 }

 VAR_14++;
 VAR_13--;
 FUNC_7(&VAR_14, &VAR_13, ((void*)0));
 FUNC_1();

 if (VAR_13 > 0) {
  if (FUNC_21(VAR_14[0], "--"))
   VAR_14[0] += 2;
 } else {

  FUNC_14("\n usage: %s\n\n", VAR_11);
  FUNC_10();
  FUNC_14("\n %s\n\n", VAR_10);
  goto out;
 }
 VAR_16 = VAR_14[0];

 FUNC_22();







 FUNC_18();





 FUNC_15();

 FUNC_13();

 while (1) {
  static int VAR_18;

  FUNC_16(&VAR_13, &VAR_14);

  if (VAR_7 != VAR_0)
   break;

  if (!VAR_18) {
   VAR_16 = VAR_14[0] = FUNC_8(VAR_16);
   VAR_18 = 1;
  } else
   break;
 }

 FUNC_4(VAR_12, "Failed to run command '%s': %s\n",
  VAR_16, FUNC_20(VAR_7, VAR_17, sizeof(VAR_17)));
out:
 return 1;
}
