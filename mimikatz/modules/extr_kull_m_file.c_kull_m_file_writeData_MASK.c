
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PCWCHAR ;
typedef int * LPWSTR ;
typedef scalar_t__ LPCVOID ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int const*,int,int ,int *,int*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int,int*,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (char*,...) ;

BOOL FUNC_8(PCWCHAR VAR_7, LPCVOID VAR_8, DWORD VAR_9)
{
 BOOL VAR_10 = VAR_2;
 DWORD VAR_11 = 0, VAR_12;
 HANDLE VAR_13 = ((void*)0);
 LPWSTR VAR_14;

 if(VAR_6)
 {
  if(FUNC_2((const BYTE *) VAR_8, VAR_9, VAR_1, ((void*)0), &VAR_11))
  {
   if((VAR_14 = (LPWSTR) FUNC_4(VAR_5, VAR_11 * sizeof(wchar_t))))
   {
    if((VAR_10 = FUNC_2((const BYTE *) VAR_8, VAR_9, VAR_1, VAR_14, &VAR_11)))
    {
     FUNC_7(L"\n====================\nBase64 of file : %s\n====================\n", VAR_7);
     for(VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
      FUNC_7(L"%c", VAR_14[VAR_12]);
     FUNC_7(L"====================\n");
    }
    FUNC_5(VAR_14);
   }
  }
 }
 else if((VAR_13 = FUNC_1(VAR_7, VAR_3, 0, ((void*)0), VAR_0, 0, ((void*)0))) && VAR_13 != VAR_4)
 {
  if(FUNC_6(VAR_13, VAR_8, VAR_9, &VAR_11, ((void*)0)) && (VAR_9 == VAR_11))
   VAR_10 = FUNC_3(VAR_13);
  FUNC_0(VAR_13);
 }
 return VAR_10;
}
