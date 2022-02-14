
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (char*) ;

int FUNC_7(void)
{
  FUNC_6("Attempting to start Simple TelnetD\n");


  FUNC_2(VAR_0, 1);

  if (!FUNC_3())
    FUNC_1("Unable to start socket interface\n");

  FUNC_0();

  while(!VAR_1) {
    FUNC_5();
  }

  FUNC_4();
  return 0;
}
