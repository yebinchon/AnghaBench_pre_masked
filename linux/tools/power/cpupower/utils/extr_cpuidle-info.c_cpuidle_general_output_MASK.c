
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 char* FUNC_1 () ;
 char* FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
 char *VAR_0;

 VAR_0 = FUNC_1();
 if (!VAR_0) {
  FUNC_4(FUNC_0("Could not determine cpuidle driver\n"));
  return;
 }

 FUNC_4(FUNC_0("CPUidle driver: %s\n"), VAR_0);
 FUNC_3(VAR_0);

 VAR_0 = FUNC_2();
 if (!VAR_0) {
  FUNC_4(FUNC_0("Could not determine cpuidle governor\n"));
  return;
 }

 FUNC_4(FUNC_0("CPUidle governor: %s\n"), VAR_0);
 FUNC_3(VAR_0);
}
