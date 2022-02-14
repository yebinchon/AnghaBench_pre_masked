
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UNICODE_STRING ;
typedef int * PWSTR ;
typedef int * PBYTE ;
typedef scalar_t__ LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int *,int *,int ,int **,int *) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *,int **,int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__,char*,int *,int ,int *,int ,int *,int ) ;

BOOL FUNC_12(LPCWSTR VAR_5, DWORD VAR_6, PWSTR *VAR_7, PBYTE *VAR_8, PBYTE *VAR_9)
{
 BOOL VAR_10 = VAR_2;
 int VAR_11;
 wchar_t VAR_12[64 + 1] = {0}, VAR_13[64 + 1] = {0}, VAR_14[64 + 1] = {0};
 UNICODE_STRING VAR_15, VAR_16, VAR_17;
 DWORD VAR_18;

 if(VAR_5)
 {
  *VAR_7 = ((void*)0);
  *VAR_8 = ((void*)0);
  *VAR_9 = ((void*)0);

  VAR_11 = FUNC_11(VAR_5, L"%[^:]:%[^:]:%s", VAR_12, (DWORD) FUNC_0(VAR_12), VAR_13, (DWORD) FUNC_0(VAR_13), VAR_14, (DWORD) FUNC_0(VAR_14));
  if(VAR_11 > 1)
  {
   FUNC_4(&VAR_15, VAR_12);
   FUNC_5(L"Salt  : %wZ\nAES256: ", &VAR_15);
   if(FUNC_10(VAR_13) != (VAR_1 * 2))
   {
    FUNC_4(&VAR_16, VAR_13);
    FUNC_5(L"(password - %wZ) ", &VAR_16);
    FUNC_6(VAR_4, &VAR_16, &VAR_15, VAR_6, VAR_8, &VAR_18);
   }
   else
   {
    FUNC_5(L"(hex) ");
    if(!FUNC_8(VAR_13, VAR_8, &VAR_18))
     FUNC_2(L"kull_m_string_stringToHexBuffer(AES256)\n");
   }
   if(*VAR_8)
   {
    FUNC_9(*VAR_8, VAR_18, 0);
    FUNC_5(L"\n");
    if((VAR_10 = FUNC_7(VAR_7, VAR_12)))
    {
     if(VAR_11 > 2)
     {
      FUNC_5(L"AES128: ");
      if(FUNC_10(VAR_14) != (VAR_0 * 2))
      {
       FUNC_4(&VAR_17, VAR_14);
       FUNC_5(L"(password - %wZ) ", &VAR_17);
       FUNC_6(VAR_3, &VAR_17, &VAR_15, VAR_6, VAR_9, &VAR_18);
      }
      else
      {
       FUNC_5(L"(hex) ");
       if(!FUNC_8(VAR_14, VAR_9, &VAR_18))
        FUNC_2(L"kull_m_string_stringToHexBuffer(AES128)\n");
      }
      if(*VAR_9)
      {
       FUNC_9(*VAR_9, VAR_18, 0);
       FUNC_5(L"\n");
      }
     }
    }
    else
    {
     *VAR_8 = (PBYTE) FUNC_1(*VAR_8);
     FUNC_3(L"kull_m_string_copy");
    }
   }
  }
  else FUNC_2(L"Error when parsing argument: %s (ret: %i)\n", VAR_5, VAR_11);
 }
 else FUNC_2(L"NULL arg\n");
 return VAR_10;
}
