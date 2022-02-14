
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int SID_NAME_USE ;
typedef int PWSTR ;
typedef int PSID ;
typedef int * PCWCHAR ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (int,int **,char*,int **,int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *,int *,int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *,int *,int *,int *) ;
 int FUNC_10 (int ) ;

NTSTATUS FUNC_11(int VAR_1, wchar_t * VAR_2[])
{
 PWSTR VAR_3, VAR_4;
 PSID VAR_5;
 SID_NAME_USE VAR_6;
 PCWCHAR VAR_7, VAR_8 = ((void*)0);
 FUNC_6(VAR_1, VAR_2, L"system", &VAR_8, ((void*)0));

 if(FUNC_6(VAR_1, VAR_2, L"sid", &VAR_7, ((void*)0)))
 {
  if(FUNC_0(VAR_7, &VAR_5))
  {
   FUNC_5(L"SID   : %s\n", VAR_7);
   if(FUNC_1(VAR_5))
   {
    if(FUNC_8(VAR_5, &VAR_3, &VAR_4, &VAR_6, VAR_8))
    {
     FUNC_5(L"Type  : %s\n"
      L"Domain: %s\n"
      L"Name  : %s\n", FUNC_10(VAR_6), VAR_4, VAR_3);
     FUNC_2(VAR_3);
     FUNC_2(VAR_4);
    }
    else FUNC_4(L"kull_m_token_getNameDomainFromSID");
   }
   else FUNC_3(L"Invalid SID\n");
   FUNC_2(VAR_5);
  }
  else FUNC_4(L"ConvertStringSidToSid");
 }
 else if(FUNC_6(VAR_1, VAR_2, L"name", &VAR_7, ((void*)0)))
 {
  FUNC_5(L"Name  : %s\n", VAR_7);
  if(FUNC_9(VAR_7, &VAR_5, &VAR_4, &VAR_6, VAR_8))
  {
   FUNC_5(L"Type  : %s\n"
    L"Domain: %s\n"
    L"SID   : ", FUNC_10(VAR_6), VAR_4);
   FUNC_7(VAR_5);
   FUNC_5(L"\n");
   FUNC_2(VAR_5);
   FUNC_2(VAR_4);
  }
  else FUNC_4(L"kull_m_token_getSidDomainFromName");
 }
 else FUNC_3(L"/sid or /name is missing\n");

 return VAR_0;
}
