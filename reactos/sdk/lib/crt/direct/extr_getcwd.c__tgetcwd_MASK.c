
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _TCHAR ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;

_TCHAR* FUNC_6(_TCHAR* VAR_2, int VAR_3)
{
  _TCHAR VAR_4[VAR_1];
  DWORD VAR_5 = FUNC_0(VAR_1,VAR_4);

  if (VAR_5 == 0)
  {
    FUNC_2(FUNC_1());
    return ((void*)0);
  }

  if (!VAR_2)
  {
    return FUNC_5(VAR_4);
  }

  if (VAR_5 >= (DWORD)VAR_3)
  {
    FUNC_3(VAR_0);
    return ((void*)0);
  }

  FUNC_4(VAR_2,VAR_4);
  return VAR_2;
}
