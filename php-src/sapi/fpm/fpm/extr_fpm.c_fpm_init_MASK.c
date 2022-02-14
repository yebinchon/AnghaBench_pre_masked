
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int argc; char** argv; char* prefix; char* pid; int run_as_root; int force_stderr; scalar_t__ parent_pid; scalar_t__ test_successful; int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,char*,...) ;

int FUNC_17(int VAR_4, char **VAR_5, char *VAR_6, char *VAR_7, char *VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 VAR_3.argc = VAR_4;
 VAR_3.argv = VAR_5;
 if (VAR_6 && *VAR_6) {
  VAR_3.config = FUNC_15(VAR_6);
 }
 VAR_3.prefix = VAR_7;
 VAR_3.pid = VAR_8;
 VAR_3.run_as_root = VAR_10;
 VAR_3.force_stderr = VAR_12;

 if (0 > FUNC_7() ||
     0 > FUNC_12() ||
     0 > FUNC_2(VAR_9, VAR_11) ||
     0 > FUNC_13() ||
     0 > FUNC_8() ||
     0 > FUNC_6() ||
     0 > FUNC_4() ||
     0 > FUNC_9() ||
     0 > FUNC_1() ||
     0 > FUNC_10() ||
     0 > FUNC_14() ||
     0 > FUNC_5()) {

  if (VAR_3.test_successful) {
   FUNC_0(VAR_0);
  } else {
   FUNC_16(VAR_1, "FPM initialization failed");
   return -1;
  }
 }

 if (0 > FUNC_3()) {
  FUNC_16(VAR_1, "FPM initialization failed");
  return -1;
 }

 FUNC_11();
 FUNC_16(VAR_2, "fpm is running, pid %d", (int) VAR_3.parent_pid);

 return 0;
}
