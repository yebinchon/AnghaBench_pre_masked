
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int,char**,char*,int ,int *) ;
 int FUNC_9 (unsigned int,int) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,int) ;
 int VAR_3 ;
 int FUNC_12 (int ,char*) ;
 int VAR_4 ;
 int FUNC_13 (unsigned int) ;
 int FUNC_14 (int ) ;

int FUNC_15(int VAR_5, char **VAR_6)
{
 extern char *VAR_7;
 extern int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11;

 union {
  struct {
   int perf_bias:1;
  };
  int params;
 } VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;

 FUNC_12(VAR_0, "");
 FUNC_14(VAR_1);

 VAR_12.params = 0;

 while ((VAR_14 = FUNC_8(VAR_5, VAR_6, "b:",
      VAR_3, ((void*)0))) != -1) {
  switch (VAR_14) {
  case 'b':
   if (VAR_12.perf_bias)
    FUNC_10();
   VAR_13 = FUNC_1(VAR_7);
   if (VAR_13 < 0 || VAR_13 > 15) {
    FUNC_11(FUNC_0("--perf-bias param out "
      "of range [0-%d]\n"), 15);
    FUNC_10();
   }
   VAR_12.perf_bias = 1;
   break;
  default:
   FUNC_10();
  }
 };

 if (!VAR_12.params)
  FUNC_10();


 if (FUNC_3(VAR_2))
  FUNC_6(VAR_2);


 for (VAR_11 = FUNC_2(VAR_2);
      VAR_11 <= FUNC_5(VAR_2); VAR_11++) {

  if (!FUNC_4(VAR_2, VAR_11))
   continue;

  if (FUNC_13(VAR_11) != 1){
   FUNC_7(VAR_4, FUNC_0("Cannot set values on CPU %d:"), VAR_11);
   FUNC_7(VAR_4, "%s", FUNC_0(" *is offline\n"));
   continue;
  }

  if (VAR_12.perf_bias) {
   VAR_14 = FUNC_9(VAR_11, VAR_13);
   if (VAR_14) {
    FUNC_7(VAR_4, FUNC_0("Error setting perf-bias "
        "value on CPU %d\n"), VAR_11);
    break;
   }
  }
 }
 return VAR_14;
}
