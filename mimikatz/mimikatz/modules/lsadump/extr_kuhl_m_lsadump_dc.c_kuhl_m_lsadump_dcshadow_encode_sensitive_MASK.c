
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {size_t cbAttributes; TYPE_2__* pAttributes; int pSid; } ;
struct TYPE_15__ {TYPE_4__* pAttr; } ;
struct TYPE_16__ {TYPE_5__ AttrBlock; } ;
struct TYPE_17__ {TYPE_6__ Entinf; } ;
struct TYPE_13__ {size_t valCount; size_t pAVal; } ;
struct TYPE_14__ {TYPE_3__ AttrVal; } ;
struct TYPE_12__ {TYPE_1__* pAttribute; } ;
struct TYPE_11__ {int szAttributeName; int fIsSensitive; } ;
typedef TYPE_7__ REPLENTINFLIST ;
typedef int PSecPkgContext_SessionKey ;
typedef int * PSID ;
typedef TYPE_8__* PDCSHADOW_PUSH_REQUEST_OBJECT ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 size_t* FUNC_0 (int *,scalar_t__) ;
 scalar_t__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int,size_t,size_t,int ) ;

void FUNC_4(REPLENTINFLIST *VAR_1, PDCSHADOW_PUSH_REQUEST_OBJECT VAR_2, PSecPkgContext_SessionKey VAR_3)
{
 DWORD VAR_4, VAR_5;
 BOOL VAR_6 = VAR_0;
 DWORD VAR_7 = 0;
 PSID VAR_8 = &(VAR_2->pSid);

 for(VAR_4 = 0; VAR_4 < VAR_2->cbAttributes; VAR_4++)
 {
  if(!VAR_2->pAttributes[VAR_4].pAttribute->fIsSensitive)
   continue;

  VAR_6 = (FUNC_2(VAR_2->pAttributes[VAR_4].pAttribute->szAttributeName, L"unicodePwd")== 0 ||
     FUNC_2(VAR_2->pAttributes[VAR_4].pAttribute->szAttributeName, L"dBCSPwd") == 0 ||
     FUNC_2(VAR_2->pAttributes[VAR_4].pAttribute->szAttributeName, L"lmPwdHistory") == 0 ||
     FUNC_2(VAR_2->pAttributes[VAR_4].pAttribute->szAttributeName, L"ntPwdHistory") == 0);
  if(VAR_6)
   VAR_7 = *FUNC_0(VAR_8, (*FUNC_1(VAR_8)) - 1);
  for(VAR_5 = 0; VAR_5 < VAR_1->Entinf.AttrBlock.pAttr[VAR_4].AttrVal.valCount; VAR_5++)
   FUNC_3(VAR_6, VAR_7, VAR_1->Entinf.AttrBlock.pAttr[VAR_4].AttrVal.pAVal + VAR_5, VAR_3);
 }
}
