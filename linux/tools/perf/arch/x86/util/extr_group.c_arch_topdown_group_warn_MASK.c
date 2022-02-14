
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

void FUNC_1(void)
{
 FUNC_0(VAR_0,
  "nmi_watchdog enabled with topdown. May give wrong results.\n"
  "Disable with echo 0 > /proc/sys/kernel/nmi_watchdog\n");
}
