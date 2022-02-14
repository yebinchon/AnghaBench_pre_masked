
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int LPCSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,int *,int) ;

LPWSTR FUNC_3(LPCSTR VAR_1)
{
  DWORD VAR_2;
  LPWSTR VAR_3;
  if (!VAR_1) return ((void*)0);
  VAR_2 = FUNC_2(VAR_0, 0, VAR_1, -1, ((void*)0), 0);
  VAR_3 = FUNC_1(FUNC_0(), 0, VAR_2*sizeof(WCHAR));
  FUNC_2(VAR_0, 0, VAR_1, -1, VAR_3, VAR_2);
  return VAR_3;
}
