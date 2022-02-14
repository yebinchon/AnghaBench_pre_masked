
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char** modv_strvals; } ;
struct TYPE_9__ {char* mod_type; TYPE_1__ mod_vals; void* mod_op; int member_0; } ;
struct TYPE_8__ {char* szFakeFQDN; char* szFakeDN; char* szFakeDCNetBIOS; int ld; int szDomainName; int szDsServiceName; } ;
typedef char* PWSTR ;
typedef TYPE_2__* PDCSHADOW_DOMAIN_INFO ;
typedef TYPE_3__ LDAPMod ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char**,char*,char*,int ) ;
 int FUNC_3 (int ,char*,TYPE_3__**) ;
 int FUNC_4 (int ,char*,TYPE_3__**) ;

BOOL FUNC_5(PDCSHADOW_DOMAIN_INFO VAR_3)
{
 BOOL VAR_4 = VAR_0;
 DWORD VAR_5 = 0;
 LDAPMod VAR_6 = {0};
 LDAPMod VAR_7 = {0};
 LDAPMod VAR_8 = {0};
 LDAPMod *VAR_9[] = {&VAR_6, &VAR_7, &VAR_8, ((void*)0)};
 PWSTR VAR_10;
 PWSTR VAR_11[] = {L"server", ((void*)0)};
 PWSTR VAR_12[] = {VAR_3->szFakeFQDN, ((void*)0)};
 PWSTR VAR_13[] = {VAR_3->szFakeDN, ((void*)0)};
 PWSTR VAR_14[] = {((void*)0), ((void*)0)};
 LDAPMod VAR_15 = {0};
 LDAPMod *VAR_16[] = {&VAR_15, ((void*)0)};


 VAR_6.mod_op = VAR_1;
 VAR_6.mod_type = L"objectClass";
 VAR_6.mod_vals.modv_strvals = VAR_11;
 VAR_7.mod_op = VAR_1;
 VAR_7.mod_type = L"dNSHostName";
 VAR_7.mod_vals.modv_strvals = VAR_12;
 VAR_8.mod_op = VAR_1;
 VAR_8.mod_type = L"serverReference";
 VAR_8.mod_vals.modv_strvals = VAR_13;

 VAR_15.mod_op = VAR_1;
 VAR_15.mod_type = L"servicePrincipalName";
 VAR_15.mod_vals.modv_strvals = VAR_14;

 if(FUNC_2(&VAR_10, L"CN=%s%s", VAR_3->szFakeDCNetBIOS, VAR_3->szDsServiceName))
 {
  if(FUNC_2(VAR_14, L"GC/%s/%s", VAR_3->szFakeFQDN, VAR_3->szDomainName))
  {
   if(!(VAR_5 = FUNC_3(VAR_3->ld, VAR_10, VAR_9)))
   {
    if(!(VAR_5 = FUNC_4(VAR_3->ld, VAR_3->szFakeDN, VAR_16)))
     VAR_4 = VAR_2;
    else FUNC_1(L"ldap_modify_s computer SPN 0x%x (%u)\n", VAR_5, VAR_5);
   }
   else FUNC_1(L"ldap_add_s computer object 0x%x (%u)\n", VAR_5, VAR_5);
   FUNC_0(VAR_14[0]);
  }
  FUNC_0(VAR_10);
 }
 return VAR_4;
}
