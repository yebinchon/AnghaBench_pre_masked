
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int LPCSTR ;
typedef int INT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int *,int) ;

__attribute__((used)) static LPWSTR FUNC_3(LPCSTR VAR_1, INT VAR_2)
{
  DWORD VAR_3;
  LPWSTR VAR_4;
  if (!VAR_1) return ((void*)0);
  VAR_3 = FUNC_2(VAR_0, 0, VAR_1, VAR_2, ((void*)0), 0);
  VAR_4 = FUNC_1(FUNC_0(), 0, VAR_3*sizeof(WCHAR));
  FUNC_2(VAR_0, 0, VAR_1, VAR_2, VAR_4, VAR_3);
  return VAR_4;
}
