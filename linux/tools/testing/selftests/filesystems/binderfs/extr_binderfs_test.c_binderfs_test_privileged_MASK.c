
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3()
{
 if (FUNC_1() != 0)
  FUNC_2(
   "Tests are not run as root. Skipping privileged tests\n");
 else
  FUNC_0();
}
