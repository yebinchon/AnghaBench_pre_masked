
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rlim_cur; int rlim_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,TYPE_1__*) ;

void FUNC_3()
{
 int VAR_11;

 if (VAR_3.rlim_cur < 4096) {
  FUNC_0("Current rlimit value for POSIX message queue bytes is "
         "unreasonably low,\nincreasing.\n\n");
  VAR_3.rlim_cur = 8192;
  VAR_3.rlim_max = 16384;
  FUNC_2(VAR_0, &VAR_3);
 }

 if (VAR_8) {
  VAR_11 = (VAR_1 + 1) * (VAR_2 + 1 +
          2 * sizeof(void *));
  if (VAR_11 > VAR_3.rlim_cur) {
   FUNC_0("Temporarily lowering default queue parameters "
          "to something that will work\n"
          "with the current rlimit values.\n\n");
   FUNC_1(VAR_6, 10);
   VAR_1 = 10;
   FUNC_1(VAR_7, 128);
   VAR_2 = 128;
  }
 } else {
  VAR_11 = (VAR_4 + 1) * (VAR_5 + 1 +
          2 * sizeof(void *));
  if (VAR_11 > VAR_3.rlim_cur) {
   FUNC_0("Temporarily lowering maximum queue parameters "
          "to something that will work\n"
          "with the current rlimit values in case this is "
          "a kernel that ties the default\n"
          "queue parameters to the maximum queue "
          "parameters.\n\n");
   FUNC_1(VAR_9, 10);
   VAR_4 = 10;
   FUNC_1(VAR_10, 128);
   VAR_5 = 128;
  }
 }
}
