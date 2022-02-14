
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {int blobSize; scalar_t__ blob; } ;
typedef scalar_t__ PVOID ;
typedef int PKULL_M_CRED_LEGACY_CREDS_BLOB ;
typedef int PKULL_M_CRED_BLOB ;
typedef TYPE_1__* PKUHL_M_DPAPI_ENCRYPTED_CRED ;
typedef int PCWSTR ;
typedef scalar_t__ PBYTE ;
typedef int NTSTATUS ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int *,int,int **,int *,int ,scalar_t__*,int *,char*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_13 (int,int **,char*,int *,int *) ;

NTSTATUS FUNC_14(int VAR_2, wchar_t * VAR_3[])
{
 PCWSTR VAR_4;
 PVOID VAR_5, VAR_6;
 DWORD VAR_7, VAR_8;
 BOOL VAR_9;
 PKULL_M_CRED_BLOB VAR_10;
 PKULL_M_CRED_LEGACY_CREDS_BLOB VAR_11;

 if(FUNC_13(VAR_2, VAR_3, L"in", &VAR_4, ((void*)0)))
 {
  if(FUNC_12(VAR_4, (PBYTE *) &VAR_5, &VAR_7))
  {
   VAR_9 = FUNC_3((PBYTE) VAR_5 + sizeof(DWORD), &VAR_0);
   FUNC_11(0, VAR_9 ? VAR_5 : ((PKUHL_M_DPAPI_ENCRYPTED_CRED) VAR_5)->blob);
   if(FUNC_4(VAR_9 ? VAR_5 : ((PKUHL_M_DPAPI_ENCRYPTED_CRED) VAR_5)->blob, VAR_9 ? VAR_7 : ((PKUHL_M_DPAPI_ENCRYPTED_CRED) VAR_5)->blobSize, ((void*)0), VAR_2, VAR_3, ((void*)0), 0, &VAR_6, &VAR_8, VAR_9 ? L"Decrypting Legacy Credential(s):\n" : L"Decrypting Credential:\n"))
   {
    if(VAR_9)
    {
     if((VAR_11 = FUNC_8(VAR_6)))
     {
      FUNC_10(0, VAR_11);
      FUNC_9(VAR_11);
     }
    }
    else
    {
     if((VAR_10 = FUNC_5(VAR_6)))
     {
      FUNC_7(0, VAR_10);
      FUNC_6(VAR_10);
     }
    }
    FUNC_0(VAR_6);
   }
   FUNC_0(VAR_5);
  }
  else FUNC_2(L"kull_m_file_readData");
 }
 else FUNC_1(L"Input CRED file needed (/in:file)\n");
 return VAR_1;
}
