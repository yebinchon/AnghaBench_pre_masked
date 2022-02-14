
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPSTR ;
typedef int LPCSTR ;
typedef int INT ;
typedef int DWORD ;


 int FUNC_0 () ;
 scalar_t__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (int ) ;

LPSTR FUNC_4(LPCSTR VAR_0, INT VAR_1)
{
  DWORD VAR_2;
  LPSTR VAR_3;
  if (!VAR_0) return ((void*)0);
  if (VAR_1 == -1) VAR_1 = FUNC_3(VAR_0);
  VAR_2 = VAR_1;
  VAR_3 = FUNC_1(FUNC_0(), 0, VAR_2+1);
  FUNC_2(VAR_3, VAR_0, VAR_2);
  VAR_3[VAR_2] = 0;
  return VAR_3;
}
