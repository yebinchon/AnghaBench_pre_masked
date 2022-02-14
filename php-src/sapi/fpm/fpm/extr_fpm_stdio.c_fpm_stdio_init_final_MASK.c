
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ error_log_fd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;

int FUNC_4()
{
 if (FUNC_1()) {

  if (VAR_4.error_log_fd > 0 && VAR_4.error_log_fd != VAR_0) {


   if (0 > FUNC_0(VAR_4.error_log_fd, VAR_0)) {
    FUNC_2(VAR_2, "failed to init stdio: dup2()");
    return -1;
   }
  }






 }
 FUNC_3();
 return 0;
}
