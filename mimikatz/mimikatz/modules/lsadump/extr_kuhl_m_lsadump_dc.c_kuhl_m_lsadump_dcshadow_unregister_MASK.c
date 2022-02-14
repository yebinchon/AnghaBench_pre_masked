
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char** modv_strvals; } ;
struct TYPE_8__ {char* mod_type; TYPE_1__ mod_vals; int mod_op; int member_0; } ;
struct TYPE_7__ {int szFakeDN; int ld; int szDomainName; int szFakeFQDN; int szConfigurationNamingContext; } ;
typedef char* PWSTR ;
typedef TYPE_2__* PDCSHADOW_DOMAIN_INFO ;
typedef int NTSTATUS ;
typedef TYPE_3__ LDAPMod ;
typedef int LDAPMessage ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (char**,char*,int ,...) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 char* FUNC_5 (int ,int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,int ,TYPE_3__**) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,char*,int ,char*,int *,scalar_t__,int **) ;

NTSTATUS FUNC_10(PDCSHADOW_DOMAIN_INFO VAR_8)
{
 BOOL VAR_9 = VAR_0;
 DWORD VAR_10 = 0;
 PWSTR VAR_11, VAR_12, VAR_13, VAR_14;
 LDAPMessage* VAR_15, * VAR_16;
 PWSTR VAR_17[] = {((void*)0), ((void*)0)};
 LDAPMod VAR_18 = {0};
 LDAPMod *VAR_19[] = {&VAR_18, ((void*)0)};

 if(FUNC_2(&VAR_11, L"CN=Sites,%s", VAR_8->szConfigurationNamingContext))
 {
  if(FUNC_2(&VAR_12, L"(&(objectClass=server)(dNSHostName=%s))", VAR_8->szFakeFQDN))
  {
   VAR_10 = FUNC_9(VAR_8->ld, VAR_11, VAR_3, VAR_12, ((void*)0), VAR_0, &VAR_15);
   if(VAR_10 == VAR_4)
   {
    if(FUNC_3(VAR_8->ld, VAR_15) == 1)
    {
     if((VAR_13 = FUNC_5(VAR_8->ld, VAR_15)))
     {
      VAR_10 = FUNC_9(VAR_8->ld, VAR_13, VAR_2, L"(name=NTDS Settings)", ((void*)0), VAR_0, &VAR_16);
      if(VAR_10 == VAR_4)
      {
       if((VAR_14 = FUNC_5(VAR_8->ld, VAR_16)))
       {
        if((VAR_10 = FUNC_4(VAR_8->ld, VAR_14)) != VAR_4)
         FUNC_1(L"ldap_delete_s %s 0x%x (%u)\n", VAR_14, VAR_10, VAR_10);
        else VAR_9 = VAR_7;
        FUNC_6(VAR_14);
       }
       FUNC_8(VAR_16);
      }
      else FUNC_1(L"ldap_search_s 0x%x (%u)\n", VAR_10, VAR_10);
      if((VAR_10 = FUNC_4(VAR_8->ld, VAR_13)) != VAR_4)
       FUNC_1(L"ldap_delete_s %s 0x%x (%u)\n", VAR_13, VAR_10, VAR_10);
      FUNC_6(VAR_13);
     }
    }
    else FUNC_1(L"ldap_count_entries is NOT 1\n");
    FUNC_8(VAR_15);
   }
   else FUNC_1(L"ldap_search_s 0x%x (%u)\n", VAR_10, VAR_10);
   FUNC_0(VAR_12);
  }
  FUNC_0(VAR_11);
 }

 VAR_18.mod_op = VAR_1;
 VAR_18.mod_type = L"servicePrincipalName";
 VAR_18.mod_vals.modv_strvals = VAR_17;
 if(FUNC_2(VAR_17, L"GC/%s/%s", VAR_8->szFakeFQDN, VAR_8->szDomainName))
 {
  if((VAR_10 = FUNC_7(VAR_8->ld, VAR_8->szFakeDN, VAR_19)) != 0)
   FUNC_1(L"ldap_modify_s computer SPN 0x%x (%u)\n", VAR_10, VAR_10);
 }
 return (VAR_9?VAR_5: VAR_6);
}
