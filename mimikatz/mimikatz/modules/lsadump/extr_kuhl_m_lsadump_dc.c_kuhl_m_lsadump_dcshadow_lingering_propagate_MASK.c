
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* szConfigurationNamingContext; int ld; int szDCDsServiceName; int szDCFQDN; } ;
typedef char* PWSTR ;
typedef int * PLDAPMessage ;
typedef TYPE_1__* PDCSHADOW_DOMAIN_INFO ;
typedef scalar_t__ NTSTATUS ;
typedef int LDAP ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (int ,int *,char*) ;
 scalar_t__ FUNC_5 (char*,int **) ;
 scalar_t__ FUNC_6 (int *,int ,char*) ;
 char* FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,char*,int ,char*,char**,int ,int **) ;
 int FUNC_11 (int *) ;
 char* FUNC_12 (char*,char*) ;

NTSTATUS FUNC_13(PDCSHADOW_DOMAIN_INFO VAR_4, PWSTR VAR_5)
{
 DWORD VAR_6;
 PLDAPMessage VAR_7 = ((void*)0), VAR_8, VAR_9;
 PWSTR VAR_10;
 PWSTR VAR_11, VAR_12;
 LDAP* VAR_13;
 PWSTR VAR_14[] = {L"dNSHostName", ((void*)0)};
 VAR_6 = FUNC_10(VAR_4->ld, VAR_4->szConfigurationNamingContext, VAR_2, L"(objectClass=nTDSDSA)", ((void*)0), VAR_0, &VAR_7);
 if(VAR_6 == VAR_3)
 {
  VAR_8 = VAR_7;
  while(VAR_8 != ((void*)0))
  {
   VAR_10 = FUNC_7(VAR_4->ld, VAR_8);
   VAR_11 = FUNC_12(VAR_10, L",CN=") + 1;
   VAR_6 = FUNC_10(VAR_4->ld, VAR_11, VAR_1, ((void*)0), VAR_14, VAR_0, &VAR_9);
   if(VAR_6 == VAR_3)
   {
    VAR_12 = FUNC_4(VAR_4->ld, VAR_9, VAR_14[0]);
    if (VAR_12 && FUNC_2(VAR_12, VAR_4->szDCFQDN) != 0)
    {
     FUNC_3(L"  * %s\n", VAR_12);
     if (!(VAR_6 = FUNC_5(VAR_12, &VAR_13)))
     {
      VAR_6 = FUNC_6(VAR_13, VAR_4->szDCDsServiceName, VAR_5);
      if (VAR_6)
       FUNC_1(L"trigger lingering for %s 0x%x (%u)\n", VAR_12, VAR_6, VAR_6);
      FUNC_11(VAR_13);
     }
     else FUNC_1(L"ldap_connect 0x%x (%u)\n", VAR_6, VAR_6);
     FUNC_0(VAR_12);
    }
    FUNC_8(VAR_9);
   }

   VAR_8 = FUNC_9(VAR_4->ld, VAR_8);
  }
  FUNC_8(VAR_7);
 }
 return VAR_6;
}
