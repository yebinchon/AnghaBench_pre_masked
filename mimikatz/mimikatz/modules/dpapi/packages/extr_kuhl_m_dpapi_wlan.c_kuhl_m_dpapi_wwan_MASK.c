
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
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (scalar_t__,int,int *,int,int **,int *,int ,int *,int*,int *) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,scalar_t__*,int*) ;
 scalar_t__ FUNC_7 (int,int **,char*,int *,int *) ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (scalar_t__,char*,scalar_t__*) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__*,int*) ;
 int FUNC_11 (scalar_t__,int,int ) ;

NTSTATUS FUNC_12(int VAR_1, wchar_t * VAR_2[])
{
 PBYTE VAR_3, VAR_4, VAR_5;
 DWORD VAR_6, VAR_7, VAR_8;
 LPWSTR VAR_9, VAR_10;
 LPCWSTR VAR_11;

 if(FUNC_7(VAR_1, VAR_2, L"in", &VAR_11, ((void*)0)))
 {
  if(FUNC_6(VAR_11, &VAR_3, &VAR_6))
  {
   if((VAR_9 = FUNC_8((const char *) VAR_3)))
   {
    if(FUNC_9(VAR_9, L"Name", &VAR_10))
    {
     FUNC_3(L"Profile \'%s\'\n\n", VAR_10);
     FUNC_0(VAR_10);
    }
    if(FUNC_9(VAR_9, L"AccessString", &VAR_10))
    {
     FUNC_3(L" * AccessString    : %s\n", VAR_10);
     FUNC_0(VAR_10);
    }
    if(FUNC_9(VAR_9, L"SubscriberID", &VAR_10))
    {
     if(FUNC_10(VAR_10, &VAR_4, &VAR_7))
     {
      FUNC_3(L"\n");
      FUNC_5(0, VAR_4);
      if(FUNC_4(VAR_4, VAR_7, ((void*)0), VAR_1, VAR_2, ((void*)0), 0, (LPVOID *) &VAR_5, &VAR_8, ((void*)0)))
      {
       FUNC_3(L" * SubscriberID  : ");
       FUNC_11(VAR_5, VAR_8, 0);
       FUNC_3(L"\n");
       FUNC_3(L"%.*s", VAR_8 / sizeof(wchar_t), VAR_5);
       FUNC_0(VAR_5);
      }
      FUNC_0(VAR_4);
     }
     FUNC_0(VAR_10);
    }
    FUNC_0(VAR_9);
   }
   FUNC_0(VAR_3);
  }
  else FUNC_2(L"kull_m_file_readData");
 }
 else FUNC_1(L"Input Wwan XML profile needed (/in:file)\n");
 return VAR_0;
}
