
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int systemd_interval; int systemd_watchdog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_0 (char*) ;
 TYPE_1__ VAR_4 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;

int FUNC_3()
{
 char *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_1("WATCHDOG_USEC");
 if (VAR_5) {

  VAR_6 = (int)(FUNC_0(VAR_5) / 2000L);
  FUNC_2(VAR_1, "WATCHDOG_USEC=%s, interval=%d", VAR_5, VAR_6);
 }

 if (VAR_6 > 1000) {
  if (VAR_4.systemd_interval > 0) {
   FUNC_2(VAR_3, "systemd_interval option ignored");
  }
  FUNC_2(VAR_2, "systemd watchdog configured to %.3gsec", (float)VAR_6 / 1000.0);
  VAR_4.systemd_watchdog = 1;
  VAR_4.systemd_interval = VAR_6;

 } else if (VAR_4.systemd_interval < 0) {

  VAR_4.systemd_interval = VAR_0;

 } else {

  VAR_4.systemd_interval *= 1000;
 }
 return 0;
}
