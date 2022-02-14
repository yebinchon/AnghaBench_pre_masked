
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (char*,...) ;
 char* VAR_2 ;
 int FUNC_6 () ;
 int VAR_3 ;

int
FUNC_7(int VAR_4, char *VAR_5[])
{
 int VAR_6;
 pid_t VAR_7;

 VAR_2 = VAR_5[0];

 VAR_1 = FUNC_1(VAR_0, "a+");
 if (!VAR_1) {
  FUNC_3(VAR_3, "cannot open logfile '%s'\n", VAR_0);
  FUNC_0(1);
 }
 VAR_7 = FUNC_2();
 switch (VAR_7) {
 case 0:
  break;
 case -1:
  FUNC_0(2);
 default:
  FUNC_0(0);
 }

 FUNC_5("MIC Daemon start\n");

 VAR_6 = FUNC_4();
 if (VAR_6 == 0) {
  FUNC_5("MIC module not loaded\n");
  FUNC_0(3);
 }
 FUNC_5("MIC found %d devices\n", VAR_6);

 FUNC_6();

 FUNC_0(0);
}
