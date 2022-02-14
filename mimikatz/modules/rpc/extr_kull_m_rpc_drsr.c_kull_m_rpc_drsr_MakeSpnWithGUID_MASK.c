
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int* RPC_WSTR ;
typedef scalar_t__ RPC_STATUS ;
typedef int* PBYTE ;
typedef int* LPWSTR ;
typedef int* LPCWSTR ;
typedef int LPCGUID ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int**) ;
 int FUNC_3 (int*,int*,int) ;
 scalar_t__ FUNC_4 (int ,int**) ;
 int FUNC_5 (int*) ;

LPWSTR FUNC_6(LPCGUID VAR_2, LPCWSTR VAR_3, LPCGUID VAR_4)
{
 LPWSTR VAR_5 = ((void*)0);
 RPC_STATUS VAR_6;
 RPC_WSTR VAR_7, VAR_8;
 DWORD VAR_9, VAR_10, VAR_11;
 VAR_6 = FUNC_4(VAR_2, &VAR_7);
 if(VAR_6 == VAR_1)
 {
  VAR_6 = FUNC_4(VAR_4, &VAR_8);
  if(VAR_6 == VAR_1)
  {
   VAR_9 = FUNC_5((LPWSTR) VAR_7) * sizeof(wchar_t);
   VAR_10 = FUNC_5((LPWSTR) VAR_8) * sizeof(wchar_t);
   VAR_11 = FUNC_5(VAR_3) * sizeof(wchar_t);
   if ((VAR_5 = (LPWSTR) FUNC_0(VAR_0, VAR_9 + sizeof(wchar_t) + VAR_10 + sizeof(wchar_t) + VAR_11)))
   {
    FUNC_3(VAR_5, VAR_7, VAR_9);
    FUNC_3((PBYTE) VAR_5 + VAR_9 + sizeof(wchar_t), VAR_8, VAR_10);
    ((PBYTE) VAR_5)[VAR_9] = L'/';
    FUNC_3((PBYTE) VAR_5 + VAR_9 + sizeof(wchar_t) + VAR_11 + sizeof(wchar_t), VAR_3, VAR_11);
    ((PBYTE) VAR_5)[VAR_9 + sizeof(wchar_t) + VAR_11] = L'/';
   }
   FUNC_2(&VAR_8);
  }
  else FUNC_1(L"UuidToString(i): %08x\n", VAR_6);
  FUNC_2(&VAR_7);
 }
 else FUNC_1(L"UuidToString(s): %08x\n", VAR_6);
 return VAR_5;
}
