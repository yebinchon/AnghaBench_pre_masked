
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ aiKeyAlg; scalar_t__ reserved; int bVersion; int bType; } ;
struct TYPE_5__ {scalar_t__ dwKeyLen; TYPE_1__ Header; } ;
typedef TYPE_2__* PGENERICKEY_BLOB ;
typedef scalar_t__ PBYTE ;
typedef int LPCVOID ;
typedef int LPCBYTE ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef int GENERICKEY_BLOB ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;
typedef scalar_t__ ALG_ID ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,scalar_t__,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__,scalar_t__,int *,int *) ;

BOOL FUNC_5(HCRYPTPROV VAR_5, ALG_ID VAR_6, LPCVOID VAR_7, DWORD VAR_8, DWORD VAR_9, HCRYPTKEY *VAR_10, HCRYPTPROV *VAR_11)
{
 BOOL VAR_12 = VAR_2;
 PGENERICKEY_BLOB VAR_13;
 DWORD VAR_14 = sizeof(GENERICKEY_BLOB) + VAR_8;

 if(VAR_6 != VAR_0)
 {
  if((VAR_13 = (PGENERICKEY_BLOB) FUNC_1(VAR_3, VAR_14)))
  {
   VAR_13->Header.bType = VAR_4;
   VAR_13->Header.bVersion = VAR_1;
   VAR_13->Header.reserved = 0;
   VAR_13->Header.aiKeyAlg = VAR_6;
   VAR_13->dwKeyLen = VAR_8;
   FUNC_3((PBYTE) VAR_13 + sizeof(GENERICKEY_BLOB), VAR_7, VAR_13->dwKeyLen);
   VAR_12 = FUNC_0(VAR_5, (LPCBYTE) VAR_13, VAR_14, 0, VAR_9, VAR_10);
   FUNC_2(VAR_13);
  }
 }
 else if(VAR_11)
  VAR_12 = FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

 return VAR_12;
}
