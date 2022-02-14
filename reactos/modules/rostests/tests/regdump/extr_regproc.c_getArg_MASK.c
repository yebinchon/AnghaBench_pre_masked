
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int TCHAR ;
typedef scalar_t__* LPTSTR ;


 int FUNC_0 () ;
 scalar_t__* FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (scalar_t__*,scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;

LPTSTR FUNC_5(LPTSTR VAR_0)
{
  LPTSTR VAR_1 = ((void*)0);
  ULONG VAR_2;

  if (VAR_0 == ((void*)0)) return ((void*)0);


  VAR_2 = FUNC_4(VAR_0);
  if (VAR_0[VAR_2-1] == FUNC_2('\"')) VAR_0[VAR_2-1] = FUNC_2('\0');
  if (VAR_0[0] == FUNC_2('\"')) VAR_0++;
  VAR_1 = FUNC_1(FUNC_0(), 0, (FUNC_4(VAR_0)+1) * sizeof(TCHAR));
  FUNC_3(VAR_1, VAR_0);
  return VAR_1;
}
