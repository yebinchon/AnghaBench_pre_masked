
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef void** PBOOL ;
typedef int LPCWSTR ;
typedef void* BOOL ;


 void* VAR_0 ;
 int FUNC_0 (char*,int ) ;
 void* VAR_1 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 void* FUNC_2 (int,int **,int ,int *,int *) ;

BOOL FUNC_3(int VAR_2, wchar_t * VAR_3[], LPCWSTR VAR_4, PBOOL VAR_5)
{
 BOOL VAR_6 = VAR_0;
 LPCWSTR VAR_7;
 if((VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, &VAR_7, ((void*)0))))
 {
  if((FUNC_1(VAR_7, L"on") == 0) || (FUNC_1(VAR_7, L"true") == 0) || (FUNC_1(VAR_7, L"1") == 0))
   *VAR_5 = VAR_1;
  else if((FUNC_1(VAR_7, L"off") == 0) || (FUNC_1(VAR_7, L"false") == 0) || (FUNC_1(VAR_7, L"0") == 0))
   *VAR_5 = VAR_0;
  else FUNC_0(L"%s argument need on/true/1 or off/false/0\n", VAR_4);
 }
 return VAR_6;
}
