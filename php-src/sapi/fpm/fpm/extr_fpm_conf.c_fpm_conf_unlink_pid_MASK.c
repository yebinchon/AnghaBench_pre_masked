
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pid_file; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__) ;

int FUNC_2()
{
 if (VAR_1.pid_file) {
  if (0 > FUNC_0(VAR_1.pid_file)) {
   FUNC_1(VAR_0, "Unable to remove the PID file (%s).", VAR_1.pid_file);
   return -1;
  }
 }
 return 0;
}
