
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int SCHEMA_PREFIX_TABLE ;
typedef int PWSTR ;
typedef scalar_t__ PVOID ;
typedef char* LPCWSTR ;
typedef int LPCSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;
typedef int ATTRBLOCK ;


 int FUNC_0 (char*,char*,int,int ,char*) ;
 scalar_t__ FUNC_1 (int *,int *,int ,scalar_t__*,int*) ;

void FUNC_2(LPCWSTR VAR_0, SCHEMA_PREFIX_TABLE *VAR_1, ATTRBLOCK *VAR_2, LPCSTR VAR_3, BOOL VAR_4)
{
 PVOID VAR_5;
 DWORD VAR_6;
 if(FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_5, &VAR_6))
  FUNC_0(L"%s%.*s%s", VAR_0 ? VAR_0 : L"", VAR_6 / sizeof(wchar_t), (PWSTR) VAR_5, VAR_4 ? L"\n" : L"");
}
