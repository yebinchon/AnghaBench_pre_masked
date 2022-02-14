
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bv_len; int bv_val; } ;
typedef char* PWCHAR ;
typedef int * PLDAPMessage ;
typedef int PCWCHAR ;
typedef TYPE_1__* PBERVAL ;
typedef int LDAP ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__**) ;
 TYPE_1__** FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ,char*,char**,int ,int **) ;
 int FUNC_7 (TYPE_1__**) ;

PWCHAR FUNC_8(PCWCHAR VAR_3, LDAP *VAR_4)
{
 DWORD VAR_5;
 PWCHAR VAR_6[] = {VAR_3 ? (PWCHAR) VAR_3 : L"rootDomainNamingContext", ((void*)0)}, VAR_7 = ((void*)0);
 PLDAPMessage VAR_8 = ((void*)0);
 PBERVAL *VAR_9;

 VAR_5 = FUNC_6(VAR_4, ((void*)0), VAR_1, L"(dn=RootDSE)", VAR_6, VAR_0, &VAR_8);
 if(VAR_5 == VAR_2)
 {
  if(FUNC_2(VAR_4, VAR_8) == 1)
  {
   if((VAR_9 = FUNC_4(VAR_4, VAR_8, VAR_6[0])))
   {
    if(FUNC_3(VAR_9) == 1)
     VAR_7 = FUNC_1(VAR_9[0]->bv_val, VAR_9[0]->bv_len);
    else FUNC_0(L"ldap_get_values_len is NOT 1\n");
    FUNC_7(VAR_9);
   }
  }
  else FUNC_0(L"ldap_count_entries is NOT 1\n");
 }
 else FUNC_0(L"ldap_search_s 0x%x (%u)\n", VAR_5, VAR_5);
 if(VAR_8)
  FUNC_5(VAR_8);
 return VAR_7;
}
