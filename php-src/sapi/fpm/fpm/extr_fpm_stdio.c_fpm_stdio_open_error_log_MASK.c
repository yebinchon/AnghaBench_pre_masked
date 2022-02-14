
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int error_log; int syslog_facility; int syslog_ident; } ;
struct TYPE_3__ {int error_log_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ,...) ;
 TYPE_2__ VAR_14 ;
 TYPE_1__ VAR_15 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int) ;

int FUNC_9(int VAR_16)
{
 int VAR_17;
 VAR_17 = FUNC_4(VAR_14.error_log, VAR_7 | VAR_5 | VAR_6, VAR_9 | VAR_10);
 if (0 > VAR_17) {
  FUNC_7(VAR_11, "failed to open error_log (%s)", VAR_14.error_log);
  return -1;
 }

 if (VAR_16) {
  if (FUNC_3()) {
   FUNC_1(VAR_17, VAR_8);
  }

  FUNC_1(VAR_17, VAR_15.error_log_fd);
  FUNC_0(VAR_17);
  VAR_17 = VAR_15.error_log_fd;
 } else {
  VAR_15.error_log_fd = VAR_17;
  if (FUNC_3()) {
   FUNC_8(VAR_15.error_log_fd);
  }
 }
 if (0 > FUNC_2(VAR_17, VAR_2, FUNC_2(VAR_17, VAR_1) | VAR_0)) {
  FUNC_7(VAR_13, "failed to change attribute of error_log");
 }
 return 0;
}
