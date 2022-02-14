
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_21__ {scalar_t__ Flink; } ;
struct TYPE_20__ {int MasterKeyCount; int CredentialCount; int DomainKeyCount; int ** DomainKeys; int ** Credentials; int ** MasterKeys; int member_0; } ;
struct TYPE_15__ {scalar_t__ Flink; } ;
struct TYPE_19__ {int data; TYPE_2__ navigator; } ;
struct TYPE_16__ {scalar_t__ Flink; } ;
struct TYPE_18__ {int data; TYPE_3__ navigator; } ;
struct TYPE_14__ {scalar_t__ Flink; } ;
struct TYPE_17__ {int data; TYPE_1__ navigator; } ;
struct TYPE_13__ {scalar_t__ Flink; } ;
struct TYPE_12__ {scalar_t__ Flink; } ;
typedef int ** PVOID ;
typedef TYPE_4__* PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY ;
typedef TYPE_5__* PKUHL_M_DPAPI_OE_DOMAINKEY_ENTRY ;
typedef TYPE_6__* PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY ;
typedef int * PKUHL_M_DPAPI_MASTERKEY_ENTRY ;
typedef int * PKUHL_M_DPAPI_DOMAINKEY_ENTRY ;
typedef int * PKUHL_M_DPAPI_CREDENTIAL_ENTRY ;
typedef int LPCWSTR ;
typedef TYPE_7__ KUHL_M_DPAPI_ENTRIES ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (char*) ;
 TYPE_11__ VAR_2 ;
 TYPE_10__ VAR_3 ;
 TYPE_9__ VAR_4 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (TYPE_7__*,int ***,size_t*) ;
 scalar_t__ FUNC_5 (int ,int **,size_t) ;

BOOL FUNC_6(LPCWSTR VAR_5)
{
 BOOL VAR_6 = VAR_0;
 PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY VAR_7;
 PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY VAR_8;
 PKUHL_M_DPAPI_OE_DOMAINKEY_ENTRY VAR_9;
 KUHL_M_DPAPI_ENTRIES VAR_10 = {0};
 PVOID VAR_11;
 DWORD VAR_12, VAR_13;

 for(VAR_7 = (PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY) VAR_4.Flink; VAR_7 != (PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY) &VAR_4; VAR_7 = (PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY) VAR_7->navigator.Flink, VAR_10.MasterKeyCount++);
 for(VAR_8 = (PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_2.Flink; VAR_8 != (PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) &VAR_2; VAR_8 = (PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_8->navigator.Flink, VAR_10.CredentialCount++);
 for(VAR_9 = (PKUHL_M_DPAPI_OE_DOMAINKEY_ENTRY) VAR_3.Flink; VAR_9 != (PKUHL_M_DPAPI_OE_DOMAINKEY_ENTRY) &VAR_3; VAR_9 = (PKUHL_M_DPAPI_OE_DOMAINKEY_ENTRY) VAR_9->navigator.Flink, VAR_10.DomainKeyCount++);

 if(VAR_10.MasterKeyCount)
  if((VAR_10.MasterKeys = (PKUHL_M_DPAPI_MASTERKEY_ENTRY *) FUNC_0(VAR_1, VAR_10.MasterKeyCount * sizeof(PKUHL_M_DPAPI_MASTERKEY_ENTRY))))
   for(VAR_12 = 0, VAR_7 = (PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY) VAR_4.Flink; VAR_12 < VAR_10.MasterKeyCount; VAR_7 = (PKUHL_M_DPAPI_OE_MASTERKEY_ENTRY) VAR_7->navigator.Flink, VAR_12++)
    VAR_10.MasterKeys[VAR_12] = &VAR_7->data;

 if(VAR_10.CredentialCount)
  if((VAR_10.Credentials = (PKUHL_M_DPAPI_CREDENTIAL_ENTRY *) FUNC_0(VAR_1, VAR_10.CredentialCount * sizeof(PKUHL_M_DPAPI_CREDENTIAL_ENTRY))))
   for(VAR_12 = 0, VAR_8 = (PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_2.Flink; VAR_12 < VAR_10.CredentialCount; VAR_8 = (PKUHL_M_DPAPI_OE_CREDENTIAL_ENTRY) VAR_8->navigator.Flink, VAR_12++)
    VAR_10.Credentials[VAR_12] = &VAR_8->data;

 if(VAR_10.DomainKeyCount)
  if((VAR_10.DomainKeys = (PKUHL_M_DPAPI_DOMAINKEY_ENTRY *) FUNC_0(VAR_1, VAR_10.DomainKeyCount * sizeof(PKUHL_M_DPAPI_DOMAINKEY_ENTRY))))
   for(VAR_12 = 0, VAR_9 = (PKUHL_M_DPAPI_OE_DOMAINKEY_ENTRY) VAR_3.Flink; VAR_12 < VAR_10.DomainKeyCount; VAR_9 = (PKUHL_M_DPAPI_OE_DOMAINKEY_ENTRY) VAR_9->navigator.Flink, VAR_12++)
    VAR_10.DomainKeys[VAR_12] = &VAR_9->data;

 FUNC_3(L"Will encode:\n * %3u MasterKey(s)\n * %3u Credential(s)\n * %3u DomainKey(s)\n", VAR_10.MasterKeyCount, VAR_10.CredentialCount, VAR_10.DomainKeyCount);
 if(FUNC_4(&VAR_10, &VAR_11, &VAR_13))
 {
  FUNC_3(L"Encoded:\n * addr: 0x%p\n * size: %u\n", VAR_11, VAR_13);
  FUNC_3(L"Write file \'%s\': ", VAR_5);
  if(FUNC_5(VAR_5, VAR_11, VAR_13))
   FUNC_3(L"OK\n");
  else FUNC_2(L"\nkull_m_file_writeData");
  FUNC_1(VAR_11);
 }

 if(VAR_10.MasterKeys)
  FUNC_1(VAR_10.MasterKeys);
 if(VAR_10.Credentials)
  FUNC_1(VAR_10.Credentials);
 if(VAR_10.DomainKeys)
  FUNC_1(VAR_10.DomainKeys);

 return VAR_6;
}
