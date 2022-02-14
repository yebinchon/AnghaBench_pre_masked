
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* szDCDsServiceName; size_t dwDomainControllerFunctionality; void* szDsServiceName; void* szSchemaNamingContext; void* szConfigurationNamingContext; void* szDomainNamingContext; void* maxDCUsn; int ld; } ;
typedef char* PWCHAR ;
typedef int * PLDAPMessage ;
typedef TYPE_1__* PDCSHADOW_DOMAIN_INFO ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 char** VAR_3 ;
 int FUNC_3 (char*,size_t,...) ;
 void* FUNC_4 (int ,int *,char*) ;
 scalar_t__ FUNC_5 (void**,char*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *,int ,int *,char**,int ,int **) ;
 char* FUNC_9 (char*,char*) ;
 void* FUNC_10 (char*,int *,int) ;

BOOL FUNC_11(PDCSHADOW_DOMAIN_INFO VAR_4)
{
 DWORD VAR_5;
 PWCHAR VAR_6[] = {L"rootDomainNamingContext", L"configurationNamingContext", L"schemaNamingContext", L"dsServiceName", L"domainControllerFunctionality", L"highestCommittedUSN", ((void*)0)};
 PLDAPMessage VAR_7 = ((void*)0);
 PWCHAR VAR_8, VAR_9;

 VAR_5 = FUNC_8(VAR_4->ld, ((void*)0), VAR_1, ((void*)0), VAR_6, VAR_0, &VAR_7);
 if(VAR_5 == VAR_2)
 {
  if(FUNC_6(VAR_4->ld, VAR_7) == 1)
  {
   if((VAR_4->szDomainNamingContext = FUNC_4(VAR_4->ld, VAR_7, VAR_6[0])))
    FUNC_3(L"Domain:         %s\n", VAR_4->szDomainNamingContext);
   if((VAR_4->szConfigurationNamingContext = FUNC_4(VAR_4->ld, VAR_7, VAR_6[1])))
    FUNC_3(L"Configuration:  %s\n", VAR_4->szConfigurationNamingContext);
   if((VAR_4->szSchemaNamingContext = FUNC_4(VAR_4->ld, VAR_7, VAR_6[2])))
    FUNC_3(L"Schema:         %s\n", VAR_4->szSchemaNamingContext);
   if((VAR_4->szDCDsServiceName = FUNC_4(VAR_4->ld, VAR_7, VAR_6[3])))
   {
    VAR_9 = FUNC_9(VAR_4->szDCDsServiceName, L",CN=");
    if(VAR_9)
    {
     VAR_9 = FUNC_9(VAR_9 + 1, L",CN=");
     if(VAR_9 && (VAR_9 + 1) && FUNC_5(&VAR_4->szDsServiceName, VAR_9));
      FUNC_3(L"dsServiceName:  %s\n", VAR_4->szDsServiceName);
    }
   }
   if((VAR_8 = FUNC_4(VAR_4->ld, VAR_7, VAR_6[4])))
   {
    VAR_4->dwDomainControllerFunctionality = FUNC_10(VAR_8, ((void*)0), 10);
    FUNC_1(VAR_8);
   }
   FUNC_3(L"domainControllerFunctionality: %u ( %s )\n", VAR_4->dwDomainControllerFunctionality, (VAR_4->dwDomainControllerFunctionality < FUNC_0(VAR_3) ? VAR_3[VAR_4->dwDomainControllerFunctionality] : L"?"));
   if((VAR_8 = FUNC_4(VAR_4->ld, VAR_7, VAR_6[5])))
   {
    VAR_4->maxDCUsn = FUNC_10(VAR_8, ((void*)0), 10);
    FUNC_1(VAR_8);
   }
   FUNC_3(L"highestCommittedUSN: %u\n", VAR_4->maxDCUsn);
  }
  else FUNC_2(L"ldap_count_entries is NOT 1\n");
  FUNC_7(VAR_7);
 }
 else FUNC_2(L"ldap_search_s 0x%x (%u)\n", VAR_5, VAR_5);
 return (VAR_5 == VAR_2) && VAR_4->szDomainNamingContext && VAR_4->szConfigurationNamingContext && VAR_4->szSchemaNamingContext && VAR_4->szDsServiceName;
}
