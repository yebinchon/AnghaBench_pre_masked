
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

int FUNC_5(int VAR_5, char **VAR_6)
{
 FUNC_4("Testing posix timers. False negative may happen on CPU execution \n");
 FUNC_4("based timers if other threads run on the CPU...\n");

 if (FUNC_0(VAR_4) < 0)
  return FUNC_2();

 if (FUNC_0(VAR_2) < 0)
  return FUNC_2();

 if (FUNC_0(VAR_3) < 0)
  return FUNC_2();

 if (FUNC_1(VAR_1) < 0)
  return FUNC_2();
 if (FUNC_1(VAR_0) < 0)
  return FUNC_2();

 return FUNC_3();
}
