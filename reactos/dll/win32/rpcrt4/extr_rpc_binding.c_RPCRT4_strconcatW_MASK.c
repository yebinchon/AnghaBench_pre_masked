
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,char*) ;
 char* FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static LPWSTR FUNC_5(LPWSTR VAR_0, LPCWSTR VAR_1)
{
  DWORD VAR_2 = FUNC_4(VAR_0), VAR_3 = FUNC_4(VAR_1);
  LPWSTR VAR_4 = FUNC_2(FUNC_0(), 0, VAR_0, (VAR_2+VAR_3+2)*sizeof(WCHAR));
  if (!VAR_4)
  {
    FUNC_1(FUNC_0(), 0, VAR_0);
    return ((void*)0);
  }
  VAR_4[VAR_2] = ',';
  FUNC_3(VAR_4+VAR_2+1, VAR_1, (VAR_3+1)*sizeof(WCHAR));
  return VAR_4;
}
