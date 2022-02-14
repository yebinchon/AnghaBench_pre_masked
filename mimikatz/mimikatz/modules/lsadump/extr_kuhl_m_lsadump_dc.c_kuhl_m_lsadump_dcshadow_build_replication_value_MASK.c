
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int valCount; int * pAVal; } ;
struct TYPE_7__ {int* pszValue; TYPE_2__* pAttribute; TYPE_1__ AttrVal; } ;
struct TYPE_6__ {int dwSyntax; scalar_t__ szAttributeName; } ;
typedef TYPE_3__* PDCSHADOW_PUSH_REQUEST_OBJECT_ATTRIBUTE ;
typedef size_t DWORD ;
typedef int (* DCSHADOW_SYNTAX_ENCODER ) (int *,int) ;
typedef int BOOL ;
typedef int ATTRVAL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;

BOOL FUNC_13(PDCSHADOW_PUSH_REQUEST_OBJECT_ATTRIBUTE VAR_2)
{
 DWORD VAR_3;
 DCSHADOW_SYNTAX_ENCODER VAR_4 = ((void*)0);

 VAR_2->AttrVal.pAVal = (ATTRVAL*) FUNC_0(sizeof(ATTRVAL) * VAR_2->AttrVal.valCount);
 if(!VAR_2->AttrVal.pAVal)
  return VAR_0;

 if(VAR_2->pAttribute->szAttributeName)
 {
  if(!FUNC_2(VAR_2->pAttribute->szAttributeName, L"supplementalCredentials"))
   VAR_4 = FUNC_11;
 }

 if(!VAR_4)
 {
  switch (VAR_2->pAttribute->dwSyntax)
  {
  case 128:
   VAR_4 = FUNC_12;
   break;
  case 131:
   VAR_4 = FUNC_7;
   break;
  case 136:
   VAR_4 = FUNC_4;
   break;
  case 134:
   VAR_4 = FUNC_5;
   break;
  case 133:
   VAR_4 = FUNC_6;
   break;
  case 129:
   VAR_4 = FUNC_10;
   break;
  case 132:
   VAR_4 = FUNC_9;
   break;
  case 135:
   VAR_4 = FUNC_3;
   break;
  case 130:
   VAR_4 = FUNC_8;
   break;
  default:
   FUNC_1(L"Syntax for attribute %s not implemented (0x%x)", VAR_2->pAttribute->szAttributeName, VAR_2->pAttribute->dwSyntax);
   return VAR_0;
  }
 }
 for(VAR_3 = 0; VAR_3 < VAR_2->AttrVal.valCount; VAR_3++)
 {
  if(!VAR_4(VAR_2->AttrVal.pAVal + VAR_3, VAR_2->pszValue[VAR_3]))
  {
   FUNC_1(L"Unable to encode %s (%s)", VAR_2->pAttribute->szAttributeName, VAR_2->pszValue[VAR_3]);
   return VAR_0;
  }
 }
 return VAR_1;
}
