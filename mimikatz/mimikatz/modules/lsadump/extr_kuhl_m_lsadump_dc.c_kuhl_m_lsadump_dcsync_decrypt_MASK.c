
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PBYTE ;
typedef int LPCWSTR ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,int*,int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,int,int ) ;

BOOL FUNC_5(PBYTE VAR_2, DWORD VAR_3, DWORD VAR_4, LPCWSTR VAR_5, BOOL VAR_6)
{
 DWORD VAR_7;
 BOOL VAR_8 = VAR_0;
 BYTE VAR_9[VAR_1];
 for(VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += VAR_1)
 {
  VAR_8 = FUNC_0(FUNC_2(VAR_2 + VAR_7, &VAR_4, VAR_9));
  if(VAR_8)
  {
   if(VAR_6)
    FUNC_3(L"    %s-%2u: ", VAR_5, VAR_7 / VAR_1);
   else
    FUNC_3(L"  Hash %s: ", VAR_5);
   FUNC_4(VAR_9, VAR_1, 0);
   FUNC_3(L"\n");
  }
  else FUNC_1(L"RtlDecryptDES2blocks1DWORD");
 }
 return VAR_8;
}
