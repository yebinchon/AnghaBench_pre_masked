
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(int VAR_1)
{
  WCHAR VAR_2[] = L"A:";

  VAR_2[0] += VAR_1 - 1;
  if (!FUNC_1( VAR_2 ))
  {
    FUNC_2(FUNC_0());
    if (VAR_1 <= 0)
    {
      FUNC_3(VAR_0);
    }
    return -1;
  }
  return 0;
}
