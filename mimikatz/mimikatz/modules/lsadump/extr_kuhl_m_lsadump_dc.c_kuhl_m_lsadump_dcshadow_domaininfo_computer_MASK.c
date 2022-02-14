
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ szFakeDN; scalar_t__ szFakeFQDN; int ld; int szDomainNamingContext; int szFakeDCNetBIOS; } ;
typedef char* PWSTR ;
typedef TYPE_1__* PDCSHADOW_DOMAIN_INFO ;
typedef int LDAPMessage ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (scalar_t__*,char*) ;
 scalar_t__ FUNC_3 (char**,char*,int ) ;
 char* FUNC_4 (int ,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ,char*,char**,int ,int **) ;

BOOL FUNC_8(PDCSHADOW_DOMAIN_INFO VAR_2)
{
 DWORD VAR_3;
 PWSTR VAR_4, VAR_5;
 PWSTR VAR_6[] = {L"distinguishedName",L"userAccountControl", L"dNSHostName", ((void*)0)};
 LDAPMessage *VAR_7 = ((void*)0);

 if(FUNC_3(&VAR_4, L"(&(|(objectClass=user)(objectClass=computer))(sAMAccountName=%s$))", VAR_2->szFakeDCNetBIOS))
 {

  if(!(VAR_3 = FUNC_7(VAR_2->ld, VAR_2->szDomainNamingContext, VAR_1, VAR_4, VAR_6, VAR_0, &VAR_7)))
  {
   VAR_5 = FUNC_4(VAR_2->ld,VAR_7);
   FUNC_2(&VAR_2->szFakeDN, VAR_5);
   FUNC_5(VAR_5);
   VAR_2->szFakeFQDN = FUNC_1(VAR_2->ld, VAR_7, L"dNSHostName");
   FUNC_6(VAR_7);
  }
  else FUNC_0(L"computer not found in AD 0x%x (%u)\n", VAR_3, VAR_3);
 }
 return VAR_2->szFakeFQDN && VAR_2->szFakeDN;
}
