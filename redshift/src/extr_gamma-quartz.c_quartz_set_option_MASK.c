
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int quartz_state_t ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(quartz_state_t *VAR_1, const char *VAR_2, const char *VAR_3)
{
 if (FUNC_2(VAR_2, "preserve") == 0) {
  FUNC_1(VAR_0, FUNC_0("Parameter `%s` is now always on; "
      " Use the `%s` command-line option"
      " to disable.\n"),
   VAR_2, "-P");
 } else {
  FUNC_1(VAR_0, FUNC_0("Unknown method parameter: `%s'.\n"), VAR_2);
  return -1;
 }

 return 0;
}
