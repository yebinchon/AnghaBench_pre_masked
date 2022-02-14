
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
  if (!VAR_0)
  {
    FUNC_2("RtlZeroMemory is not available\n");
    return;
  }


  FUNC_1(0); FUNC_0("This is a test!");
  FUNC_1(1); FUNC_0("\0his is a test!");
  FUNC_1(2); FUNC_0("\0\0is is a test!");
  FUNC_1(3); FUNC_0("\0\0\0s is a test!");
  FUNC_1(4); FUNC_0("\0\0\0\0 is a test!");
  FUNC_1(5); FUNC_0("\0\0\0\0\0is a test!");
  FUNC_1(6); FUNC_0("\0\0\0\0\0\0s a test!");
  FUNC_1(7); FUNC_0("\0\0\0\0\0\0\0 a test!");
  FUNC_1(8); FUNC_0("\0\0\0\0\0\0\0\0a test!");
  FUNC_1(9); FUNC_0("\0\0\0\0\0\0\0\0\0 test!");
}
