
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int length; int* value; } ;
struct TYPE_8__ {int ld; int szConfigurationNamingContext; } ;
struct TYPE_7__ {int dwSyntax; int Oid; int szAttributeName; } ;
typedef int PWCHAR ;
typedef char* PSTR ;
typedef int * PLDAPMessage ;
typedef TYPE_1__* PDCSHADOW_OBJECT_ATTRIBUTE ;
typedef TYPE_2__* PDCSHADOW_DOMAIN_INFO ;
typedef TYPE_3__ OssEncodedOID ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,char*) ;
 scalar_t__ FUNC_4 (char*,TYPE_3__*) ;
 int FUNC_5 (int*) ;
 scalar_t__ FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int ,int *) ;
 char** FUNC_8 (int ,int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int ,int ,int *,int ,int **) ;
 int FUNC_11 (char**) ;
 int FUNC_12 (char*,int *,int) ;

BOOL FUNC_13(PDCSHADOW_DOMAIN_INFO VAR_3, PDCSHADOW_OBJECT_ATTRIBUTE VAR_4)
{
 DWORD VAR_5;
 PWCHAR VAR_6;
 PLDAPMessage VAR_7 = ((void*)0);
 PSTR VAR_8[] = {"attributeID", "attributeSyntax", "systemFlags", ((void*)0)}, *VAR_9, *VAR_10;
 OssEncodedOID VAR_11;

 VAR_4->dwSyntax = 0;
 if(FUNC_6(&VAR_6, L"(&(objectclass=attributeSchema)(lDAPDisplayName=%s))", VAR_4->szAttributeName))
 {
  VAR_5 = FUNC_10(VAR_3->ld, VAR_3->szConfigurationNamingContext, VAR_1, VAR_6, ((void*)0), VAR_0, &VAR_7);
  if(VAR_5 == VAR_2)
  {
   if(FUNC_7(VAR_3->ld, VAR_7) == 1)
   {
    if(VAR_4->Oid)
     FUNC_0(VAR_4->Oid);
    VAR_4->Oid = FUNC_3(VAR_3->ld, VAR_7, VAR_8[0]);
    VAR_9 = FUNC_8(VAR_3->ld, VAR_7, VAR_8[1]);
    if(VAR_9)
    {
     if(FUNC_4(*VAR_9, &VAR_11))
     {
      if(VAR_11.length == 3)
       VAR_4->dwSyntax = (VAR_11.value[0] << 16) + (VAR_11.value[1] << 8) + VAR_11.value[2];
      else FUNC_1(L"oid is invalid %S\n", VAR_9);
      FUNC_5(VAR_11.value);
     }
     FUNC_11(VAR_9);
    }
    VAR_10 = FUNC_8(VAR_3->ld, VAR_7, VAR_8[2]);
    if(VAR_10)
    {
     DWORD VAR_12 = FUNC_12(*VAR_10, ((void*)0), 10);
     if(VAR_12 & 1)
      FUNC_2(L" FLAG_ATTR_NOT_REPLICATED\n");
     if(VAR_12 & 4)
      FUNC_2(L" FLAG_ATTR_IS_CONSTRUCTED\n");
     FUNC_11(VAR_10);
    }
   }
   else FUNC_1(L"attribute does not exist\n");
   FUNC_9(VAR_7);
  }
  else FUNC_1(L"ldap_search_s 0x%x (%u)\n", VAR_5, VAR_5);
  FUNC_0(VAR_6);
 }
 return VAR_4->dwSyntax != 0;
}
