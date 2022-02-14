
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int calcChecksum ;
typedef scalar_t__ ULONG ;
typedef int UCHAR ;
struct TYPE_19__ {scalar_t__ valLen; int * pVal; } ;
struct TYPE_18__ {scalar_t__ Buffer; scalar_t__ MaximumLength; scalar_t__ Length; int member_2; int member_1; int member_0; } ;
struct TYPE_17__ {int digest; } ;
struct TYPE_16__ {scalar_t__ CheckSum; int EncryptedData; scalar_t__ Salt; } ;
struct TYPE_15__ {int SessionKeyLength; scalar_t__ SessionKey; } ;
typedef TYPE_1__ SecPkgContext_SessionKey ;
typedef int * PVOID ;
typedef TYPE_1__* PSecPkgContext_SessionKey ;
typedef TYPE_3__* PENCRYPTED_PAYLOAD ;
typedef scalar_t__ PBYTE ;
typedef TYPE_4__ MD5_CTX ;
typedef scalar_t__ DWORD ;
typedef TYPE_5__ CRYPTO_BUFFER ;
typedef int BOOL ;
typedef TYPE_6__ ATTRVAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,scalar_t__,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 int FUNC_9 (TYPE_5__*,TYPE_5__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (int ,int ,scalar_t__,scalar_t__*,int) ;
 TYPE_1__ VAR_7 ;

BOOL FUNC_11(ATTRVAL *VAR_8, SecPkgContext_SessionKey *VAR_9)
{
 BOOL VAR_10 = VAR_4;
 PSecPkgContext_SessionKey VAR_11 = VAR_9 ? VAR_9 : &VAR_7;
 PENCRYPTED_PAYLOAD VAR_12 = (PENCRYPTED_PAYLOAD) VAR_8->pVal;
 MD5_CTX VAR_13;
 CRYPTO_BUFFER VAR_14 = {VAR_5, VAR_5, VAR_13.digest}, VAR_15;
 DWORD VAR_16, VAR_17;
 PVOID VAR_18;

 if(VAR_11->SessionKey && VAR_11->SessionKeyLength)
 {
  if((VAR_8->valLen >= (ULONG) FUNC_0(VAR_2, VAR_3)) && VAR_8->pVal)
  {
   FUNC_2(&VAR_13);
   FUNC_3(&VAR_13, VAR_11->SessionKey, VAR_11->SessionKeyLength);
   FUNC_3(&VAR_13, VAR_12->Salt, sizeof(VAR_12->Salt));
   FUNC_1(&VAR_13);
   VAR_15.Length = VAR_15.MaximumLength = VAR_8->valLen - FUNC_0(VAR_2, VAR_1);
   VAR_15.Buffer = (PBYTE) &VAR_12->CheckSum;
   if(FUNC_6(FUNC_9(&VAR_15, &VAR_14)))
   {
    VAR_16 = VAR_8->valLen - FUNC_0(VAR_2, VAR_3);
    if(FUNC_10(VAR_0, VAR_12->EncryptedData, VAR_16, &VAR_17, sizeof(VAR_17)))
    {
     if(VAR_17 == VAR_12->CheckSum)
     {
      VAR_18 = VAR_8->pVal;
      if((VAR_8->pVal = (UCHAR *) FUNC_4(VAR_16)))
      {
       FUNC_8(VAR_8->pVal, VAR_12->EncryptedData, VAR_16);
       VAR_8->valLen = VAR_16;
       VAR_10 = VAR_6;
       FUNC_5(VAR_18);
      }
     }
     else FUNC_7(L"Checksums don\'t match (C:0x%08x - R:0x%08x)\n", VAR_17, VAR_12->CheckSum);
    }
    else FUNC_7(L"Unable to calculate CRC32\n");
   }
   else FUNC_7(L"RtlEncryptDecryptRC4\n");
  }
  else FUNC_7(L"No valid data\n");
 }
 else FUNC_7(L"No Session Key\n");
 return VAR_10;
}
