
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_13__ {char* szAttributeName; int fIsSensitive; } ;
struct TYPE_12__ {size_t cNumAttributes; size_t cNumObjects; TYPE_4__* pAttributes; TYPE_2__* pObjects; } ;
struct TYPE_11__ {size_t cbAttributes; TYPE_1__* pAttributes; } ;
struct TYPE_10__ {TYPE_4__* pAttribute; } ;
typedef TYPE_3__* PDCSHADOW_PUSH_REQUEST ;
typedef TYPE_4__* PDCSHADOW_OBJECT_ATTRIBUTE ;
typedef char* PCWSTR ;
typedef size_t DWORD ;
typedef int DCSHADOW_OBJECT_ATTRIBUTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char**,char*) ;

BOOL FUNC_5(PDCSHADOW_PUSH_REQUEST VAR_3, PCWSTR VAR_4, PDCSHADOW_OBJECT_ATTRIBUTE *VAR_5)
{
 DWORD VAR_6, VAR_7;
 PDCSHADOW_OBJECT_ATTRIBUTE VAR_8;
 ULONG_PTR VAR_9;

 for(VAR_6 = 0; VAR_6 < VAR_3->cNumAttributes; VAR_6++)
 {
  if(!FUNC_3(VAR_3->pAttributes[VAR_6].szAttributeName, VAR_4))
  {
   *VAR_5 = VAR_3->pAttributes + VAR_6;
   return VAR_2;
  }
 }

 VAR_8 = VAR_3->pAttributes;
 VAR_3->pAttributes = (PDCSHADOW_OBJECT_ATTRIBUTE) FUNC_0(VAR_1, sizeof(DCSHADOW_OBJECT_ATTRIBUTE) * (VAR_3->cNumAttributes+1));
 if(!VAR_3->pAttributes)
 {
  VAR_3->pAttributes = VAR_8;
  return VAR_0;
 }
 FUNC_2(VAR_3->pAttributes, VAR_8, sizeof(DCSHADOW_OBJECT_ATTRIBUTE) * VAR_3->cNumAttributes);
 if(VAR_8)
  FUNC_1(VAR_8);
 VAR_9 = (ULONG_PTR) VAR_3->pAttributes - (ULONG_PTR) VAR_8;
 for(VAR_6 = 0; VAR_6 < VAR_3->cNumObjects; VAR_6++)
  for(VAR_7 = 0; VAR_7 < VAR_3->pObjects[VAR_6].cbAttributes; VAR_7++)
   VAR_3->pObjects[VAR_6].pAttributes[VAR_7].pAttribute = (PDCSHADOW_OBJECT_ATTRIBUTE) ((ULONG_PTR) VAR_3->pObjects[VAR_6].pAttributes[VAR_7].pAttribute + VAR_9);
 *VAR_5 = VAR_3->pAttributes + VAR_3->cNumAttributes;

 if(!FUNC_4(&((*VAR_5)->szAttributeName), VAR_4))
  return VAR_0;

 VAR_3->cNumAttributes++;
 if(FUNC_3(VAR_4, L"unicodePwd") == 0 ||
  FUNC_3(VAR_4, L"currentValue") == 0 ||
  FUNC_3(VAR_4, L"dBCSPwd") == 0 ||
  FUNC_3(VAR_4, L"initialAuthIncoming") == 0 ||
  FUNC_3(VAR_4, L"lmPwdHistory") == 0 ||
  FUNC_3(VAR_4, L"ntPwdHistory") == 0 ||
  FUNC_3(VAR_4, L"priorValue") == 0 ||
  FUNC_3(VAR_4, L"supplementalCredentials") == 0 ||
  FUNC_3(VAR_4, L"trustAuthIncoming") == 0 ||
  FUNC_3(VAR_4, L"trustAuthOutgoing") == 0)
 {
  (*VAR_5)->fIsSensitive = VAR_2;
 }
 return VAR_2;
}
