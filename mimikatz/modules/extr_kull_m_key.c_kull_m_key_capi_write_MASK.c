
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dwExExportFlagLen; struct TYPE_4__* pExExportFlag; scalar_t__ dwExPrivateKeyLen; struct TYPE_4__* pExPrivateKey; scalar_t__ dwExPublicKeyLen; struct TYPE_4__* pExPublicKey; scalar_t__ dwSiExportFlagLen; struct TYPE_4__* pSiExportFlag; scalar_t__ dwSiPrivateKeyLen; struct TYPE_4__* pSiPrivateKey; scalar_t__ dwSiPublicKeyLen; struct TYPE_4__* pSiPublicKey; scalar_t__ dwHashLen; struct TYPE_4__* pHash; scalar_t__ dwNameLen; struct TYPE_4__* pName; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PKULL_M_KEY_CAPI_BLOB ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,TYPE_1__*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;

BOOL FUNC_3(PKULL_M_KEY_CAPI_BLOB VAR_5, PVOID *VAR_6, DWORD *VAR_7)
{
 BOOL VAR_8 = VAR_0;
 PBYTE VAR_9;
 *VAR_7 = FUNC_0(VAR_1, VAR_4) + VAR_5->dwNameLen + VAR_5->dwHashLen + VAR_5->dwSiPublicKeyLen + VAR_5->dwSiPrivateKeyLen + VAR_5->dwSiExportFlagLen + VAR_5->dwExPublicKeyLen + VAR_5->dwExPrivateKeyLen + VAR_5->dwExExportFlagLen;
 if((*VAR_6 = FUNC_1(VAR_2, *VAR_7)))
 {
  VAR_9 = (PBYTE) *VAR_6;
  FUNC_2(VAR_9, VAR_5, FUNC_0(VAR_1, VAR_4));
  VAR_9 += FUNC_0(VAR_1, VAR_4);
  FUNC_2(VAR_9, VAR_5->pName, VAR_5->dwNameLen);
  VAR_9 += VAR_5->dwNameLen;
  FUNC_2(VAR_9, VAR_5->pHash, VAR_5->dwHashLen);
  VAR_9 += VAR_5->dwHashLen;
  FUNC_2(VAR_9, VAR_5->pSiPublicKey, VAR_5->dwSiPublicKeyLen);
  VAR_9 += VAR_5->dwSiPublicKeyLen;
  FUNC_2(VAR_9, VAR_5->pSiPrivateKey, VAR_5->dwSiPrivateKeyLen);
  VAR_9 += VAR_5->dwSiPrivateKeyLen;
  FUNC_2(VAR_9, VAR_5->pSiExportFlag, VAR_5->dwSiExportFlagLen);
  VAR_9 += VAR_5->dwSiExportFlagLen;
  FUNC_2(VAR_9, VAR_5->pExPublicKey, VAR_5->dwExPublicKeyLen);
  VAR_9 += VAR_5->dwExPublicKeyLen;
  FUNC_2(VAR_9, VAR_5->pExPrivateKey, VAR_5->dwExPrivateKeyLen);
  VAR_9 += VAR_5->dwExPrivateKeyLen;
  FUNC_2(VAR_9, VAR_5->pExExportFlag, VAR_5->dwExExportFlagLen);
  VAR_8 = VAR_3;
 }
 return VAR_8;
}
