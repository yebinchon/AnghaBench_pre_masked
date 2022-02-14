
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 char** VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (scalar_t__,int*,int ) ;

int FUNC_9(int VAR_2, char **VAR_3)
{
 char VAR_4[512];
 int VAR_5, VAR_6, VAR_7;
 pid_t VAR_8;

 FUNC_3(VAR_4, 512);

 VAR_5 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_1[0])) {
  FUNC_6("Error: You probably need to run this as root\n");
  return -1;
 }


 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  FUNC_6("Validating clocksource %s\n", VAR_1[VAR_6]);
  if (FUNC_0(VAR_1[VAR_6])) {
   VAR_7 = -1;
   goto out;
  }
  if (FUNC_7(5)) {
   VAR_7 = -1;
   goto out;
  }
 }


 FUNC_6("Running Asynchronous Switching Tests...\n");
 VAR_8 = FUNC_1();
 if (!VAR_8)
  return FUNC_7(60);

 while (VAR_8 != FUNC_8(VAR_8, &VAR_7, VAR_0))
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   if (FUNC_0(VAR_1[VAR_6])) {
    VAR_7 = -1;
    goto out;
   }
out:
 FUNC_0(VAR_4);

 if (VAR_7)
  return FUNC_4();
 return FUNC_5();
}
