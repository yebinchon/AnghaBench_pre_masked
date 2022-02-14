
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 char FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_0 ;

int FUNC_3(int VAR_1, char *VAR_2[])
{
  char VAR_3;
  FUNC_0(VAR_3);

  if (VAR_1 < 2)
  {
      FUNC_2( VAR_0, "Usage: %s PID (Process ID) \n", VAR_2[0] );
      return 1;
  }
  VAR_3 = FUNC_1(VAR_2[1]);
  return 0;
}
