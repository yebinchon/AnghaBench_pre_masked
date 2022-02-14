
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_3 ;

BOOL FUNC_2(void)
{
  VAR_3 = FUNC_1();

  if (VAR_3 == VAR_1)
  {
    FUNC_0("TlsAlloc() failed!\n");
    return VAR_0;
  }
  return VAR_2;
}
