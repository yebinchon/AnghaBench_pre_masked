
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int,char**,char*,int ,int *) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int ,char*) ;
 int VAR_8 ;
 int FUNC_13 (unsigned int) ;
 int FUNC_14 (int ) ;

int FUNC_15(int VAR_9, char **VAR_10)
{
 extern char *VAR_11;
 extern int VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15;

 union {
  struct {
   int perf_bias:1;
  };
  int params;
 } VAR_16 = {};
 int VAR_17 = 0;

 FUNC_12(VAR_2, "");
 FUNC_14(VAR_3);


 while ((VAR_17 = FUNC_8(VAR_9, VAR_10, "b", VAR_7, ((void*)0))) != -1) {
  switch (VAR_17) {
  case 'b':
   if (VAR_16.perf_bias)
    FUNC_10();
   VAR_16.perf_bias = 1;
   break;
  default:
   FUNC_10();
  }
 };

 if (!VAR_16.params)
  VAR_16.params = 0x7;


 if (FUNC_2(VAR_5))
  FUNC_5(VAR_5, 0);


 if (!VAR_16.perf_bias)
  return VAR_17;

 if (VAR_16.perf_bias) {
  if (!VAR_6) {
   VAR_16.perf_bias = 0;
   FUNC_11(FUNC_0("Intel's performance bias setting needs root privileges\n"));
  } else if (!(VAR_4.caps & VAR_0)) {
   FUNC_11(FUNC_0("System does not support Intel's performance"
     " bias setting\n"));
   VAR_16.perf_bias = 0;
  }
 }


 for (VAR_15 = FUNC_1(VAR_5);
      VAR_15 <= FUNC_4(VAR_5); VAR_15++) {

  if (!FUNC_3(VAR_5, VAR_15))
   continue;

  FUNC_11(FUNC_0("analyzing CPU %d:\n"), VAR_15);

  if (FUNC_13(VAR_15) != 1){
   FUNC_11(FUNC_0(" *is offline\n"));
   continue;
  }

  if (VAR_16.perf_bias) {
   VAR_17 = FUNC_9(VAR_15);
   if (VAR_17 < 0) {
    FUNC_7(VAR_8,
   FUNC_0("Could not read perf-bias value[%d]\n"), VAR_17);
    FUNC_6(VAR_1);
   } else
    FUNC_11(FUNC_0("perf-bias: %d\n"), VAR_17);
  }
 }
 return 0;
}
