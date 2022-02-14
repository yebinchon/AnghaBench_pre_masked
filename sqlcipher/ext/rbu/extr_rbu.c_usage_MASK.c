
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_0 ;

void FUNC_2(const char *VAR_1){
  FUNC_1(VAR_0,
"Usage: %s ?OPTIONS? TARGET-DB RBU-DB\n"
"\n"
"Where options are:\n"
"\n"
"    -step NSTEP\n"
"    -statstep NSTATSTEP\n"
"    -vacuum\n"
"    -presql SQL\n"
"\n"
"  If the -vacuum switch is not present, argument RBU-DB must be an RBU\n"
"  database containing an update suitable for target database TARGET-DB.\n"
"  Or, if -vacuum is specified, then TARGET-DB is a database to vacuum using\n"
"  RBU, and RBU-DB is used as the state database for the vacuum (refer to\n"
"  API documentation for details).\n"
"\n"
"  If NSTEP is set to less than or equal to zero (the default value), this \n"
"  program attempts to perform the entire update or vacuum operation before\n"
"  exiting\n"
"\n"
"  If NSTEP is greater than zero, then a maximum of NSTEP calls are made\n"
"  to sqlite3rbu_step(). If the RBU update has not been completely applied\n"
"  after the NSTEP'th call is made, the state is saved in the database RBU-DB\n"
"  and the program exits. Subsequent invocations of this (or any other RBU)\n"
"  application will use this state to resume applying the RBU update to the\n"
"  target db.\n"
"\n"
, VAR_1);
  FUNC_0(1);
}
