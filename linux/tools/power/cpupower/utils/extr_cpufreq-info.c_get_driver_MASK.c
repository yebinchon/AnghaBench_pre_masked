
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (unsigned int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1)
{
 char *VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2) {
  FUNC_3(FUNC_0("  no or unknown cpufreq driver is active on this CPU\n"));
  return -VAR_0;
 }
 FUNC_3("  driver: %s\n", VAR_2);
 FUNC_2(VAR_2);
 return 0;
}
