
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,int ,char*) ;

__attribute__((used)) static void
FUNC_5(char *VAR_10)
{
 if (FUNC_3(VAR_10, "HUP") == 0)
  VAR_9 = VAR_1;
 else if (FUNC_3(VAR_10, "INT") == 0)
  VAR_9 = VAR_2;
 else if (FUNC_3(VAR_10, "QUIT") == 0)
  VAR_9 = VAR_4;
 else if (FUNC_3(VAR_10, "ABRT") == 0)
  VAR_9 = VAR_0;
 else if (FUNC_3(VAR_10, "KILL") == 0)
  VAR_9 = VAR_3;
 else if (FUNC_3(VAR_10, "TERM") == 0)
  VAR_9 = VAR_5;
 else if (FUNC_3(VAR_10, "USR1") == 0)
  VAR_9 = VAR_6;
 else if (FUNC_3(VAR_10, "USR2") == 0)
  VAR_9 = VAR_7;
 else
 {
  FUNC_4(FUNC_0("%s: unrecognized signal name \"%s\"\n"), VAR_8, VAR_10);
  FUNC_1();
  FUNC_2(1);
 }
}
