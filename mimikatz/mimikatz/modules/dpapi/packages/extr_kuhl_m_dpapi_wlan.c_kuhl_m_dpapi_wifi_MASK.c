
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ PBYTE ;
typedef int NTSTATUS ;
typedef scalar_t__ LPWSTR ;
typedef int LPVOID ;
typedef int LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int *,int,int **,int *,int ,int *,int *,int *) ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_8 (int,int **,char*,int *,int *) ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (scalar_t__,char*,scalar_t__*) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__*,int *) ;
 int FUNC_12 (scalar_t__,int ,int ) ;

NTSTATUS FUNC_13(int VAR_1, wchar_t * VAR_2[])
{
 PBYTE VAR_3, VAR_4, VAR_5;
 DWORD VAR_6, VAR_7, VAR_8;
 LPWSTR VAR_9, VAR_10, VAR_11, VAR_12;
 LPCWSTR VAR_13;

 if(FUNC_8(VAR_1, VAR_2, L"in", &VAR_13, ((void*)0)))
 {
  if(FUNC_7(VAR_13, &VAR_3, &VAR_6))
  {
   if((VAR_9 = FUNC_9((const char *) VAR_3)))
   {
    if(FUNC_10(VAR_9, L"name", &VAR_11))
    {
     FUNC_4(L"Profile \'%s\'\n\n", VAR_11);
     FUNC_0(VAR_11);
    }
    if(FUNC_10(VAR_9, L"SSID", &VAR_10))
    {
     FUNC_4(L" * SSID ");
     if(FUNC_10(VAR_10, L"name", &VAR_11))
     {
      FUNC_4(L"name     : %s\n", VAR_11);
      FUNC_0(VAR_11);
     }
     else if(FUNC_10(VAR_10, L"hex", &VAR_11))
     {
      FUNC_4(L"hex      : %s\n", VAR_11);
      FUNC_0(VAR_11);
     }
     else FUNC_4(L"?\n");
     FUNC_0(VAR_10);
    }
    if(FUNC_10(VAR_9, L"authentication", &VAR_12))
    {
     FUNC_4(L" * Authentication: %s\n", VAR_12);
     if(FUNC_10(VAR_9, L"encryption", &VAR_11))
     {
      FUNC_4(L" * Encryption    : %s\n", VAR_11);
      FUNC_0(VAR_11);
     }
     if(FUNC_10(VAR_9, L"keyMaterial", &VAR_11))
     {
      if(FUNC_11(VAR_11, &VAR_4, &VAR_7))
      {
       FUNC_4(L"\n");
       FUNC_6(0, VAR_4);
       if(FUNC_5(VAR_4, VAR_7, ((void*)0), VAR_1, VAR_2, ((void*)0), 0, (LPVOID *) &VAR_5, &VAR_8, ((void*)0)))
       {
        FUNC_4(L" * Key Material  : ");
        if(FUNC_3(VAR_12, L"WEP") == 0)
        {
         FUNC_4(L"(hex) ");
         FUNC_12(VAR_5, VAR_8, 0);
        }
        else
         FUNC_4(L"%.*S", VAR_8, VAR_5);
        FUNC_4(L"\n");
        FUNC_0(VAR_5);
       }
       FUNC_0(VAR_4);
      }
      FUNC_0(VAR_11);
     }
     FUNC_0(VAR_12);
    }
    FUNC_0(VAR_9);
   }
   FUNC_0(VAR_3);
  }
  else FUNC_2(L"kull_m_file_readData");
 }
 else FUNC_1(L"Input Wlan XML profile needed (/in:file)\n");
 return VAR_0;
}
