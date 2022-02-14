
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ld; int szSchemaNamingContext; } ;
struct TYPE_6__ {size_t valCount; } ;
struct TYPE_7__ {char** pszValue; TYPE_1__ AttrVal; } ;
typedef char* PWSTR ;
typedef TYPE_2__* PDCSHADOW_PUSH_REQUEST_OBJECT_ATTRIBUTE ;
typedef TYPE_3__* PDCSHADOW_DOMAIN_INFO ;
typedef int LDAPMessage ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 char* FUNC_2 (int ,int *,char*) ;
 scalar_t__ FUNC_3 (char**,char*,char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (int ,int ,int ,char*,char**,int ,int **) ;

BOOL FUNC_7(PDCSHADOW_DOMAIN_INFO VAR_3, PDCSHADOW_PUSH_REQUEST_OBJECT_ATTRIBUTE VAR_4)
{
 BOOL VAR_5 = VAR_0;
 DWORD VAR_6, VAR_7;
 PWSTR VAR_8, VAR_9, VAR_10[] = {L"governsID", ((void*)0)};
 LDAPMessage *VAR_11 = ((void*)0);

 for(VAR_6 = 0; VAR_6< VAR_4->AttrVal.valCount; VAR_6++)
 {
  VAR_5 = VAR_0;
  if(FUNC_3(&VAR_8, L"(&(objectClass=classSchema)(lDAPDisplayName=%s))", VAR_4->pszValue[VAR_6]))
  {
   if(!(VAR_7 = FUNC_6(VAR_3->ld, VAR_3->szSchemaNamingContext, VAR_1, VAR_8, VAR_10, VAR_0, &VAR_11)))
   {
    if(FUNC_4(VAR_3->ld, VAR_11) == 1)
    {
     VAR_9 = FUNC_2(VAR_3->ld, VAR_11, VAR_10[0]);
     if(VAR_9)
     {
      FUNC_0(VAR_4->pszValue[VAR_6]);
      VAR_4->pszValue[VAR_6] = VAR_9;
      VAR_5 = VAR_2;
     }
    }
    else FUNC_1(L"objectClass %s not found in AD\n", VAR_4->pszValue[VAR_6]);
    FUNC_5(VAR_11);
   }
   else FUNC_1(L"objectClass not found in AD 0x%x (%u)\n", VAR_7, VAR_7);
  }
  if (!VAR_5)
   break;
 }
 return VAR_5;
}
