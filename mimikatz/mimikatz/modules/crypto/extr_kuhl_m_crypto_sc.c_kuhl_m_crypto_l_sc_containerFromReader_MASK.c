
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int * PWSTR ;
typedef char* LPCWSTR ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*) ;

PWSTR FUNC_3(LPCWSTR VAR_1)
{
 PWSTR VAR_2 = ((void*)0);
 DWORD VAR_3 = (DWORD) FUNC_2(VAR_1);
 if((VAR_2 = (PWSTR) FUNC_0(VAR_0, (VAR_3 + 6) * sizeof(wchar_t))))
 {
  FUNC_1(VAR_2, L"\\\\.\\", 4 * sizeof(wchar_t));
  FUNC_1(VAR_2 + 4, VAR_1, VAR_3 * sizeof(wchar_t));
  FUNC_1(VAR_2 + 4 + VAR_3, L"\\", 1 * sizeof(wchar_t));
 }
 return VAR_2;
}
