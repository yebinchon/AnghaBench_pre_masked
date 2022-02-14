
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pid_file; } ;
struct TYPE_3__ {scalar_t__ parent_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int) ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int ,char*,...) ;

int FUNC_6()
{
 int VAR_7;

 if (VAR_5.pid_file) {
  char VAR_8[64];
  int VAR_9;

  FUNC_3(VAR_5.pid_file);
  VAR_7 = FUNC_1(VAR_5.pid_file, VAR_2 | VAR_3 | VAR_0 | VAR_1);

  if (VAR_7 < 0) {
   FUNC_5(VAR_4, "Unable to create the PID file (%s).", VAR_5.pid_file);
   return -1;
  }

  VAR_9 = FUNC_2(VAR_8, "%d", (int) VAR_6.parent_pid);

  if (VAR_9 != FUNC_4(VAR_7, VAR_8, VAR_9)) {
   FUNC_5(VAR_4, "Unable to write to the PID file.");
   FUNC_0(VAR_7);
   return -1;
  }
  FUNC_0(VAR_7);
 }
 return 0;
}
