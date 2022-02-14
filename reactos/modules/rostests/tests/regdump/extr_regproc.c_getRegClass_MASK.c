
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef scalar_t__* LPTSTR ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__* FUNC_1 (scalar_t__*,scalar_t__) ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 int * VAR_3 ;
 int * VAR_4 ;

HKEY FUNC_5(LPTSTR VAR_5)
{
  LPTSTR VAR_6;
  LPTSTR VAR_7;
  int VAR_8;

  TCHAR VAR_9[VAR_1];

  if (VAR_5 == ((void*)0))
    return (HKEY)VAR_0;

  FUNC_4(VAR_9, VAR_5, VAR_1);

  VAR_6 = FUNC_1(VAR_9, FUNC_0('\\'));
  if (!VAR_6) {
      VAR_6 = VAR_9 + FUNC_3(VAR_9);
      if (VAR_6[-1] == FUNC_0(']')) {
          VAR_6--;
      }
  }
  *VAR_6 = FUNC_0('\0');
  if (VAR_9[0] == FUNC_0('[')) {
      VAR_7 = VAR_9 + 1;
  } else {
      VAR_7 = VAR_9;
  }
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
      if (!FUNC_2(VAR_7, VAR_4[VAR_8])) {
          return VAR_3[VAR_8];
      }
  }
  return (HKEY)VAR_0;
}
