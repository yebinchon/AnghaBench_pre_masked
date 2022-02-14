
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PWSTR ;
typedef int PBYTE ;
typedef char* LPCWSTR ;
typedef int LPCBYTE ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMDocument ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,int **,int ,int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int *,char*) ;

BOOL FUNC_7(int VAR_1, wchar_t * VAR_2[], IXMLDOMDocument *VAR_3, IXMLDOMNode *VAR_4, LPCWSTR VAR_5, LPCBYTE VAR_6, DWORD VAR_7)
{
 BOOL VAR_8 = VAR_0, VAR_9 = VAR_0;
 PWSTR VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 PBYTE VAR_15;
 DWORD VAR_16;

 if((VAR_10 = FUNC_6(VAR_4, L"name")))
 {
  if((VAR_8 = FUNC_2(VAR_10, VAR_5) == 0))
  {
   if((VAR_11 = FUNC_6(VAR_4, L"type")))
   {
    if(FUNC_2(VAR_11, L"Microsoft.ApplicationHost.AesProtectedConfigurationProvider") == 0)
    {
     if((VAR_12 = FUNC_6(VAR_4, L"keyContainerName")))
     {
      FUNC_3(L"  | KeyName   : %s\n", VAR_12);
      if((VAR_14 = FUNC_6(VAR_4, L"sessionKey")))
      {

       if((VAR_13 = FUNC_6(VAR_4, L"useMachineContainer")))
       {
        VAR_9 = (FUNC_2(VAR_13, L"true") == 0);
        FUNC_0(VAR_13);
       }
       if(FUNC_5(VAR_14, &VAR_15, &VAR_16))
       {
        FUNC_4(VAR_1, VAR_2, VAR_12, VAR_9, VAR_15, VAR_16, VAR_6, VAR_7);
        FUNC_0(VAR_15);
       }
       FUNC_0(VAR_14);
      }
      FUNC_0(VAR_12);
     }
    }
    else
    {
     FUNC_1(L"type is not supported (%s)\n", VAR_11);
    }
    FUNC_0(VAR_11);
   }
   else
   {

   }
  }
  FUNC_0(VAR_10);
 }
 return VAR_8;
}
