
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char** VAR_0 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (char const*,char*) ;

int FUNC_7(int VAR_2, char **VAR_3)
{
 int VAR_4;
 int VAR_5;
 const char *VAR_6 = FUNC_2("VERBOSE");

 if (VAR_2 >= 2) {

  const char *VAR_7 = FUNC_2("IN_TEST");

  if (VAR_6) {
   FUNC_4("  invoked with:");
   for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    FUNC_4(" [%d]='%s'", VAR_4, VAR_3[VAR_4]);
   FUNC_4("\n");
  }


  if (!VAR_7 || FUNC_6(VAR_7, "yes") != 0) {
   FUNC_4("[FAIL] (no IN_TEST=yes in env)\n");
   return 1;
  }


  VAR_5 = FUNC_0(VAR_3[VAR_2 - 1]);
  FUNC_1(VAR_1);
 } else {
  FUNC_3();
  if (VAR_6)
   VAR_0[1] = "VERBOSE=1";
  VAR_5 = FUNC_5();
  if (VAR_5 > 0)
   FUNC_4("%d tests failed\n", VAR_5);
 }
 return VAR_5;
}
