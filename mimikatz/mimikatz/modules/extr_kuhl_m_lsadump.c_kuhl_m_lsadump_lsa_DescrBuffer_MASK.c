
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_14__ {int DefaultSaltLength; int OldCredentialCount; int CredentialCount; scalar_t__ DefaultSaltOffset; } ;
struct TYPE_13__ {int DefaultSaltLength; int OlderCredentialCount; int OldCredentialCount; int ServiceCredentialCount; int CredentialCount; int DefaultIterationCount; scalar_t__ DefaultSaltOffset; } ;
struct TYPE_12__ {size_t NtHash; size_t NtHistoryLength; size_t Data; size_t LmHash; size_t LmHistoryLength; int LmLength; int NtLength; } ;
struct TYPE_9__ {int LMHash; int LmPasswordPresent; int NTHash; int NtPasswordPresent; } ;
struct TYPE_11__ {int Private; int cbPrivate; TYPE_1__ Internal1; } ;
struct TYPE_10__ {size_t NumberOfHashes; int * Hash; } ;
typedef TYPE_2__* PWDIGEST_CREDENTIALS ;
typedef int PVOID ;
typedef TYPE_3__* PKIWI_SAMPR_USER_INTERNAL42_INFORMATION ;
typedef TYPE_4__* PKIWI_LSA_PRIVATE_DATA ;
typedef TYPE_5__* PKERB_STORED_CREDENTIAL_NEW ;
typedef TYPE_6__* PKERB_STORED_CREDENTIAL ;
typedef int PKERB_KEY_DATA_NEW ;
typedef int PKERB_KEY_DATA ;
typedef scalar_t__ PBYTE ;
typedef int KERB_STORED_CREDENTIAL_NEW ;
typedef int KERB_STORED_CREDENTIAL ;
typedef size_t DWORD ;


 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 char** VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (size_t,size_t,size_t,char*,int ) ;
 int FUNC_3 (TYPE_6__*,int ,int ,char*) ;
 int FUNC_4 (TYPE_5__*,int ,int ,char*) ;
 int FUNC_5 (int ,size_t,int) ;

void FUNC_6(DWORD VAR_5, DWORD VAR_6, PVOID VAR_7, DWORD VAR_8)
{
 DWORD VAR_9;
 PWDIGEST_CREDENTIALS VAR_10;
 PKERB_STORED_CREDENTIAL VAR_11;
 PKERB_KEY_DATA VAR_12;
 PKERB_STORED_CREDENTIAL_NEW VAR_13;
 PKERB_KEY_DATA_NEW VAR_14;
 PKIWI_SAMPR_USER_INTERNAL42_INFORMATION VAR_15;
 PKIWI_LSA_PRIVATE_DATA VAR_16;

 FUNC_1(L"\n * %s\n", (VAR_5 < FUNC_0(VAR_1)) ? VAR_1[VAR_5] : L"unknown");
 switch(VAR_5)
 {
 case 0:
  VAR_15 = (PKIWI_SAMPR_USER_INTERNAL42_INFORMATION) VAR_7;
  FUNC_1(L"    NTLM : ");
  if(VAR_15->Internal1.NtPasswordPresent)
   FUNC_5(VAR_15->Internal1.NTHash, VAR_2, 0);
  FUNC_1(L"\n    LM   : ");
  if(VAR_15->Internal1.LmPasswordPresent)
   FUNC_5(VAR_15->Internal1.LMHash, VAR_2, 0);
  FUNC_1(L"\n");
  if(VAR_15->cbPrivate)
  {
   VAR_16 = (PKIWI_LSA_PRIVATE_DATA) VAR_15->Private;
   if(VAR_16->NtLength)
    FUNC_2(VAR_16->NtHash, VAR_2, VAR_6, L"NTLM", VAR_0);
   if(VAR_16->NtHistoryLength)
    FUNC_2(VAR_16->Data, VAR_16->NtHistoryLength, VAR_6, L"ntlm", VAR_4);
   if(VAR_16->LmLength)
    FUNC_2(VAR_16->LmHash, VAR_2, VAR_6, L"LM  ", VAR_0);
   if(VAR_16->LmHistoryLength)
    FUNC_2(VAR_16->Data + VAR_16->NtHistoryLength, VAR_16->LmHistoryLength, VAR_6, L"lm  ", VAR_4);
  }
  break;
 case 1:
  FUNC_1(L"    %.*s\n", VAR_8 / sizeof(wchar_t), VAR_7);
  break;
 case 2:
  VAR_10 = (PWDIGEST_CREDENTIALS) VAR_7;
  for(VAR_9 = 0; VAR_9 < VAR_10->NumberOfHashes; VAR_9++)
  {
   FUNC_1(L"    %02u  ", VAR_9 + 1);
   FUNC_5(VAR_10->Hash[VAR_9], VAR_3, 0);
   FUNC_1(L"\n");
  }
  break;
 case 3:
  VAR_11 = (PKERB_STORED_CREDENTIAL) VAR_7;
  FUNC_1(L"    Default Salt : %.*s\n", VAR_11->DefaultSaltLength / sizeof(wchar_t), (PBYTE) VAR_11 + VAR_11->DefaultSaltOffset);
  VAR_12 = (PKERB_KEY_DATA) ((PBYTE) VAR_11 + sizeof(KERB_STORED_CREDENTIAL));
  VAR_12 = FUNC_3(VAR_11, VAR_12, VAR_11->CredentialCount, L"Credentials");
  FUNC_3(VAR_11, VAR_12, VAR_11->OldCredentialCount, L"OldCredentials");
  break;
 case 4:
  VAR_13 = (PKERB_STORED_CREDENTIAL_NEW) VAR_7;
  FUNC_1(L"    Default Salt : %.*s\n    Default Iterations : %u\n", VAR_13->DefaultSaltLength / sizeof(wchar_t), (PBYTE) VAR_13 + VAR_13->DefaultSaltOffset, VAR_13->DefaultIterationCount);
  VAR_14 = (PKERB_KEY_DATA_NEW) ((PBYTE) VAR_13 + sizeof(KERB_STORED_CREDENTIAL_NEW));
  VAR_14 = FUNC_4(VAR_13, VAR_14, VAR_13->CredentialCount, L"Credentials");
  VAR_14 = FUNC_4(VAR_13, VAR_14, VAR_13->ServiceCredentialCount, L"ServiceCredentials");
  VAR_14 = FUNC_4(VAR_13, VAR_14, VAR_13->OldCredentialCount, L"OldCredentials");
  FUNC_4(VAR_13, VAR_14, VAR_13->OlderCredentialCount, L"OlderCredentials");
  break;
 case 5:
  FUNC_1(L"    Random Value : ");
  FUNC_5(VAR_7, VAR_8, 0);
  FUNC_1(L"\n");
  break;
 default:
  FUNC_5(VAR_7, VAR_8, 1);
  FUNC_1(L"\n");
 }
}
