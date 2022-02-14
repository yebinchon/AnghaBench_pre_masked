
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * SC_HANDLE ;
typedef int PCWSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ,int,int ,int ,int ,int ,int *,int *,int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int * FUNC_3 (int *,int ,int) ;
 int * FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int *,int ,int *) ;
 int VAR_9 ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (int *) ;

BOOL FUNC_9(PCWSTR VAR_10, PCWSTR VAR_11, PCWSTR VAR_12, DWORD VAR_13, DWORD VAR_14, BOOL VAR_15)
{
 BOOL VAR_16 = VAR_2;
 SC_HANDLE VAR_17 = ((void*)0), VAR_18 = ((void*)0);

 if((VAR_17 = FUNC_3(((void*)0), VAR_6, VAR_4 | VAR_5)))
 {
  if((VAR_18 = FUNC_4(VAR_17, VAR_10, VAR_8)))
  {
   FUNC_7(L"[+] \'%s\' service already registered\n", VAR_10);
  }
  else
  {
   if(FUNC_2() == VAR_1)
   {
    FUNC_7(L"[*] \'%s\' service not present\n", VAR_10);
    if((VAR_18 = FUNC_1(VAR_17, VAR_10, VAR_11, VAR_3 | VAR_9 | VAR_8, VAR_13, VAR_14, VAR_7, VAR_12, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0))))
    {
     FUNC_7(L"[+] \'%s\' service successfully registered\n", VAR_10);
     if((VAR_16 = FUNC_8(VAR_18)))
      FUNC_7(L"[+] \'%s\' service ACL to everyone\n", VAR_10);
     else FUNC_5(L"kull_m_service_addWorldToSD");
    }
    else FUNC_5(L"CreateService");
   }
   else FUNC_5(L"OpenService");
  }
  if(VAR_18)
  {
   if(VAR_15)
   {
    if((VAR_16 = FUNC_6(VAR_18, 0, ((void*)0))))
     FUNC_7(L"[+] \'%s\' service started\n", VAR_10);
    else if(FUNC_2() == VAR_0)
     FUNC_7(L"[*] \'%s\' service already started\n", VAR_10);
    else FUNC_5(L"StartService");
   }
   FUNC_0(VAR_18);
  }
  FUNC_0(VAR_17);
 }
 else FUNC_5(L"OpenSCManager(create)");
 return VAR_16;
}
