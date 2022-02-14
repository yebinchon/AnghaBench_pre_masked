
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int * LPTSTR ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (char) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int * VAR_1 ;

LPTSTR FUNC_7(LPTSTR VAR_2)
{
  LPTSTR VAR_3;
  TCHAR VAR_4[VAR_0];

  if (VAR_2 == ((void*)0))
    return ((void*)0);

  FUNC_5(VAR_4, VAR_2);
  VAR_3 = FUNC_4(VAR_4, FUNC_3('\\'));
  if (VAR_3) {
      LPTSTR VAR_5;

      VAR_3++;
      VAR_5 = FUNC_4(VAR_4, FUNC_3(']'));
      if (VAR_5) {
          *VAR_5 = FUNC_3('\0');
      }
  } else {
      VAR_3 = VAR_4 + FUNC_6(VAR_4);
  }
  VAR_1 = FUNC_2(FUNC_1(), 0, (FUNC_6(VAR_3)+1)*sizeof(TCHAR));
  FUNC_0(VAR_1);
  FUNC_5(VAR_1, VAR_3);
  return VAR_1;
}
