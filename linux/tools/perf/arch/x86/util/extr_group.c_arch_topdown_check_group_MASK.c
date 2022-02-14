
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int*) ;

bool FUNC_1(bool *VAR_0)
{
 int VAR_1;

 if (FUNC_0("kernel/nmi_watchdog", &VAR_1) < 0)
  return 0;
 if (VAR_1 > 0) {
  *VAR_0 = 1;
  return 0;
 }
 return 1;
}
