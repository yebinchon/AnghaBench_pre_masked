
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pExExportFlag; struct TYPE_4__* pExPrivateKey; struct TYPE_4__* pExPublicKey; struct TYPE_4__* pSiExportFlag; struct TYPE_4__* pSiPrivateKey; struct TYPE_4__* pSiPublicKey; struct TYPE_4__* pHash; struct TYPE_4__* pName; } ;
typedef TYPE_1__* PKULL_M_KEY_CAPI_BLOB ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(PKULL_M_KEY_CAPI_BLOB VAR_0)
{
 if(VAR_0)
 {
  if(VAR_0->pName)
   FUNC_0(VAR_0->pName);
  if(VAR_0->pHash)
   FUNC_0(VAR_0->pHash);
  if(VAR_0->pSiPublicKey)
   FUNC_0(VAR_0->pSiPublicKey);
  if(VAR_0->pSiPrivateKey)
   FUNC_0(VAR_0->pSiPrivateKey);
  if(VAR_0->pSiExportFlag)
   FUNC_0(VAR_0->pSiExportFlag);
  if(VAR_0->pExPublicKey)
   FUNC_0(VAR_0->pExPublicKey);
  if(VAR_0->pExPrivateKey)
   FUNC_0(VAR_0->pExPrivateKey);
  if(VAR_0->pExExportFlag)
   FUNC_0(VAR_0->pExExportFlag);
  FUNC_0(VAR_0);
 }
}
